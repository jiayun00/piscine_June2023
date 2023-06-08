/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:49:32 by jong              #+#    #+#             */
/*   Updated: 2023/05/29 14:44:02 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
/*
int main(void)
{
	char str1[] = "Hello";
	int len = 0;

	len = ft_strlen(str1);
	printf("%d\n", len);
	return (0);
}
*/
