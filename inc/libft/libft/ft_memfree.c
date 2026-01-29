/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:10:31 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:10:31 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Libera la memoria asignada a un puntero y establece el puntero a NULL.
 *
 * Esta función libera la memoria asignada al puntero 'ptr' utilizando la
 * función 'free', y luego establece el puntero 'ptr' a NULL para evitar
 * problemas de acceso a memoria liberada.
 *
 * @param ptr   Puntero cuya memoria se va a liberar y establecer a NULL.
 */
void	ft_memfree(void *ptr)
{
	if (!ptr)
		return ;
	free(ptr);
	ptr = NULL;
}
