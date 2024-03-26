/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maizpuru <maizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:10:46 by maizpuru          #+#    #+#             */
/*   Updated: 2023/10/16 13:23:40 by maizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_finder(char const *s, char c)
{
	size_t	strnum;

	strnum = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			strnum++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (strnum);
}

char	**free_all(char **res, size_t i)
{
	while (i)
	{
		free(res[i]);
		i--;
	}
	free(res[i]);
	free(res);
	return (NULL);
}

char	split_res(const char s)
{
	char	**res;
	size_t	i;
	size_t	len;

	i = 0;
	res = malloc(sizeof(char *) * (ft_finder(s, c) + 1));
    if (!res)
        return (0);
	while (*s)
    {
        if (*s != c)
        {
            len = 0;
            while (*s && *s != c && ++len)
                s++;
            res[i] = ft_substr(s - len, 0, len);
            if (!res[i])
                return (free_all(res, i));
            i++;
        }
        else
            s++;
    }
	return (res)
}

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (0);
	res = malloc(sizeof(char *) * (ft_finder(s, c) + 1));
	if (!res)
		return (0);
	split_res(**s);
	res[ft_strlen(res + 1)] = 0;
	return (res);
}
