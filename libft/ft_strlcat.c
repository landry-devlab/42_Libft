/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:11:15 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:39:37 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lsrc;
	size_t	ldst;

	i = 0;
	lsrc = ft_strlen(src);
	ldst = ft_strlen(dst);
	if (size <= ldst)
		return (size + lsrc);
	else
	{
		while (src[i] && (i + ldst) < (size - 1))
		{
			dst[ldst + i] = src[i];
			i++;
		}
		dst[ldst + i] = '\0';
		return (ldst + lsrc);
	}
}
/*
Purpose:
--------
Appends a string to a destination buffer, ensuring size limits.

Description:
------------
The ft_strlcat() function appends the null-terminated string src to the
end of dst. It will append at most dstsize - strlen(dst) - 1 characters,
null-terminating the result. It is designed to avoid buffer overflows.

Return value:
------------
Returns the total length of the string it tried to create, that is,
the initial length of dst plus the length of src.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strlcat.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>	//for printf scanf
#include <stddef.h>	//for size_t

// !! compile libft.h ft_strlen.c ft_strlcat.c

int	main(void)
{
	char	src[50];
	char	dst[50];
	unsigned int len;
	size_t ldst;
	
	printf("\nYou are testing || ft_strlcat ||.");
	printf("\nEnter a dst string (under 49 char) to be concatenate: ");
	scanf("%[^\n]", dst);
	getchar(); 
	printf("\nEnter a src string (under 49 char) to concatenate: ");
	scanf("%[^\n]", src);
	getchar(); 

	printf("And now the size of the buffer : ");
	scanf("%u", &len);
	ldst = len;

	printf("ANSWER\n======\n");
	printf("\n\tReturn value with ft_strlcat: %zu \n", 
			ft_strlcat(dst, src, ldst));
	printf("\tNew dst string with ft_strlcat: %s \n", dst);

	return (0);
}*/
