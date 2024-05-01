/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:54:34 by vfriber           #+#    #+#             */
/*   Updated: 2024/04/28 15:53:07 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

char	*ft_strdup(char *src)
{
	char	*dup_str;

	dup_str = (char *)malloc(ft_strlen(src) + 1);
	if (dup_str == 0)
	{
		return (0);
	}
	ft_strcpy(dup_str, src);
	return (dup_str);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *test_str = "Hello 42!";
	char *dup_str = ft_strdup(test_str);
	printf("%s", dup_str);
}
