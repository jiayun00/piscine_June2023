/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:20:16 by jong              #+#    #+#             */
/*   Updated: 2023/05/24 17:23:39 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + 32;
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
	printf("Lowercase string: %s\n", ft_strlowcase(str1));

	printf("Original string: %s\n", str2);
	printf("Lowercase string: %s\n", ft_strlowcase(str2));
	return 0;
}
*/
