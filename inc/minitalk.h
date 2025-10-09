/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocarlo2 <jocarlo2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:55:03 by jocarlo2          #+#    #+#             */
/*   Updated: 2025/10/09 13:55:04 by jocarlo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define _POSIX_C_SOURCE 200809L
# include "../libft/inc/ft_printf.h"
# include "../libft/inc/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

void	print_message(int len);

#endif