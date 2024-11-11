/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-adna <mel-adna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:29:01 by mel-adna          #+#    #+#             */
/*   Updated: 2024/10/30 19:41:53 by mel-adna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	c;

	i = ft_strlen(src);
	c = 0;
	if (destsize == 0)
		return (i);
	while (c < destsize - 1 && src[c] != '\0')
	{
		dst[c] = src[c];
		c++;
	}
	if (destsize > 0)
		dst[c] = '\0';
	return (i);
}
