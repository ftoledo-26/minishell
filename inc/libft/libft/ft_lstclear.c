/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:09:10 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:09:10 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Elimina y libera la memoria de todos los elementos de una lista enlazada.
 *
 * Esta función elimina y libera la memoria de todos los elementos de la lista
 * enlazada 'lst'. La función 'del' se utiliza para liberar la memoria de los
 * contenidos de los elementos.
 *
 * @param lst  La dirección del puntero al primer elemento de la lista.
 * @param del  La función utilizada para liberar la memoria de los contenidos de
 *             los elementos. Debe aceptar un puntero void * como argumento.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (*lst)
	{
		aux = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(aux);
	}
}
