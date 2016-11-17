/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:06:22 by craffate          #+#    #+#             */
/*   Updated: 2016/11/17 18:57:11 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t		i;
	size_t		j;
	int			k;

	i = 0;
	j = 0;
	k = 1;
	if (str[0] == '\0')
		return (0);
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == 45)
		k = -1;
	i = (str[i] == 45 || str[i] == 43) ? i + 1 : i;
	while (str[i] >= 48 && str[i] <= 57)
		j = j * 10 + str[i++] - '0';
	return (k * j);
}
