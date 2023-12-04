/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:15:34 by sben-tay          #+#    #+#             */
/*   Updated: 2023/12/04 16:54:28 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	check_arg(char c, va_list arg, int *compteur)
{
	if (c == 'c' || c == '%')
		ft_putchar((char)va_arg(arg, int), compteur);
	if (c == 's')
		ft_pustr(va_arg(arg, char *), compteur);
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int), compteur);
	if (c == 'u')
		ft_putnbr_unsigned(va_arg(arg, unsigned int), compteur);
	if (c == 'x')
		ft_putnbr_base(va_arg(arg, unsigned int), \
		"0123456789abcdef", compteur, c);
	if (c == 'X')
		ft_putnbr_base(va_arg(arg, unsigned int), \
		"0123456789ABCDEF", compteur, c);
	if (c == 'p')
		ft_putnbr_base(va_arg(arg, unsigned int), \
		"0123456789abcdef", compteur, c);
	va_end(arg);
	return (1);
}



int	ft_printf(const char *s, ...)
{
	size_t		i;
	int			flag;
	va_list		arg;
	char		*str;
	int			compteur;

	i = 0;
	flag = 0;
	compteur = 0;
	str = ft_strdup(s);
	va_start(arg, s);
	while (str[i])
	{
		if (str[i] == '%')
		{
			flag += check_arg(str[i] + 1, arg, &compteur);
			i++;
		}
		else
			ft_putchar(str[i], &ret_value);
		i++;
	}
	free(str);
	return (compteur);
}

// int main (void)
// {
// 	char c = 'c';
// 	ft_putchar(c);
// 	printf("%d\n", ft_putchar(c));
// }
