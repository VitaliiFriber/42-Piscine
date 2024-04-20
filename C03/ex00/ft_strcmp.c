/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 22:16:38 by friber            #+#    #+#             */
/*   Updated: 2024/04/20 22:32:40 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_strcmp("42SCHOOL", "42SCHOOl"));
// 	printf("\n%d", ft_strcmp("42SCHOOL", "42"));
// 	printf("\n%d", ft_strcmp("42", "42SCHOOL"));
// 	printf("\n%d", ft_strcmp("42SCHOOL", "42SCHOOL"));
// }
