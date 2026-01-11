/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 08:53:37 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:43:13 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[i])
		return ((char *)s1);
	while (i < len && s1[i])
	{
		j = 0;
		while (s2[j] && (i + j) < len && s1[i + j] == s2[j])
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
/*
Purpose:
--------
Locates a substring in a string, searching up to a specified length.

Description:
------------
The ft_strnstr() function searches for the first occurrence of the
null-terminated string needle s2 in the string haystack s1, where not more
than len characters are searched. Characters that appear after a null
byte in haystack are not searched.

Return value:
------------
Returns a pointer to the beginning of the located substring, or NULL
if the substring is not found within the first len characters.
If needle is an empty string, returns haystack.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strnstr.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>

int	main(void)
{
	char	s1[50];
	char	s2[50];
	unsigned int n;
	size_t len;

	printf("\nYou are testing || ft_strnstr ||.");
	printf("\nEnter a s1 string (under 50 char): ");
	scanf("%[^\n]", s1);
	getchar(); 
	printf("Enter a s2 string (under 50 char) : ");
	scanf("%[^\n]", s2);
	getchar(); 
	printf("And now the size where to search : ");
	scanf("%u", &n);
	len = n;

	printf("ANSWER\n======\n");
	printf("\n\tfonction strnstr non existing in linux by default\n");
	printf("\tAdresse returned by ft_strnstr: %p \n", ft_strnstr(s1, s2, len));

	return (0);
}*/
