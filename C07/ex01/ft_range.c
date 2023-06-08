/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:12:42 by jong              #+#    #+#             */
/*   Updated: 2023/06/05 14:49:04 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (min >= max)
	{
		return (NULL);
	}
	if (!arr)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
int main ()
{
	int *result = ft_range(8, 12);
	
	if (result != NULL)
	{
		printf("%d\n", result[0]); // Output: 8
		printf("%d\n", result[1]); // Output: 9
		printf("%d\n", result[2]); // Output: 10
		printf("%d\n", result[3]); // Output: 11
	}

	free (result);
	return (0);
}
*/
