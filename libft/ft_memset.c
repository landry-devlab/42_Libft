/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 09:49:06 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/25 14:57:18 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)pointer;
	while (i < count)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}
/*
Purpose:
--------
Fills a block of memory with a specified byte.

Description:
------------
The ft_memset() function writes 'count' bytes of value 'value' (converted to unsigned
char) to the memory area pointed to by 'pointer'

Return value:
------------
Returns a pointer to the memory area s.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_memset.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>//for printf
#include <string.h>//for memset

int main(void)
{
	char	c;
	size_t	size;
	char	str1[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str2[] = "Hello world!! Welcome to the 42 campus !!!";
	
	printf("\nYou are testing || ft_memset ||.");
	printf("Here an exemple of memory value (here a string) "
		"to work on: \n\n>>>\t%s\t<<<\n\n", str1);
	printf("->Enter the value to replace (ascii code or letter):");
	scanf(" %c", &c);
	printf("->Enter the number of bytes to be set to "
		"the value (0 < size < 42 =):");
	scanf(" %zd", &size);
	printf("ANSWER\n======");
//	printf("\n\t Before memset   : %s", str1);
	memset(str1, c, size);
	printf("\n\t After  memset   : %s", str1);
	ft_memset(str2, c, size);
	printf("\n\t with  ft_memset : %s\n", str2);
	return (0);
}*/
