/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:12:08 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:12:08 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Aplica una función a cada carácter de una cadena y crea una nueva cadena con
 * los resultados.
 *
 * Esta función toma una cadena 's' y una función 'f' como argumentos. Luego,
 * aplica la función 'f' a cada carácter de la cadena 's' junto con su posición
 * en la cadena y crea una nueva cadena con los resultados. La nueva cadena se
 * devuelve como resultado.
 *
 * @param s  La cadena de entrada a la que se aplicará la función.
 * @param f  La función que se aplicará a cada carácter de la cadena 's'.
 * @return   La nueva cadena resultante después de aplicar la función 'f'.
 *           Si falla la asignación de memoria, la función devuelve NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = 0;
	while (i--)
		str[i] = f(i, s[i]);
	return (str);
}
