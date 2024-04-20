/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: friber <friber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 22:46:32 by friber            #+#    #+#             */
/*   Updated: 2024/04/20 22:54:46 by friber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*temp;

	temp = str;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*temp)
	{
		i = 0;
		if (*temp == to_find[0])
		{
			while (temp[i] == to_find[i] && to_find[i])
			{
				i++;
			}
			if (to_find[i] == '\0')
			{
				return (temp);
			}
		}
		temp++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[] = "Hi, how are you?";
// 	printf("%s", ft_strstr(str, " "));
// }
