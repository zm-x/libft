/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:00:21 by zael-mou          #+#    #+#             */
/*   Updated: 2024/11/02 09:28:40 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*sreverse(char *str)
{
	size_t	i;
	size_t	j;
	char	c;
	size_t	l;

	i = 0;
	l = 0;
	j = ft_strlen(str) - 1;
	if (str[i] == '-')
		i++;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	nm;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	nm = n;
	str = (char *)malloc(nlen(nm) + 1);
	if (!str)
		return (NULL);
	if (nm < 0)
	{
		nm *= -1;
		str[i++] = '-';
	}
	while (nm != 0)
	{
		str[i++] = nm % 10 + '0';
		nm /= 10;
	}
	str[i] = '\0';
	return (sreverse(str));
}
