/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:43:10 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/04 15:42:24 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	d;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	d = ft_strlen(s1);
	while (ft_strchr((char *)set, s1[start]))
		start++;
	while (ft_strrchr((char *)set, s1[d]))
		d--;
	trim = ft_substr(s1, start, d - start + 1);
	return (trim);
}
