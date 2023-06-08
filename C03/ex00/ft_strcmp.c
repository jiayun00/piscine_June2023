/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:07:01 by jong              #+#    #+#             */
/*   Updated: 2023/05/26 10:01:24 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*
int main()
{
	char str1[] = "HelloStranger";
	char str2[] = "HelloFriend";

	int result = ft_strcmp(str1, str2);

	printf("Comparison result: %d\n", result);
	return 0;
}
*/
