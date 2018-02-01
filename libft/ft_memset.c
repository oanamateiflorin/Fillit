/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:17:57 by moana             #+#    #+#             */
/*   Updated: 2018/01/17 14:20:05 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	if (!str)
		return (0);
	if (n == 0)
		return (str);
	i = 0;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}
