/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:11:31 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:11:31 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Duplica una cadena de caracteres.
 *
 * Esta función toma como entrada una cadena de caracteres 'str' y crea una
 * copia de esa cadena en un nuevo bloque de memoria dinámica. La función
 * devuelve un puntero a la copia de la cadena, o NULL si no se pudo asignar
 * memoria para la copia.
 *
 * @param str  La cadena de caracteres que se desea duplicar.
 *
 * @return     Un puntero a la copia de la cadena, o NULL en caso de error.
 */
char	*ft_strdup(const char *str)
{
	int		len;
	char	*copy;

	len = ft_strlen(str);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (len >= 0)
	{
		copy[len] = str[len];
		len--;
	}
	return (copy);
}
