/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-adna <mel-adna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:56:30 by mel-adna          #+#    #+#             */
/*   Updated: 2024/11/11 08:22:59 by mel-adna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!s || *s == '\0')
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	*free_s(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	else
	{
		while (str[i])
		{
			free(str[i]);
			str[i] = NULL;
			i++;
		}
		free(str);
		str = NULL;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	wordlen;
	int		i;

	split = (char **)ft_calloc((ft_countwords(s, c) + 1), sizeof(char *));
	if (!split || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				wordlen = ft_strlen(s);
			else
				wordlen = ft_strchr(s, c) - s;
			split[i++] = ft_substr(s, 0, wordlen);
			if (!split[i - 1])
				return (free_s(split));
			s += wordlen;
		}
	}
	return (split);
}
