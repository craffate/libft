/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:29:01 by craffate          #+#    #+#             */
/*   Updated: 2016/11/08 17:16:41 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = -1;
	if ((s1[0] && s2[0]) == '\0')
		return (1);
	if (s1[i] && s2[i])
	{
		i++;
		ft_strequ(&s1[i], &s2[i]);
		return (1);
	}
	return (0);
}
