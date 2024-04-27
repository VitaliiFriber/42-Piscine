/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:13:45 by friber            #+#    #+#             */
/*   Updated: 2024/04/27 16:30:21 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt_result;

	sqrt_result = 1;
	if (nb > 0)
	{
		while (sqrt_result * sqrt_result <= nb)
		{
			if (sqrt_result * sqrt_result == nb)
				return (sqrt_result);
			if (sqrt_result > 46340)
				return (0);
			sqrt_result++;
		}
	}
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(-1));
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(1));
// 	printf("%d\n", ft_sqrt(16));
// 	printf("%d\n", ft_sqrt(4));
// }
