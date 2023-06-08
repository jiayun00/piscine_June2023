/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:21:04 by jong              #+#    #+#             */
/*   Updated: 2023/05/22 15:45:17 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int a = 8;
	int b = 3;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);

	printf("Division: %d\n", div);
	printf("Remainder: %d\n", mod);

	return 0;
}
*/
