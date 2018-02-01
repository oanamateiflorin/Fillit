/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 22:38:23 by moana             #+#    #+#             */
/*   Updated: 2018/01/17 17:18:07 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sir;

	if (s == '\0')
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	sir = (char*)malloc(sizeof(char) * (len + 1));
	if (sir == '\0')
		return (0);
	i = 0;
	while (len--)
	{
		sir[i] = s[start + i];
		i++;
	}
	sir[i] = '\0';
	return (sir);
}
