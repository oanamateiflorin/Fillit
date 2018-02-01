/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:10:14 by moana             #+#    #+#             */
/*   Updated: 2018/01/17 16:49:11 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *cp_dest;

	cp_dest = dest;
	while (*cp_dest != '\0')
		cp_dest++;
	while (*src != '\0' && n-- != 0)
		*cp_dest++ = *src++;
	*cp_dest = '\0';
	return (dest);
}
