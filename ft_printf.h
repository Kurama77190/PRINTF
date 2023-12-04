/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:30:15 by sben-tay          #+#    #+#             */
/*   Updated: 2023/12/04 17:07:30 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);

char	*ft_strdup(const char *s1);

void	ft_putchar(char c, int *compteur);

void	ft_putstr(char *str, int *compteur);

void	ft_putnbr(int nb, int *compteur);

void	ft_putnbr_unsigned(int nb, int *compteur);

void	ft_putnbr_base(\
		unsigned long long nbr, char *base, int *compteur, char c);

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s1);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		check_arg(char c, va_list arg, int *compteur);

#endif