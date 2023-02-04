/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:41:32 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/01 20:35:55 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	if (size == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	i = 0;
	j = d_len;
	if (d_len >= size)
		return (size + s_len);
	if (d_len < size)
	{
		while (i < size - d_len - 1 && src[i] != '\0')
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	return (d_len + s_len);
}
