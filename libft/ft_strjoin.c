/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:16:06 by moana             #+#    #+#             */
/*   Updated: 2018/01/17 17:18:56 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*sir;

	if (!s1 || !s2)
		return (NULL);
	sir = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	while (s1[i] != '\0')
	{
		sir[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		sir[i + j] = s2[j];
		j++;
	}
	sir[i + j] = '\0';
	return (sir);
}
