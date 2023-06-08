/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:05:41 by jong              #+#    #+#             */
/*   Updated: 2023/05/22 15:46:09 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
	int num1 = 10;
	int num2 = 20;

	printf("Before swapping: num1 = %d, num2 = %d\n", num1, num 2);

	ft_swap(&num1, &num2);

	printf("After swapping: num1 = %d, num2 = %d\n", num1, num 2);

	return 0;
}
*/
