/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:03:58 by zael-mou          #+#    #+#             */
/*   Updated: 2024/11/02 13:21:34 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
		((unsigned char *)ptr)[i++] = 0;
	return (ptr);
}
