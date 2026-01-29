/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:03:07 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:03:07 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un valor int representa un carácter imprimible en la tabla ASCII.
 *
 * Esta función verifica si el valor int `c` representa un carácter imprimible
 * en la tabla ASCII. Los caracteres imprimibles son aquellos con valores en el
 * rango de 32 (espacio) a 126 (tilde '~'), inclusivo.
 *
 * @param c El valor entero que se desea verificar.
 * @return 1 si 'c' representa un carácter imprimible, 0 en caso contrario.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
