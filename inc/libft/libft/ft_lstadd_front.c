/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:09:05 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:09:05 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Agrega un elemento al principio de una lista enlazada.
 *
 * Esta función agrega el elemento 'new' al principio de la lista enlazada
 * 'lst'. 'new' se convierte en el nuevo primer elemento de la lista y su 'next'
 * apunta al antiguo primer elemento.
 *
 * @param lst  La dirección del puntero al primer elemento de la lista.
 * @param new  El elemento que se desea agregar al principio de la lista.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
