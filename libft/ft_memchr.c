/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 08:52:03 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:17:00 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int searchedChar, size_t n)
{
	const unsigned char	*src;
	size_t				i;

	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)searchedChar)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}

/*
Purpose:
--------
Searches for a byte in a block of memory.

Description:
------------
The ft_memchr() function scans the first n bytes of the memory area
pointed to by s for the first occurrence of the byte searchedChar (converted to
unsigned char).

Return value:
------------
Returns a pointer to the matching byte if found; otherwise, returns NULL.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_memchr.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>//for printf
#include <string.h>//for memchr
#include <stddef.h>//for size_t

int main(void)
{
	size_t	size;
	char	str1[] = "Hello world!! Welcome to the 42 campus !!!";
	char	s[50];
	char	c;
	void	*ptr1;
	void	*ptr2;

	
	printf("\nYou are testing || ft_memchr ||.");
	printf("Here an exemple of memory value (here a string) "
		"to work on: \n\n>>>\t%s\t<<<\n\n", str1);
	printf("\nEnter a char as an input to search: ");
	scanf("%[^\n]", s);
	getchar();
	c = s[0] + 0;

	printf("\n\t Enter the number of bytes to search"
		" in the memory area(0 < size < 42 =):");
	scanf(" %zd", &size);
	printf("ANSWER\n======");
	ptr1 = memchr(str1, c, size);
	printf("\n\t with memchr    : %p", ptr1);
	ptr2 = ft_memchr(str1, c, size);
	printf("\n\t with ft_memchr : %p\n", ptr2);
	return (0);
}*/
