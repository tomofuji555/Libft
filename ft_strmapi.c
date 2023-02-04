/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:42:09 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/04 15:42:40 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*heap;
	size_t	i;

	if (!s || !f)
		return (NULL);
	heap = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (heap == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		heap[i] = f(i, *s);
		i++;
		s++;
	}
	heap[i] = '\0';
	return (heap);
}
