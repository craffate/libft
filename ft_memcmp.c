/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:19:49 by craffate          #+#    #+#             */
/*   Updated: 2016/11/04 17:34:14 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	c;

	i = 0;
	c = 0;
	while (n > 0)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
		{
			c = ((char *)s1)[i] - ((char *)s2)[i];
			return (c);
		}
		i++;
		n--;
	}
	return (0);
}
