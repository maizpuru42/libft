/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:21:52 by maizpuru          #+#    #+#             */
/*   Updated: 2023/09/29 12:00:27 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*dst;
	unsigned char		*src;

	dst = (unsigned char *)s2;
	src = (unsigned char *)s1;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*dst != *src)
			return (*src - *dst);
		src++;
		dst++;
	}
	return (0);
}
