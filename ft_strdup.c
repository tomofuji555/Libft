/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:40:54 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/18 13:43:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*a;

	i = 0;
	a = ((char *)malloc(ft_strlen(src) * sizeof(char) + 1));
	if (!a)
		return (NULL);
	while (src[i])
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
