/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:58:36 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/25 14:51:26 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*ptr;
	unsigned char	ch;

	i = 0;
	ptr = NULL;
	ch = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == ch)
			ptr = (char *)(s + i);
		i++;
	}
	if (ch == '\0')
		return ((char *)(s + i));
	else
		return (ptr);
}
/*
Purpose:
--------
Locates the last occurrence of a character in a string.

Description:
------------
The ft_strrchr() function searches for the last occurrence of the character
c (converted to a char) in the null-terminated string s. The terminating
null byte is considered part of the string.

Return value:
------------
Returns a pointer to the matched character in the string, or NULL if the
character is not found.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strrchr.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>	//for printf scanf
#include <string.h>

int	main(void)
{
	char	src[50];
	char	s[50];
	char	c;

	printf("\nYou are testing || ft_strrchr ||.");
	printf("\nEnter a src string (under 49 char) where to search: ");
	scanf("%[^\n]", src);
	getchar();
	printf("\nEnter a char as an input to search: ");
	scanf("%[^\n]", s);
	getchar();
	c = s[0] + 0;

	printf("ANSWER\n======\n");
	printf("\n\tReturn with strrchr   : %p \n", strrchr(src, c));
	printf("\n\tReturn with ft_strrchr: %p \n", ft_strrchr(src, c));

	return (0);
}*/
