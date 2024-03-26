/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:13:40 by maizpuru          #+#    #+#             */
/*   Updated: 2024/03/26 20:59:55 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;

	dest_len = 0;
	src_len = 0;
	total_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	total_len = dest_len + src_len;
	if (dest_len >= size)
		return (src_len + size);
	while (*src != '\0' && dest_len + 1 < size)
	{
		dest[dest_len] = *src;
		dest_len++;
		src++;
	}
	dest[dest_len] = '\0';
	return (total_len);
}
