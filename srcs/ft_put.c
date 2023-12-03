/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:02:29 by sben-tay          #+#    #+#             */
/*   Updated: 2023/12/03 16:38:08 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c, int *compteur)
{
	write(1, &c, 1);
	(*compteur)++;
}

void	ft_putstr(char *str, int *compteur)
{
	int	i;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			ft_putchar(str[i], compteur);
			i++;
		}
		return ;
	}
	else
	{
		write(1, "(null)", 6);
		*compteur += 6;
	}
}


void	ft_putnbr(int nb, int *compteur)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		*compteur += 11;
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-', compteur);
		ft_putnbr(nb *(-1), compteur);
	}
	else if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, compteur);
	else
	{
		ft_putnbr(nb / 10, compteur);
		ft_putnbr(nb % 10, compteur);
	}
}


void	ft_putnbr_unsigned(int nb, int *compteur)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, compteur);
	else if (nb >= 10)
	{
		ft_putnbr_unsigned(nb / 10, compteur);
		ft_putnbr_unsigned(nb % 10, compteur);
	}
	else
		return ;
}

void	ft_putnbr_base(\
		unsigned long long nbr, char *base, int *ret_value, char c)
{
	if (c == 'p')
	{
		if (nbr != 0)
			ft_putstr("0x", ret_value);
		if (nbr == 0)
		{
			ft_putstr("(nil)", ret_value);
			return ;
		}
		c++;
	}
	if (c != 'p')
	{
		if (nbr >= 16)
			ft_putnbr_base(nbr / 16, base, ret_value, c);
		ft_putchar(base[nbr % 16], ret_value);
	}
}

	
// 	int position_ds_tableau = c /ft_strlen(base);
// 	char char_a_imprimer = base[position_ds_tableau];
// }
// int main (void)
// {
// 	int i = INT_MAX;
// 	int compteur = 0;
// 	char *str = "";

// 	printf("putnbr de printf : \n");
// 	ft_putnbr_unsigned(i, &compteur);
// 	printf("\n");
// 	printf("resultat compteur : %d\n", compteur);

// 	printf("putstr de printf\n");
// 	ft_putstr(str, &compteur);
// 	printf("\n");
// 	printf("nombre de lettre : %d", compteur);

// }
int main (void)
{
	int i = 1;
	char c = 'p';
	char *base = "0123456789abcdef";
	int compteur = 0;
	
	
	ft_putnbr_base(i, base, &compteur, c);
}