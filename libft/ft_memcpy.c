/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:10:17 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:19:58 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
Purpose:
--------
Copies a block of memory from one location to another.

Description:
------------
The ft_memcpy() function copies n bytes from the memory area pointed to by
src to the memory area pointed to by dst. The memory areas must not overlap.

Return value:
------------
Returns a pointer to the destination memory area.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_memcpy.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>//for printf
#include <string.h>//for memcpy
#include <stddef.h>//for size_t

int main(void)
{
	size_t	size;
	char	str1[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str2[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str3[] = "******************************************";
	
	printf("\nYou are testing || ft_memcpy ||.");
	printf("\n\t Destination : %s", str1);
	printf("\n\t source      : %s", str3);
	printf("\n\t Enter the number of bytes to copy from memory area 
		src to memory area dest (0 < size < 42 =):");
	scanf(" %zd", &size);
	printf("ANSWER\n======");
	memcpy(str1, str3, size);
	printf("\n\t whith memcpy   : %s", str1);
	ft_memcpy(str2, str3, size);
	printf("\n\t with ft_memcpy : %s\n", str2);
	return (0);
}*/
