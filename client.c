/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:03:38 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/10/06 11:39:52 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/minitalk.h"

void send_msg(int pid, unsigned char c)
{
	int bit_index;
	
	bit_index = 0;
	while (bit_index < 8)
	{
		if ((c >> bit_index) & 1)
			kill (pid, SIGUSR1);
		else
			kill (pid, SIGUSR2);
		usleep(100);
		bit_index++;
	}
}
int main(int argc, char **argv)
{
	pid_t pid;
	char *msg;
	if (argc != 3)
	{
		ft_printf("Wrong!\n");
		ft_printf("Correct usage %s <PID> <message>", argv[0]);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (!pid)
	{
		ft_printf("Wrong! The PID is a number\n");
		return (1);
	}
	msg = argv[2];
	while (*msg)
	{
		send_msg(pid, *msg);
		msg++;
	}
	send_msg(pid, '\0');
	return (0);
	
}