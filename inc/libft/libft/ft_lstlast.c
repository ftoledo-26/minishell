/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:09:30 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:09:30 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Obtiene un puntero al último elemento de una lista enlazada.
 *
 * Esta función devuelve un puntero al último elemento de la lista enlazada
 * `lst`. Si la lista está vacía, devuelve NULL.
 *
 * @param lst El primer elemento de la lista enlazada.
 * @return Un puntero al último elemento de la lista o NULL si la lista está
 *         vacía.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
