/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:18:40 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 11:23:48 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	if (!fd)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}
/*
Purpose:
--------
Writes a string to a given file descriptor.

Description:
------------
The ft_putstr_fd() function outputs the string 's' to the specified
file descriptor 'fd'. This allows writing to standard output, standard
error, or any open file.

Return value:
------------
This function does not return a value.

Testing:
--------
(with fd set to 1)
Compile the test file using:
	cc -Wall -Wextra -Werror ft_putstr_fd.c

Run the program with:
	./a.out <string_to_print>
*/
/*
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac !=2)
		return (-1);
	printf("Input :%s\n", av[1]);
	printf("Output:");
	fflush(stdout);//to force the buffer to be written
	ft_putstr_fd(av[1], 1);
	return (0);
}*/
