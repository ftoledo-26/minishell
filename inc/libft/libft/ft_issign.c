/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:03:12 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:03:12 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Verifica si un valor entero representa un signo (+ o -).
 *
 * Esta función verifica si el valor entero 'c' representa un signo, ya sea
 * positivo (+) o negativo (-). Los valores 43 y 45 corresponden a los códigos
 * ASCII de los signos '+' y '-' respectivamente.
 *
 * @param c El valor entero que se desea verificar.
 * @return 1 si 'c' representa un signo (+ o -), 0 en caso contrario.
 */
int	ft_issign(int c)
{
	return (c == 43 || c == 45);
}
