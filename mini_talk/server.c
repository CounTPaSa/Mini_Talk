/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:53:21 by merboyac          #+#    #+#             */
/*   Updated: 2024/02/21 17:00:34 by merboyac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_header.h"

void	ft_catch_signal(int signal)
{
	static int	bit_index = 0;
	static char	character = 0;

	if (signal == SIGUSR1)
		character = character | 1 << bit_index;
	bit_index++;
	if (bit_index == 8)
	{
		ft_putchar_fd(character, 1);
		bit_index = 0;
		character = 0;
	}
}

void	ft_put_pid(int pid)
{
	ft_putstr_fd("Server PID:", 1);
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	ft_put_pid(getpid());
	signal(SIGUSR1, ft_catch_signal);
	signal(SIGUSR2, ft_catch_signal);
	while (1)
		pause();
	return (0);
}
