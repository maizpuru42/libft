/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:08:31 by maizpuru          #+#    #+#             */
/*   Updated: 2023/09/25 10:56:16 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	if (len == 0)
	{
		return (b);
	}
	p = (unsigned char *)b;
	*p = (unsigned char)c;
	ft_memset(p + 1, c, len - 1);
	return (b);
}
