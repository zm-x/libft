/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:27:15 by zael-mou          #+#    #+#             */
/*   Updated: 2024/11/01 15:40:01 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && *big)
	{
		while (big[j] == little[j] && big[j] && j + i < len)
		{
			j++;
			if (!little[j])
				return ((char *)big);
		}
		j = 0;
		i++;
		big++;
	}
	return (NULL);
}
