/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:12:30 by maizpuru          #+#    #+#             */
/*   Updated: 2023/10/03 12:43:04 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*need)
		return ((char *)hay);
	while (hay[i])
	{
		j = 0;
		while (hay[i] == need[j] && hay[i] && i < len)
		{
			i++;
			j++;
		}
		if (!need[j])
			return ((char *)&hay[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
