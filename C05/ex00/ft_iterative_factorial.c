/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:19:31 by friber            #+#    #+#             */
/*   Updated: 2024/04/21 16:36:19 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial_result;
	int	i;

	factorial_result = 1;
	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		factorial_result = factorial_result * i;
		i++;
	}
	return (factorial_result);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(6));
// }
