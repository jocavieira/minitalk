/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:32:42 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/10/09 13:34:10 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/minitalk.h"

static char	*g_msg;

void	build_msg(unsigned char c)
{
	static int	len;
	char		*new_msg;
	int			i;

	i = -1;
	if (!c)
	{
		print_message(len);
		return ;
	}
	new_msg = malloc(len + 2);
	if (!new_msg)
		exit(1);
	while (++i < len)
		new_msg[i] = g_msg[i];
	new_msg[len++] = c;
	new_msg[len] = '\0';
	free(g_msg);
	g_msg = new_msg;
}

void	print_message(int len)
{
	if (g_msg)
	{
		write(1, g_msg, len);
		write(1, "\n", 1);
		free(g_msg);
	}
	g_msg = NULL;
}

void	handler(int signal)
{
	static int				bit_index;
	static unsigned char	character;

	if (signal == SIGUSR1)
		character |= (1 << bit_index);
	bit_index++;
	if (bit_index == 8)
	{
		build_msg(character);
		if (character == '\0')
		{
			bit_index = 0;
			character = 0;
			return ;
		}
		bit_index = 0;
		character = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;
	int					pid;

	pid = getpid();
	sa.sa_handler = handler;
	sa.sa_flags = SA_RESTART;
	sigemptyset(&sa.sa_mask);
	ft_printf("The Server PID is : %d\n", pid);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
