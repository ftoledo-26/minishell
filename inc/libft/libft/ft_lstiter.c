/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:09:25 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:09:25 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Aplica una función a cada elemento de una lista enlazada.
 *
 * Esta función recorre la lista enlazada 'lst' y aplica la función 'f' a cada
 * elemento de la lista.
 *
 * @param lst  El primer elemento de la lista enlazada.
 * @param f    La función que se aplicará a cada elemento de la lista.
 *             Debe aceptar un puntero void * como argumento.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
