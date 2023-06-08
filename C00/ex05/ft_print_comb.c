/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:30:17 by jong              #+#    #+#             */
/*   Updated: 2023/05/22 11:37:05 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int digit0, int digit1, int digit2)
{
	write(1, &digit0, 1);
	write(1, &digit1, 1);
	write(1, &digit2, 1);
}

void	ft_print_comb(void)
{
	char	digit0;
	char	digit1;
	char	digit2;

	digit0 = '0';
	while (digit0 <= '7')
	{
		digit1 = digit0 + 1;
		while (digit1 <= '8')
		{
			digit2 = digit1 +1;
			while (digit2 <= '9')
			{
				print_digit(digit0, digit1, digit2);
				if (digit0 != '7' || digit1 != '8' || digit2 != '9')
				{
					write(1, ", ", 2);
				}
				digit2++;
			}
			digit1++;
		}
		digit0++;
	}
}
