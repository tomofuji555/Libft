/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:36:49 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/01 18:36:52 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t nsize)
{
	size_t	size;
	void	*block;

	if (n == 0 || nsize == 0)
	{
		n = 1;
		nsize = 1;
	}
	size = n * nsize;
	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	if (nsize != size / n)
		return (NULL);
	block = malloc(size);
	if (!block)
		return (NULL);
	ft_bzero(block, size);
	return (block);
}

// int main()
// {
// 	printf ("%p\n", calloc (0, 0));
// 	printf ("%p\n", ft_calloc(0, 0));
// }