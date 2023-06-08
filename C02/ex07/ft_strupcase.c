/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:39:12 by jong              #+#    #+#             */
/*   Updated: 2023/05/24 17:19:29 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
/*
int main ()
{
	char str1[] = "Hello, World!";
	char str2[] = "pIsCinE-2023";

	printf("Original string: %s\n", str1);
	printf("Uppercase string: %s\n", ft_strupcase(str1));

	printf("Original string: %s\n", str2);
	printf("Uppercase string: %s\n", ft_strupcase(str2));
	return 0;
}
*/
