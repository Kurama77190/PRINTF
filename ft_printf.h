/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:30:15 by sben-tay          #+#    #+#             */
/*   Updated: 2023/11/24 21:30:23 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int	ft_printf(const char *text, ...);

int	ft_len_nb(long n);

int	ft_putchar(char c);

int	ft_putstr(char *str);

int	ft_putnbr_base(int nbr, char *base);

int	ft_pointeur(void *ptr, char *base);

int	ft_putnbr_base_neg(unsigned int nbr, char *base);

int	ft_len_nb_hexa(unsigned long n);

int	ft_putnbr_base_hex(unsigned int nbr, char *base);

#endif
