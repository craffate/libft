/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:20:25 by craffate          #+#    #+#             */
/*   Updated: 2016/11/08 17:23:54 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;

	i = ft_strlen(s1);
	while (*s2 && n > 0)
	{
		s1[i++] = *s2++;
		n--;
	}
	s1[i] = '\0';
	return (*&s1);
}
