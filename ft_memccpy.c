/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:08:03 by craffate          #+#    #+#             */
/*   Updated: 2016/11/05 18:40:48 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0 && ((unsigned char *)src)[i])
	{
		(((unsigned char *)dst)[i]) = (((const unsigned char *)src)[i]);
		if (((const unsigned char *)src)[i] == (unsigned char)c)
			return (&((unsigned char *)dst)[i + 1]);
		i++;
		n--;
	}
	return (NULL);
}
