/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:28:33 by craffate          #+#    #+#             */
/*   Updated: 2016/11/08 17:29:46 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	s2 = (char *)(malloc(sizeof(char) * len + 1));
	i = 0;
	if (!s2)
		return (NULL);
	while (len > 0)
	{
		s2[i++] = s[start++];
		len--;
	}
	s2[i] = '\0';
	return (s2);
}
