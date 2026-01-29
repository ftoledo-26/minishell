/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:11:07 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:11:07 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Escribe una cadena de caracteres en un descriptor de archivo específico.
 *
 * Esta función toma una cadena de caracteres 's' y la escribe en el descriptor
 * de archivo 'fd'.
 *
 * @param s La cadena de caracteres que se escribirá en el archivo.
 * @param fd El descriptor de archivo donde se escribirá el String.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
