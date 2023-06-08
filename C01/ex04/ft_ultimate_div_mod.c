/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:40:05 by jong              #+#    #+#             */
/*   Updated: 2023/05/22 15:42:56 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_result;
	int	mod_result;

	div_result = *a / *b;
	mod_result = *a % *b;
	*a = div_result;
	*b = mod_result;
}
/*
int main()
{
	int num1 = 17;
	int num2 = 4;

	printf("Before division: num1 = %d, num2 = %d\n", num1, num2);

	ft_ultimate_div_mod(&num1, &num2);

	printf("After division: quotinent = %d, remainder = %d\n", num1, num2);

	return 0;
}
*/
