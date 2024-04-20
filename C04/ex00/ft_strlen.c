/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 23:12:21 by friber            #+#    #+#             */
/*   Updated: 2024/04/20 23:20:48 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str0[] = "123456789";
// 	char	str1[]= "1234";
// 	char	str2[]= "12";

// 	printf("String str0 lenght %d\n", ft_strlen(str0));
// 	printf("String str1 lenght %d\n", ft_strlen(str1));
// 	printf("String str2 lenght %d\n", ft_strlen(str2));
// }