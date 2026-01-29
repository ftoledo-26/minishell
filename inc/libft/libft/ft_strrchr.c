/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:12:26 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:12:26 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Busca la última aparición de un carácter en una cadena.
 *
 * Esta función busca la última aparición del carácter 'c' en la cadena 'str'.
 *
 * @param str La cadena en la que se realiza la búsqueda.
 * @param c El carácter que se busca.
 * @return Un puntero al último carácter 'c' en 'str', o NULL si no se encuentra
 */
char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	return (NULL);
}
