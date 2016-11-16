/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 09:41:08 by craffate          #+#    #+#             */
/*   Updated: 2016/11/16 12:42:33 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordscounter(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (j == 0 && *s != c)
		{
			j = 1;
			i++;
		}
		else if (j == 1 && *s == c)
			j = 0;
		s++;
	}
	return (i);
}

static char		*ft_elements(char const *s, char c, size_t *i)
{
	char	*w;
	size_t	j;

	j = 0;
	if (!(w = (char *)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[*i] != c && s[*i])
	{
		w[j] = s[*i];
		j++;
		*i += 1;
	}
	w[j] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (w);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	words;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	words = ft_wordscounter(s, c);
	i = 0;
	if (!(arr = (char **)malloc(sizeof(char *) * words)))
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < words && s[i])
	{
		arr[j] = ft_elements(s, c, &i);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
