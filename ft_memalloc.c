/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:07:24 by craffate          #+#    #+#             */
/*   Updated: 2016/11/07 17:27:54 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char*)(malloc(size));
	if (!ptr)
		return (NULL);
	while (ptr[i])
		ptr[i++] = 0;
	return ((void*)ptr);
}
