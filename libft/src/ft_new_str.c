/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 16:53:51 by abrault           #+#    #+#             */
/*   Updated: 2014/03/03 18:14:26 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_new_str(int n)
{
	char	*str;
	int		i;

	i = -1;
	if (n == 0)
		return (NULL);
	str = malloc(sizeof(char) * (n + 1));
	while ((i++) && i <= n)
		str[i] = '*';
	str[n] = '\0';
	return (str);
}
