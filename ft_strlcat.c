/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:59:23 by zael-mou          #+#    #+#             */
/*   Updated: 2024/11/02 17:37:17 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	originallen;

	i = 0;
	if (!dst && size == 0)
		return (ft_strlen(src));
	originallen = ft_strlen(dst);
	j = originallen;
	if (size <= j)
		return (ft_strlen(src) + size);
	while (src[i] && j < size - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (ft_strlen(src) + originallen);
}
