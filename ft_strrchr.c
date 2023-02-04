/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:42:58 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/01 18:42:59 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;

	temp = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			temp = (&((char *)s)[i]);
		i++;
	}
	if (c == 0)
		temp = (&((char *)s)[i]);
	return (temp);
}
