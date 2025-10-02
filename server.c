/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:02:00 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/08/27 17:34:38 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/minitalk.h"

void handler(int signal)
{
	static int bit_index;
	static unsigned char character;

	if (signal == SIGUSR1)
		character |= (1 << bit_index);
	bit_index++;
	if (bit_index == 8)
	{
		if (character == '\0')
			write (1, "\n", 1);
		else
			write(1, &character, 1);
			
		bit_index = 0;
		character = 0;
	}
}
int main (void)
{
	struct sigaction sa;
	int pid;

	pid = getpid();
	sa.sa_handler = handler;
	sa.sa_flags = SA_RESTART;
	sigemptyset(&sa.sa_mask);

	ft_printf("The Server PID is : %d\n", pid);

	sigaction(SIGUSR1,&sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);

	while (1)
		pause();
	return (0);
}