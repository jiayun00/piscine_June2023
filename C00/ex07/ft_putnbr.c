/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:09:40 by jong              #+#    #+#             */
/*   Updated: 2023/05/22 11:38:46 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	info_putnbr(

	int	nb,

	char	*buffer,

	int	*length,

	int	*temp,

	int	*is_negative)
{
	*length = 0;
	*is_negative = 0;
	*temp = nb;
}

void	handle_negative(int *temp, int *is_negative)
{
	if (*temp < 0)
	{
		*is_negative = 1;
		*temp = -(*temp);
	}
}

void	ft_putnbr(int nb)
{
	char	buffer[20];
	int		length;
	int		temp;
	int		is_negative;

	info_putnbr(nb, buffer, &length, &temp, &is_negative);
	handle_negative(&temp, &is_negative);
	while (temp != 0)
	{
		buffer[length] = temp % 10 + '0';
		temp /= 10;
		length++;
	}
	if (is_negative)
	{
		write(1, "-", 1);
	}
	while (length > 0)
	{
		write(1, &buffer[length - 1], 1);
		length--;
	}
}

int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(3278);
	ft_putnbr(-23894);
	return (0);
}
