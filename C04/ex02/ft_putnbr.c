/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 23:28:09 by friber            #+#    #+#             */
/*   Updated: 2024/04/20 23:39:21 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}

// int	main(void)
// {
// 	int	positive;
// 	int	negative;
// 	int	zero;
// 	int	max_negative;

// 	positive = 123456789;
// 	negative = -123;
// 	zero = 0;
// 	max_negative = -2147483648;
// 	ft_putnbr(positive);
// 	ft_putchar('\n');
// 	ft_putnbr(negative);
// 	ft_putchar('\n');
// 	ft_putnbr(zero);
// 	ft_putchar('\n');
// 	ft_putnbr(max_negative);
// }
