/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:17:46 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:12:24 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pointer, size_t count)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)pointer;
	while (i < count)
	{
		p[i] = 0;
		i++;
	}
}
/*
Purpose:
--------
Sets a block of memory to zero.

Description:
------------
The ft_bzero() function writes n zero bytes to the memory area pointed
to by s. It is equivalent to calling ft_memset() with a value of 0.

Return value:
------------
This function does not return a value.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_bzero.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>//for printf
#include <string.h>//for zero

int main(void)
{
	int		i;
	size_t	size;
	char	str1[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str2[] = "Hello world!! Welcome to the 42 campus !!!";
	
	printf("\nYou are testing || ft_bzero ||.");
	printf("Here an exemple of memory value (here a string) "
		"to work on: \n\n>>>\t%s\t<<<\n\n", str1);
	printf("\t Enter the number of bytes to be set to the 0 (0 < size < 42 =):");
	scanf(" %zd", &size);
	
	printf("ANSWER\n======");
	bzero(str1, size);
	printf("\n\t str after  bzero   : %s", str1);
	printf("\n(You should get nothing as printf stops after '\\0', but ...)");
	printf("\n\t> str[] diplayed with write function:\t");
	i = 0;
	while (i < 42)
	{
		printf("%c", str1[i]);
		i++;
	}

	ft_bzero(str2, size);
	printf("\n\n\t str after ft_bzero : %s", str2);

	printf("\n\t> str[] diplayed with write function:\t");
	i = 0;
	while (i < 42)
	{
		printf("%c", str2[i]);
		i++;
	}
	printf("\n");
}*/
