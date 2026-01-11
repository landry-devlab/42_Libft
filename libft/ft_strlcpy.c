/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:39:30 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:41:44 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t ldst)
{
	size_t	i;

	i = 0;
	if (ldst != 0)
	{
		while (src[i] && i < ldst - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
Purpose:
--------
Copies a string to a destination buffer with size limit.

Description:
------------
The ft_strlcpy() function copies up to size(ldst) - 1 characters from the
null-terminated string src to dst, null-terminating the result. It is
designed to avoid buffer overflows.

Return value:
------------
Returns the total length of the string it tried to create, that is,
the length of src.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strlcpy.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>	//for printf scanf
#include <string.h>	// for strcpy
#include <stddef.h>

int main(void)
{
	char	src[50];
	char	dst[50];
	char	dst2[50];
	unsigned int len;
	size_t ldst;

	printf("\nYou are testing || ft_strlcpy ||.");
	printf("\nEnter a src string (under 50 char): ");
	scanf("%[^\n]", src);
	getchar(); 
	printf("Enter a dst string (under 50 char) : ");
	scanf("%[^\n]", dst);
	strcpy(dst2, dst);
	getchar(); 
	printf("And now the size of the dst : ");
	scanf("%u", &len);
	ldst = len;

	printf("ANSWER\n======\n");
	printf("\n\tReturn value with ft_strlcpy:" 
		 " %zu \n", ft_strlcpy(dst, src, ldst));
	printf("\tNew dst string with ft_strlcpy: %s \n", dst);
	return (0);
}*/
