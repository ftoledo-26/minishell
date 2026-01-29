/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:03:02 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:03:02 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un valor entero representa un dígito decimal.
 *
 * Esta función verifica si el valor entero 'c' representa un dígito decimal,
 * es decir, un número del 0 al 9.
 *
 * @param c El valor entero que se desea verificar.
 * @return 1 si 'c' representa un dígito decimal, 0 en caso contrario.
 */
int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
