/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:08:56 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:08:56 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Agrega un elemento al final de una lista enlazada.
 *
 * Esta función agrega el elemento 'new' al final de la lista enlazada 'lst'.
 * Si la lista está vacía, 'new' se convierte en el primer elemento de la lista.
 *
 * @param lst  La dirección del puntero al primer elemento de la lista.
 * @param new  El elemento que se desea agregar al final de la lista.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		(ft_lstlast(*lst))->next = new;
	else
		*lst = new;
}
