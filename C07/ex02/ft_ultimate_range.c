/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:52:29 by vfriber           #+#    #+#             */
/*   Updated: 2024/04/28 16:12:33 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (-1);
	}
	else
	{
		while (i < max - min)
		{
			tab[i] = min + i;
			i++;
		}
		*range = tab;
		return (i);
	}
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
	min = 17;
	max = 32;
	size = max - min;
	ft_ultimate_range(&arr, min, max);
	while (count < size)
	{
		printf("%d ", arr[count]);
		count++;
	}
}
