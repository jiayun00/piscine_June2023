/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:56:15 by jong              #+#    #+#             */
/*   Updated: 2023/06/01 13:32:51 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_special_cases(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	return (-1);
}

int	square_root_iteration(int nb)
{
	int	sqrt_value;
	int	sqrt_next;

	sqrt_value = nb / 2;
	while (nb / 2)
	{
		sqrt_next = (sqrt_value + nb / sqrt_value) / 2;
		if (sqrt_next >= sqrt_value)
		{
			break ;
		}
		sqrt_value = sqrt_next;
	}
	return (sqrt_value);
}

int	ft_sqrt(int nb)
{
	int	special_case_result;
	int	sqrt_value;

	special_case_result = check_special_cases(nb);
	if (special_case_result != -1)
	{
		return (special_case_result);
	}
	sqrt_value = square_root_iteration(nb);
	if (sqrt_value * sqrt_value == nb)
	{
		return (sqrt_value);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
	int num = 9;
	int result = ft_sqrt(num);
	printf("The Square root of %d: %d\n", num, result);
	
	return 0;
}
*/
