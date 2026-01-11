/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:25:05 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 11:25:07 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	if (!s || !fd)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
/*
Purpose:
--------
Writes a string followed by a newline to a given file descriptor.

Description:
------------
The ft_putendl_fd() function outputs the null-terminated string s to the
specified file descriptor fd, followed by a newline character ('\n').

Return value:
------------
This function does not return a value.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_putendl_fd.c

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
