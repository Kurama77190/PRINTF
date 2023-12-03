/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:30:15 by sben-tay          #+#    #+#             */
/*   Updated: 2023/12/03 15:49:51 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *s, ...);

char	*ft_strdup(const char *s1);

void	ft_putchar(char c, int *compteur);

void	ft_putstr(char *str, int *compteur);

void	ft_putnbr(int nb, int *compteur);

void	ft_putnbr_unsigned(int nb, int *compteur);


#endif
