/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 23:44:12 by friber            #+#    #+#             */
/*   Updated: 2024/04/21 00:15:22 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	positive_or_negative;

	result = 0;
	positive_or_negative = 1;
	while (*str == ' ')
	{
		str++;
	}
	if (*str == '-')
	{
		positive_or_negative = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (positive_or_negative * result);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	str[]= "+1234ab567";
// 	char	str1[]= "-23321";

// 	printf("Number: %d\n", ft_atoi(str));
// 	printf("Number: %d\n", ft_atoi(str1));
// 	return (0);
// }
