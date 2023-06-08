/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:57:32 by jong              #+#    #+#             */
/*   Updated: 2023/05/29 15:50:45 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*pattern;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		start = str;
		pattern = to_find;
		while (*str != '\0' && *pattern != '\0' && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (start);
		}
		str = start + 1;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "Hello, world!";
	char to_find[] = "w";

	char *result = ft_strstr(str, to_find);

	if (result != NULL)
	{
		printf("Pattern found at position: %ld\n", result - str);
		printf("Substring: %s\n", result);
	}
	else
	{
		printf("Pattern not found.\n");
	}
	return 0;
}
*/
