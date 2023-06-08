/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:29:13 by jong              #+#    #+#             */
/*   Updated: 2023/06/05 12:15:54 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int main()
{
	int num = 1;
	int factorial = ft_iterative_factorial(num);

	printf("Factorial of %d is %d\n", num, factorial);
	return (0);
}
*/
