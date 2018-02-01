/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verificare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 18:24:36 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/31 16:53:19 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verificare_caractere(char *str, int nr_piese, int i, int puncte)
{
	int diez;
	int newline;

	diez = 0;
	newline = 0;
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '.')
			puncte++;
		if (str[i] == '#')
			diez++;
		if (str[i] == '\n')
			newline++;
		i++;
	}
	if (puncte != 12 * nr_piese)
		return (0);
	if (diez != 4 * nr_piese)
		return (0);
	if (newline != 4 * nr_piese + nr_piese - 1)
		return (0);
	return (1);
}

int	verificare_conexiuni(char *str, int i, int index_piesa, int conex)
{
	if (str[i + 1] == '#')
		conex++;
	if (str[i - 1] == '#')
		conex++;
	if (str[i - 5] == '#' && index_piesa > 3)
		conex++;
	if (str[i + 5] == '#' && index_piesa < 13)
		conex++;
	return (conex);
}

int	validare_piese(char *str)
{
	int i;
	int conex;
	int index_piesa;

	i = 0;
	conex = 0;
	index_piesa = 0;
	while (str[i])
	{
		if (str[i] != '\n')
			index_piesa++;
		if (str[i] == '#')
			conex = verificare_conexiuni(str, i, index_piesa, conex);
		if (index_piesa == 16)
		{
			if (conex != 6 && conex != 8)
				return (0);
			if (str[i + 1] != '\n')
				return (0);
			index_piesa = 0;
			conex = 0;
		}
		i++;
	}
	return (1);
}
