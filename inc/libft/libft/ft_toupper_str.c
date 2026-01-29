/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:12:44 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:12:44 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Convierte una cadena de caracteres en letras mayúsculas.
 *
 * Esta función toma una cadena de caracteres 'str' y convierte cada carácter
 * en ella a su equivalente en mayúsculas utilizando la función 'ft_toupper'.
 *
 * @param str  La cadena de caracteres que se va a convertir a mayúsculas.
 */
void	ft_toupper_str(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	while (len--)
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
