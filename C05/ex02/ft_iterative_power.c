/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:37:10 by friber            #+#    #+#             */
/*   Updated: 2024/04/27 16:20:25 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(-3, -1));
// 	printf("%d\n", ft_iterative_power(-3, 0));
// 	printf("%d\n", ft_iterative_power(-3, 1));
// 	printf("%d\n", ft_iterative_power(-3, 2));
// 	printf("%d\n", ft_iterative_power(-3, 3));
// 	return (0);
// }
