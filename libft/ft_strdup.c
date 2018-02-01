/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:35:24 by moana             #+#    #+#             */
/*   Updated: 2018/01/17 16:44:39 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;

	s_dup = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s_dup == 0)
		return (0);
	else
		return (ft_strcpy(s_dup, s));
}
