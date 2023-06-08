/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:44:14 by jong              #+#    #+#             */
/*   Updated: 2023/05/31 18:27:43 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (0 < n))
	{
		if (s1[i] != s2[i])
		{	
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char str1[] = "";
	char str2[] = "Hffe";

	int result = ft_strncmp(str1, str2, 5);

	printf("Comparison result: %d\n", result);
	return 0;
}
*/
