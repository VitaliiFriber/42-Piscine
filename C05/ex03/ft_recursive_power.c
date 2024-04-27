/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:38:00 by friber            #+#    #+#             */
/*   Updated: 2024/04/27 16:20:31 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n_copy;

	n_copy = nb;
	if (n_copy > n_copy * nb)
	{
		return (0);
	}
	else if (power > 1)
	{
		return (n_copy * ft_recursive_power(n_copy, power - 1));
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		return (n_copy);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(-3, -1));
// 	printf("%d\n", ft_recursive_power(-3, 0));
// 	printf("%d\n", ft_recursive_power(-3, 1));
// 	printf("%d\n", ft_recursive_power(-3, 2));
// 	printf("%d\n", ft_recursive_power(-3, 3));
// 	return (0);
// }
