/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:54:11 by maizpuru          #+#    #+#             */
/*   Updated: 2023/09/27 11:39:39 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	const char	*last;

	len = ft_strlen(s);
	last = s + (len - 1);
	while (len > 0)
	{
		if (*last == (char)c)
		{
			return ((char *)last);
		}
		last--;
		len--;
	}
	return (0);
}
