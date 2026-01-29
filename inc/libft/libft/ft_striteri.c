/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:11:36 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:11:36 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Aplica una función a cada caracter de una cadena con índice.
 *
 * Esta función toma como entrada un String 's' y una función 'f'. Itera a
 * través de cada caracter en la cadena y llama a la función 'f' pasando el
 * índice del caracter y el propio caracter como argumentos. Esto permite
 * modificar o procesar cada caracter individualmente en la cadena.
 *
 * @param s  La cadena de caracteres a la que se aplicará la función.
 * @param f  La función que se aplicará a cada caracter.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = ft_strlen(s);
	while (i--)
		f(i, &s[i]);
}
