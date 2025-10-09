#include "inc/minitalk.h"
#include <stdlib.h>
#include <unistd.h>

static char *g_msg;

void build_msg(unsigned char c)
{
    static int len = 0;
    char *new;
    int i;

	i = -1;
    if (!c)
    {
        if (g_msg)
        {
            write(1, g_msg, len);
            write(1, "\n", 1);
            free(g_msg);
        }
        g_msg = NULL;
        len = 0;
        return;
    }
    new = malloc(len + 2);
    if (!new) exit(1);
    while (++i < len)
		 new[i] = g_msg[i];
    new[len++] = c;
    new[len] = '\0';
    free(g_msg);
    g_msg = new;
}

void handler(int signal)
{
    static int bit_index;
    static unsigned char character;

    if (signal == SIGUSR1)
        character |= (1 << bit_index);

    bit_index++;

    if (bit_index == 8)
    {
        build_msg(character); // acumula caractere
        if (character == '\0')  // reinicia ao fim da mensagem
        {
            bit_index = 0;
            character = 0;
            return;
        }
        bit_index = 0;
        character = 0;
    }
}

int main(void)
{
    struct sigaction sa;
    int pid;

    pid = getpid();
    sa.sa_handler = handler;
    sa.sa_flags = SA_RESTART;
    sigemptyset(&sa.sa_mask);

    ft_printf("The Server PID is : %d\n", pid);

    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);

    while (1)
        pause();
    return 0;
}