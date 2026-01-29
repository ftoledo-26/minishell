/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:12:34 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:12:34 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Extrae una subcadena de una cadena dada.
 *
 * Esta función extrae una subcadena de la cadena 's', comenzando en la posición
 * 'start' y teniendo una longitud máxima de 'len'. La subcadena extraída se
 * almacena en una nueva cadena y se devuelve.
 *
 * @param s      La cadena de origen de la que se extraerá la subcadena.
 * @param start  La posición de inicio de la subcadena en 's'.
 * @param len    La longitud máxima de la subcadena.
 * @return       Una nueva cadena que contiene la subcadena extraída, o NULL si
 *               falla la asignación de memoria.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
