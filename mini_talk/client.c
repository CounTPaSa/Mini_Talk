/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:34:29 by merboyac          #+#    #+#             */
/*   Updated: 2024/02/21 17:00:39 by merboyac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_signal_message(int pid, char *message)
{
	int	bit_index;

	while (*message != '\0')
	{
		bit_index = 0;
		while (bit_index < 8)
		{
			if (*message & (1 << bit_index))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			bit_index++;
		}
		message++;
	}
}

int	main(int argc, char *argv[])
{
	int	server_pid;
	int	i;

	if (argc != 3)
	{
		return (ft_putendl_fd("Only Server PID and message allowed!", 1), 0);
	}
	if (argv[1])
	{
		i = 0;
		if (argv[1][i] == '-' || argv[1][i] == '+')
			i++;
		while (i < ft_strlen(argv[1]))
			if (!ft_isdigit(argv[1][i++]))
				return (ft_putendl_fd("server PID must be number!", 1), 0);
	}
	server_pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
		return (ft_putendl_fd("server PID must be positive", 1), 0);
	ft_signal_message(server_pid, argv[2]);
	return (0);
}
