/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:10:47 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:10:47 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * Escribe un carácter en un descriptor de archivo específico.
 *
 * Esta función toma un carácter 'c' y lo escribe en el descriptor de archivo
 * 'fd'.
 *
 * @param c     El carácter que se escribirá en el archivo.
 * @param fd    El descriptor de archivo donde se escribirá el carácter.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
