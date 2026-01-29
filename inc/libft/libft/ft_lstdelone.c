/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:09:18 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:09:18 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Elimina y libera la memoria de un solo elemento de una lista enlazada.
 *
 * Esta función elimina y libera la memoria de un solo elemento de la lista
 * enlazada 'lst'. La función 'del' se utiliza para liberar la memoria de su
 * contenido.
 *
 * @param lst  El elemento que se desea eliminar y liberar.
 * @param del  La función utilizada para liberar la memoria de los contenidos
 *             del elemento. Debe aceptar un puntero void * como argumento.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
