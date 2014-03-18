/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 15:18:17 by abrault           #+#    #+#             */
/*   Updated: 2014/03/18 16:12:43 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static int		get_nbr_elem(char *str, char sepa)
{
	char	*tok;
	int		i;

	i = 0;
	tok = ft_strtok(str, sepa);
	while (tok)
	{
		tok = ft_strtok(NULL, sepa);
		i++;
	}
	return (i);
}

static char		*get_type(char *str)
{
	int		nb_1;
	int		nb_2;

	nb_1 = get_nbr_elem(str, ' ');
	nb_2 = get_nbr_elem(str, '-');
	if (nb_2 == 2 && ft_strchr(str, '#') == NULL && nb_1 == 1)
		return ("Tube");
	else if (nb_1 == 3 && ft_strchr(str, '#') == NULL &&
			str[0] != 'L' && str[0] != '#' && nb_2 == 1)
		return ("Salle");
	else if (!ft_strcmp(("##start"), str) && nb_1 == 1 && nb_2 == 1)
		return ("Start");
	else if (!ft_strcmp(("##end"), str) && nb_1 == 1 && nb_2 == 1)
		return ("End");
	else if (str[0] == '#')
		return ("Commentaire");
	else if (ft_atoi(str) > 0 && nb_1 == 1 && nb_2 == 1)
		return ("Fourmies");
	return ("ERREUR");
}

int				main(void)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line) != 0)
	{
		ft_putstr(line);
		ft_putstr(" - ");
		ft_putendl(get_type(line));
	}
	return (0);
}
