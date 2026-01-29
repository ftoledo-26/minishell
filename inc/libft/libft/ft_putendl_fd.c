/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:10:51 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:10:51 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Escribe una cadena de caracteres seguida de un carácter de nueva línea en un
 * descriptor de archivo específico.
 *
 * Esta función toma una cadena de caracteres 's' y la escribe en el descriptor
 * de archivo 'fd', seguida de un carácter de nueva línea.
 *
 * @param s La cadena de caracteres que se escribirá en el archivo.
 * @param fd El descriptor de archivo donde se escribirá la cadena de
 *           caracteres y el carácter de nueva línea.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
