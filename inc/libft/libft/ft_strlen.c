/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:12:01 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:12:01 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Calcula la longitud de una cadena de caracteres.
 *
 * Esta función recibe una cadena de caracteres 'str' y devuelve la cantidad
 * de caracteres en la cadena, excluyendo el carácter nulo ('\0') al final.
 *
 * @param str  La cadena de caracteres cuya longitud se desea calcular.
 * @return     La cantidad de caracteres en la cadena 'str'.
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
