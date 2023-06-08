/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:48:39 by jong              #+#    #+#             */
/*   Updated: 2023/05/24 15:28:28 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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
	char str1[] = "hello";
	char str2[] = "Hello";
	char str3[] = "123hello";
	char str4[] = "";

	printf("str is lowercase? %d\n", ft_str_is_lowercase(str1));
	printf("str is lowercase? %d\n", ft_str_is_lowercase(str2));
	printf("str is lowercase? %d\n", ft_str_is_lowercase(str3));
	printf("str is lowercase? %d\n", ft_str_is_lowercase(str4));
	return 0;
}
*/
