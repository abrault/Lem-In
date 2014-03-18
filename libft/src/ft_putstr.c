/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 16:51:03 by abrault           #+#    #+#             */
/*   Updated: 2014/03/03 17:49:48 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <libft.h>

int		ft_putstr(const char *str)
{
	if (str == NULL)
		write(1, "(null)", 6);
	write(1, str, ft_strlen(str));
	return (1);
}
