/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:19:31 by friber            #+#    #+#             */
/*   Updated: 2024/04/27 16:00:10 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial_res;

	factorial_res = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		factorial_res *= nb--;
	}
	return (factorial_res);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(-2));
// 	printf("%d\n", ft_iterative_factorial(-1));
// 	printf("%d\n", ft_iterative_factorial(0));
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(2));
// 	printf("%d\n", ft_iterative_factorial(3));
// 	printf("%d\n", ft_iterative_factorial(4));
// }
