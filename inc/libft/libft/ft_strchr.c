/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:11:21 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:11:21 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Busca la primera ocurrencia de un carácter en una cadena de caracteres.
 *
 * Esta función busca la primera aparición del carácter 'c' en la cadena 'str' y
 * devuelve un puntero al primer carácter coincidente en 'str' o NULL si 'c' no
 * se encuentra en la cadena.
 *
 * @param str  La cadena de caracteres en la que se buscará 'c'.
 * @param c    El carácter que se desea encontrar en 'str'.
 *
 * @return Un puntero al primer carácter coincidente en 'str' o NULL si 'c' no
 *         se encuentra en la cadena.
 */
char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!(*str))
			return (NULL);
		str++;
	}
	return ((char *)str);
}
