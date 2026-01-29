/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:02:17 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:02:17 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un carácter es una letra alfabética.
 *
 * Esta función verifica si el carácter 'c' es una letra alfabética (mayúscula o
 * minúscula). Se consideran letras alfabéticas a los caracteres que van desde
 * 'A' hasta 'Z' y desde 'a' hasta 'z'.
 *
 * @param c El carácter que se desea verificar.
 * @return 1 si 'c' es una letra alfabética, 0 en caso contrario.
 */
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
