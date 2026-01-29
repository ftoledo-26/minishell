/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:12:39 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:12:39 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Convierte un carácter en mayúscula en su equivalente en minúscula.
 *
 * Si el carácter 'c' es una letra mayúscula (A-Z), esta función lo convierte
 * en su equivalente en minúscula y lo devuelve. Si 'c' no es una letra
 * mayúscula, se devuelve sin cambios.
 *
 * @param c  El carácter que se va a convertir en minúscula.
 * @return (El carácter 'c' convertido en minúscula, si es una letra mayúscula);
 *         de lo contrario, se devuelve sin cambios.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
