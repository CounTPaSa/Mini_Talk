/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:43:05 by merboyac          #+#    #+#             */
/*   Updated: 2024/02/21 14:23:11 by merboyac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_HEADER_H
# define MINI_HEADER_H

#include <signal.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putstr_fd(char *s, int fd);

int		ft_atoi(const char *nptr);


#endif
