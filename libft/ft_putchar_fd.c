/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:59:40 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 10:59:42 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
Purpose:
--------
Writes a character to a given file descriptor.

Description:
------------
The ft_putchar_fd() function outputs the character 'c' to the specified
file descriptor 'fd'. This allows writing to standard output, standard
error, or any open file.

Return value:
------------
This function does not return a value.

Testing:
--------
(with fd set to 1)
Compile the test file using:
	cc -Wall -Wextra -Werror ft_putchar_fd.c

Run the program with:
	./a.out <char_to_print>
*/
/*
#include <stdio.h>

int main(int ac, char **av)
{
	int	i;

	if (ac !=2)
		return (-1);

	printf("Input :%s\n", av[1]);
	printf("Output:");
	fflush(stdout);//to force the buffer to be written
	i = 0;
	while (av[1][i])
		ft_putchar_fd(av[1][i++], 1);
	return (0);
}
*/
