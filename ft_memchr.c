/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:03:01 by maizpuru          #+#    #+#             */
/*   Updated: 2023/09/29 10:18:01 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		h;

	src = (const unsigned char *)s;
	h = (unsigned char)c;
	while (n--)
		if (*src++ == h)
			return ((void *)src - 1);
	return (0);
}
