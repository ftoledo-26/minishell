/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:50:46 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 16:50:46 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Asigna memoria y la inicializa a cero.
 *
 * Esta función asigna un bloque de memoria contigua lo suficientemente grande
 * para almacenar `num` elementos de tamaño `size` bytes cada uno. Luego,
 * inicializa todo el bloque de memoria asignado a cero (0). Es similar a la
 * función calloc de la biblioteca estándar de C.
 *
 * @param num  Número de elementos que se asignarán.
 * @param size Tamaño en bytes de cada elemento.
 * @return Un puntero al bloque de memoria asignado y inicializado
 *         o NULL si falla la asignación de memoria.
 */
void	*ft_calloc(size_t num, size_t size)
{
	void	*p;

	p = malloc(num * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (num * size));
	return (p);
}
