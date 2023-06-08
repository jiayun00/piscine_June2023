/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:18:59 by jong              #+#    #+#             */
/*   Updated: 2023/06/05 23:36:17 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		(*range)[i] = min++;
		i++;
	}
	return (size);
}
/*
int main ()
{
	int *range;
	int size = ft_ultimate_range(&range, 3, 8);

	if (size >= 0)
	{
		printf("Elements in the range: \n");
		for (int i = 0; i < size ; i++)
		{
			printf ("%d\n", range[i]);
		}
	}
	free(range);

	return (0);
}
*/
