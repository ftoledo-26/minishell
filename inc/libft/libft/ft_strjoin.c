/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:11:41 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:11:41 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Concatena dos cadenas de caracteres en una nueva cadena.
 *
 * Esta función toma como entrada dos cadenas de caracteres, 's1' y 's2', y crea
 * una nueva cadena que contiene la concatenación de ambas. La nueva cadena se
 * aloja dinámicamente en la memoria, por lo que el usuario debe liberar la
 * memoria cuando ya no sea necesaria utilizando la función 'free'.
 *
 * @param s1  La primera cadena de caracteres a concatenar.
 * @param s2  La segunda cadena de caracteres a concatenar.
 * @return    La nueva cadena resultante de la concatenación, o NULL en caso
 *            de error de asignación de memoria.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	str_len;
	size_t	i;

	str_len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = (char *)malloc(sizeof(char) * str_len);
	if (!s1 || !s2 || !str)
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = 0;
	return (str);
}
