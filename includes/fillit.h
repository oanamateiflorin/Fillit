/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:22:50 by moana             #+#    #+#             */
/*   Updated: 2018/01/31 16:55:30 by moana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	eroare(void);
int		nr_piese(char *str);
int		verificare_caractere(char *str, int nr_piese, int i, int puncte);
int		verificare_conexiuni(char *str, int i, int index_piesa, int conex);
int		validare_piese(char *str);
char	***get_matrix(char *buf);
char	**alocare_matrice(int size);
char	**transform(char *str, int count, int i);
void	golire_sol(char **sol);
char	**stergere_solutie(char **sol, int x, int t, int f);
void	ft_print_mat(char **mat);
int		verif_pct_linie(char *str);
int		lungime(char *str);
char	*ignor_pct(char *str);
int		tetri_departat(char *str, char c);
int		first_char(char *str);
int		verif(char **mat, char *str, int i, int j);
char	**inserare_solutie(char **mat, char *str, int i, int j);
int		ft_sqrt(int i);
void	fillit(char **str, int nr_piese);
void	ft_putendl(const char *s);
void	aux(char *str, int k, int j);
#endif
