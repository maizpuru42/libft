/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:31:23 by maizpuru          #+#    #+#             */
/*   Updated: 2023/07/23 14:56:59 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(int num_elements, int element_size)
{
	void	*ptr;

	ptr = malloc (num_elements * element_size);
	if (ptr == '\0')
		return (ptr);
	ft_bzero(ptr, num_elements * element_size);
	return (ptr);
}
