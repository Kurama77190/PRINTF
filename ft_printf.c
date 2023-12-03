/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:15:34 by sben-tay          #+#    #+#             */
/*   Updated: 2023/12/03 15:42:33 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	check_arg(char c, va_list arg, int *compteur)
{
	if (c == 'c')

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
			flag += check_arg(str[i] + 1, arg, &compteur);
			i++;
	}
}
