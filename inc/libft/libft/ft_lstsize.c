/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:09:53 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:09:53 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Cuenta el número de elementos en una lista enlazada.
 *
 * Esta función cuenta el número de elementos en la lista enlazada 'lst' y
 * devuelve ese número.
 *
 * @param lst  El puntero al primer elemento de la lista enlazada.
 * @return     El número de elementos en la lista enlazada.
 */
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
