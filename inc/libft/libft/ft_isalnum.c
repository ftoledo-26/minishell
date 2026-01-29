/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:01:35 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:01:35 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un carácter es alfanumérico.
 *
 * Esta función verifica si el carácter 'c' es un carácter alfanumérico, es
 * decir, si es una letra (alfabética) o un dígito (numérico).
 *
 * @param c El carácter que se desea verificar.
 * @return 1 si 'c' es un carácter alfanumérico, 0 en caso contrario.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
