/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:38:02 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/04 15:53:30 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(int n)
{
	long int	temp;
	size_t		len;

	temp = n;
	len = 0;
	if (temp <= 0)
		len++;
	while (temp)
	{
		temp = temp / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*number;
	size_t		number_len;
	long int	temp;

	temp = n;
	number_len = count_len (n);
	number = malloc (sizeof (char) * (number_len) + 1);
	if (!number)
		return (NULL);
	if (n < 0)
		temp = -temp;
	number[number_len] = '\0';
	while (number_len -- > 0)
	{
		number[number_len] = temp % 10 + '0';
		temp = temp / 10;
	}
	if (n < 0)
	{
		number[0] = '-';
	}
	return (number);
}

// int main(void)
// {
// 	char *res;

// 	res = ft_itoa(0);
// 	printf("result;%d\n",-132 % 10);
// 	printf("%s\n", res);
// 	return 1;
// }