/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 14:18:40 by moana             #+#    #+#             */
/*   Updated: 2018/01/17 16:47:53 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *cp_dest;

	cp_dest = dest;
	while (*cp_dest != '\0')
		cp_dest++;
	while (*src != '\0')
		*cp_dest++ = *src++;
	*cp_dest = '\0';
	return (dest);
}
