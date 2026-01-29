/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfree_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:10:20 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:10:20 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Libera la memoria asignada para un array de cadenas de caracteres y el propio
 * array.
 *
 * Esta función libera la memoria asignada para cada cadena de caracteres en el
 * array 'ptr', y luego libera la memoria utilizada por el propio array 'ptr'.
 * Finalmente, establece el puntero 'ptr' a NULL para evitar problemas de acceso
 * a memoria liberada.
 *
 * @param ptr Puntero al array de cadenas de caracteres.
 */
void	ft_memfree_all(char **ptr)
{
	int	i;

	if (!ptr)
		return ;
	i = 0;
	while (ptr[i])
		ft_memfree(ptr[i++]);
	free(ptr);
	ptr = NULL;
}
