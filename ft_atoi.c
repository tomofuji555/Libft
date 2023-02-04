/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:36:25 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/04 15:36:51 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_isspace(const char *str, int *pi)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			check *= -1;
		i++;
	}
	*pi = i;
	return (check);
}

static int	overflow_check(long num, int check, const char str)
{
	long	ov_div;
	long	ov_mod;

	ov_div = LONG_MAX / 10;
	ov_mod = LONG_MAX % 10;
	if (check == 1)
	{
		if (ov_div < num)
			return (1);
		if (ov_div == num && str - '0' >= ov_mod)
			return (1);
	}
	return (0);
}

static int	underflow_check(long num, int check, char str)
{
	long	ov_div;
	long	ov_mod;

	ov_div = LONG_MIN / 10;
	ov_mod = LONG_MIN % 10;
	if (check == -1)
	{
		if (ov_div * (-1) < num)
			return (-1);
		if (num == ov_div * (-1) && str - '0' >= ov_mod * (-1))
			return (-1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	long	i;
	long	num;
	int		pi;
	int		check;

	check = st_isspace(str, &pi);
	i = pi;
	num = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (overflow_check(num, check, str[i]) == 1 && check == 1)
			return ((int)LONG_MAX);
		if (underflow_check(num, check, str[i]) == -1 && check == -1)
			return ((int)LONG_MIN);
		num = num * 10 + str[i] - '0';
		i++;
	}
	return ((int)(num * check));
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n",atoi("9223372036854775808"));
// 	printf("%d\n",ft_atoi("9223372036854775808"));
// }