/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:35:04 by maizpuru          #+#    #+#             */
/*   Updated: 2023/09/29 09:59:45 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;
	unsigned char		target;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	target = (unsigned char)c;
	while (n > 0)
	{
		*dst_ptr = *src_ptr;
		dst_ptr++;
		src_ptr++;
		n--;
		if (*(src_ptr - 1) == target)
		{
			return (dst_ptr);
		}
	}
	return (0);
}
