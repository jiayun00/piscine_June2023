/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:45:56 by jong              #+#    #+#             */
/*   Updated: 2023/05/24 15:57:02 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
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
	char str1[] = "H3LL0, W04LD!";
	char str2[] = "Hello\tWorld!";

	printf("str is printable? %d\n", ft_str_is_printable(str1));
	printf("str is printable? %d\n", ft_str_is_printable(str2));
	return 0;
}
*/
