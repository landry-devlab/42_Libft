/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 08:52:57 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:54:37 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
/*
Purpose:
--------
Copies a block of memory, safely handling overlapping areas.

Description:
------------
The ft_memmove() function copies n bytes from the memory area src to the
memory area dst. Unlike ft_memcpy, it correctly handles overlapping memory
regions by ensuring the original bytes in src are copied before being
overwritten.

Return value:
------------
Returns a pointer to the destination memory area dst.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_memmove.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>//for printf
#include <string.h>//for memmove
#include <stddef.h>//for size_t
#include <stddef.h>

int main(void)
{
	size_t	size;
	char	str1[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str2[] = "Hello world!! Welcome to the 42 campus !!!";
//	char	str3[] = "******************************************";
	
	printf("\nYou are testing || ft_memmove ||.");
	printf("\n\t Destination : %s", str1);
	printf("\n\t source      : %s", (str1 + 4));
	printf("\n\t Enter the number of bytes to copy from memory area 
		src to memory area dest (0 < size < 42 =):");
	scanf(" %zd", &size);
	printf("ANSWER\n======");
	memmove(str1, (str1 + 4), size);
	printf("\n\t whith memmove   : %s", str1);
	ft_memmove(str2, (str2 + 4), size);
	printf("\n\t with ft_memmove : %s\n", str2);
	return (0);
}*/
