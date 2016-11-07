/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:19:42 by craffate          #+#    #+#             */
/*   Updated: 2016/11/07 18:33:55 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = (char *)(malloc(sizeof(char) * (size + 1)));
	i = 0;
	if (!s)
		return (NULL);
	s[size] = '\0';
	while (i < size)
		s[i++] = '\0';
	return (s);
}
