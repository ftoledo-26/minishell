/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:12:48 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:12:48 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Convierte un carácter en mayúsculas si es una letra minúscula.
 *
 * Esta función toma un carácter 'c' como argumento y, si 'c' es una letra
 * minúscula, la convierte en su equivalente en mayúsculas. Si 'c' no es
 * una letra minúscula, se devuelve sin cambios.
 *
 * @param c El carácter que se va a convertir a mayúsculas.
 * @return El carácter convertido o el mismo carácter si no es una letra
 *         minúscula.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
