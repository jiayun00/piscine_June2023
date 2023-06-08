/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:01:26 by jong              #+#    #+#             */
/*   Updated: 2023/06/07 15:48:31 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dup_str;

	if (src == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(src) + 1;
	dup_str = malloc(len);
	if (dup_str != NULL)
	{
		ft_strcpy(dup_str, src);
	}
	return (dup_str);
}
/*
int main ()
{
	char *original_str = "Hello, world!";
	char *duplicate_str = ft_strdup(original_str);

	if (duplicate_str != NULL)
	{
		printf("Duplicate string : %s\n", duplicate_str);

		free(duplicate_str);
	}
	return (0);
}
*/
