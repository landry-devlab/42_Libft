/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 09:36:03 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:18:58 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;
	size_t				i;

	src1 = s1;
	src2 = s2;
	i = 0;
	while (i < n)
	{
		if (src1[i] == src2[i])
			i++;
		else
			return (src1[i] - src2[i]);
	}
	return (0);
}
/*
Purpose:
--------
Compares two blocks of memory.

Description:
------------
The ft_memcmp() function compares the first n bytes of the memory areas
s1 and s2. The comparison is performed byte by byte.

Return value:
------------
Returns an integer less than, equal to, or greater than zero if the first
n bytes of s1 is found, respectively, to be less than, to match, or be
greater than the first n bytes of s2.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_memcmp.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>//for printf
#include <string.h>//for memcmp
#include <stddef.h>//for size_t

int main(void)
{
	char	s1[50];
	char	s2[50];
	size_t 	n;
	
	printf("\nYou are testing || ft_memcmp ||.");
	printf("\nlet test the program with memory allocated for strings\n");
	
	printf("\nEnter the 1rst string s1 (under 50 char): ");
	scanf("%[^\n]", s1);
	getchar();

	printf("Enter the 2nde string s2 (under 50 char): ");
	scanf("%[^\n]", s2);
	getchar();

	printf("\n\t Enter the number of bytes to search " 
		"in the memory area(0 < size < 42 =):");
	scanf(" %zd", &n);
	printf("ANSWER\n======");
	

	printf("\n\t with memcmp    : %d", memcmp(s1, s2, n));

	printf("\n\t with ft_memcmp : %d\n", ft_memcmp(s1, s2, n));
	return (0);
}*/
