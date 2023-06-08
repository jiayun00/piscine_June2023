/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:05:47 by jong              #+#    #+#             */
/*   Updated: 2023/05/24 15:26:35 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
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
	char str1[] = "12345678";
	char str2[] = "abc123";
	char str3[] = "";

	int result1 = ft_str_is_numeric(str1);
	int result2 = ft_str_is_numeric(str2);
	int result3 = ft_str_is_numeric(str3);

	printf("str1 is numeric? %d\n", result1);
	printf("str2 is numeric? %d\n", result2);
	printf("str3 is numeric? %d\n", result3);
	return 0;
}
*/
