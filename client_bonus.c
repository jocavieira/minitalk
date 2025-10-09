/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:03:38 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/10/09 13:53:01 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/minitalk.h"

void	confirm_handler(int signal)
{
	if (signal == SIGUSR1)
	{
		write(1, "Roger That, Over!\n", 18);
		exit(0);
	}
}

void	send_msg(int pid, unsigned char c)
{
	int	bit_index;

	bit_index = 0;
	while (bit_index < 8)
	{
		if ((c >> bit_index) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit_index++;
	}
}

int	main(int argc, char **argv)
{
	pid_t				pid;
	char				*msg;
	struct sigaction	sa;

	sa.sa_handler = confirm_handler;
	sa.sa_flags = SA_RESTART;
	sigemptyset(&sa.sa_mask);
	if (argc != 3)
	{
		ft_printf("Wrong!\n");
		ft_printf("Correct usage %s <PID> <message>", argv[0]);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	msg = argv[2];
	sigaction(SIGUSR1, &sa, NULL);
	while (*msg)
	{
		send_msg(pid, *msg);
		msg++;
	}
	send_msg(pid, '\0');
	pause();
	return (0);
}
