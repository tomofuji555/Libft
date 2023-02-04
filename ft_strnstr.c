/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:42:46 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/02 16:57:46 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	new_len;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	new_len = ft_strlen(needle);
	ft_strncmp(haystack, needle, new_len);
	while (*haystack != '\0' && len >= new_len && len > 0)
	{
		if (ft_strncmp(haystack, needle, new_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// int main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	char * empty = (char*)"";
// 	// printf("%d\n", strnstr(empty, "coucou", -1) == 0);
// 	printf("%d", ft_strnstr(empty, "coucou", -1) == 0);
// }