/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:32:04 by friber            #+#    #+#             */
/*   Updated: 2024/04/27 16:41:31 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 1;
	if (nb < 2)
	{
		return (0);
	}
	if (nb == i)
	{
		return (prime);
	}
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			prime = 0;
		}
		i++;
	}
	return (prime);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(-1));
// 	printf("%d\n", ft_is_prime(4));
// 	printf("%d\n", ft_is_prime(7));
// 	printf("%d\n", ft_is_prime(3));
// 	printf("%d\n", ft_is_prime(2));
// }
