/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:07:24 by craffate          #+#    #+#             */
/*   Updated: 2016/11/19 05:28:56 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	int		i;

	i = 0;
	if (!(ptr = (char*)(malloc(size))))
		return (NULL);
	while (ptr[i++])
		ptr[i] = 0;
	return (ptr);
}
