/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 16:30:13 by moana             #+#    #+#             */
/*   Updated: 2018/01/17 20:14:42 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int j;
	int	size;

	i = -1;
	size = 0;
	while (str2[++i] != '\0')
		size++;
	if (size == 0)
		return ((char*)str1);
	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] == str1[i + j])
		{
			if (str2[j + 1] == '\0')
				return ((char*)str1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
