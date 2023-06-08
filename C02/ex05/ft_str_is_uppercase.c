/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:29:10 by jong              #+#    #+#             */
/*   Updated: 2023/05/24 15:44:49 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main()
{
	char str1[] = "HELLO";
	char str2[] = "Hello";
	char str3[] = "123hello";
	char str4[] = "";

	printf("str is uppercase? %d\n", ft_str_is_uppercase(str1));
	printf("str is uppercase? %d\n", ft_str_is_uppercase(str2));
	printf("str is uppercase? %d\n", ft_str_is_uppercase(str3));
	printf("str is uppercase? %d\n", ft_str_is_uppercase(str4));
	return 0;
}
*/
