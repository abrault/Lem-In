/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 17:59:48 by abrault           #+#    #+#             */
/*   Updated: 2014/03/03 18:15:53 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_fustr(char *str_1, char *str_2)
{
	char	*new_str;

	if (str_1 == NULL && str_2 == NULL)
		return (NULL);
	new_str = ft_new_str(ft_strlen(str_1) + ft_strlen(str_2));
	ft_strcpy(new_str, str_1);
	ft_strcat(new_str, str_2);
	return (new_str);
}
