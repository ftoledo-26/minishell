/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:11:03 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:11:03 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * ft_putnbr_fd - Imprime un número entero en un descriptor de archivo
 * @n: El número entero a imprimir
 * @fd: El descriptor de archivo donde escribir
 *
 * Descripción:
 *   Escribe el número entero @n en el descriptor de archivo @fd. La función
 *   gestiona números negativos imprimiendo un signo menos primero, luego
 *   procesa recursivamente cada dígito del valor absoluto.
 *
 * Retorno: void
 */
/**
 * ft_putnbr_fd - Outputs an integer to a given file descriptor
 * @n: The integer to output
 * @fd: The file descriptor on which to write
 *
 * Description:
 *   Writes the integer @n to the file descriptor @fd. The function
 *   handles negative numbers by printing a minus sign first, then
 *   recursively processes each digit of the absolute value.
 *
 * Return: void
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
