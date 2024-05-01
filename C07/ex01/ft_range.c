/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:19:29 by vfriber           #+#    #+#             */
/*   Updated: 2024/04/28 16:10:59 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
	{
		return (NULL);
	}
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	count;
	int	size;

	count = 0;
	min = 11;
	max = 22;
	size = max - min;
	arr = ft_range(min, max);
	while (count < size)
	{
		printf("%d ", arr[count]);
		count++;
	}
}
