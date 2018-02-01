/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 15:47:07 by moana             #+#    #+#             */
/*   Updated: 2018/01/31 16:51:49 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		fd;
	int		str_size;
	char	**mat;

	if (argc != 2)
	{
		ft_putendl("usage: ./fillit file_name");
		return (0);
	}
	str = (char*)malloc(sizeof(char) * 546);
	if (!str)
		eroare();
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		eroare();
	str_size = read(fd, str, 546);
	if (str_size == -1)
		eroare();
	str[str_size + 1] = '\0';
	if (verificare_caractere(str, nr_piese(str), 0, 0) == 0 ||
			validare_piese(str) == 0)
		eroare();
	mat = transform(str, nr_piese(str), -1);
	fillit(mat, nr_piese(str));
}
