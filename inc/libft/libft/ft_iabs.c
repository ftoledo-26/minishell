/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:50:46 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 16:50:46 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Calcula el valor absoluto de un número entero.
 *
 * Esta función toma un número entero 'nb' como entrada y devuelve su valor
 * absoluto, es decir, el número positivo equivalente al valor absoluto del
 * número original si 'nb' es negativo. Si 'nb' es positivo o cero, la función
 * simplemente devuelve 'nb' sin cambios.
 *
 * @param nb El número entero del que se calculará el valor absoluto.
 * @return El valor absoluto de 'nb' (si 'nb' es negativo) o 'nb'
 *         (si 'nb' es no negativo).
 */
int	ft_iabs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}
