/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:20:50 by jong              #+#    #+#             */
/*   Updated: 2023/05/31 14:34:44 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (((*str >= 9) && (*str <= 13)) || (*str == 32))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	while ((*str) && (*str >= '0') && (*str <= '9'))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
/*
int	main(void)
{
	char	buffer_6[100];
	char	buffer_7[100];
	char	buffer_8[100];
	char	buffer_9[100];

	sprintf(buffer_6, "%d", INT_MAX);
	sprintf(buffer_7, "%d", INT_MIN);
	sprintf(buffer_8, " \r \t   \f --++-+--%d", INT_MAX);
	sprintf(buffer_9, "  \n  \v -+--+-%d", 'M');
	ualarm(100, 0);
	printf("%i,%i,%i,%i,%i,%i,%i,%i",
		ft_atoi("44"),
		ft_atoi("-53"),
		ft_atoi("–2147483648sdfsfs4534533"),
		ft_atoi("     -+++-+-+-+---5dsd"),
		ft_atoi(buffer_6),
		ft_atoi(buffer_7),
		ft_atoi(buffer_8),
		ft_atoi(buffer_9));
}
*/
