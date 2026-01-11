/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:42:13 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 11:42:15 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (!fd)
		return ;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n > 9)
			ft_putnbr_fd((n / 10), fd);
		c = '0' + n % 10;
		write(fd, &c, 1);
	}
}
/*
Purpose:
--------
Writes an integer to a given file descriptor.

Description:
------------
The ft_putnbr_fd() function outputs the integer n to the specified file
descriptor fd. It handles negative numbers correctly and prints the
digits as characters in decimal notation.

Return value:
------------
This function does not return a value.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_putnbr_fd.c

Run the program with:
	./a.out <string_number_to_print>
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac !=2)
		return (-1);
	printf("Input :%s\n", av[1]);
	printf("Output:");
	fflush(stdout);//to force the buffer to be written
	ft_putnbr_fd(atoi(av[1]), 1);
	return (0);
}
*/
