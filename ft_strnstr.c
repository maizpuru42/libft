/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:12:30 by maizpuru          #+#    #+#             */
/*   Updated: 2023/09/29 13:24:55 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	const char		*dst;
	const char		*src;
	int				i;
	int				h;

	dst = (const char *)need;
	src = (const char *)hay;
	i = 0;
	h = 0;
	if (need)
		return ((char *)hay);
	while (len-- && src)
	{
		if (*dst == *src)
		{
			src++;
			dst++;
		}
		src++;
		return ((char *)src);
	}
	return (0);
}
