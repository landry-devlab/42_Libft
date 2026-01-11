/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:04:39 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:44:57 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmapi;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	strmapi = malloc(sizeof(char) * (len + 1));
	if (!strmapi)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strmapi[i] = f(i, s[i]);
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}
/*
Purpose:
--------
Applies a function to each character of a string to create a new string.

Description:
------------
The ft_strmapi() function allocates and returns a new string resulting from
applying the function f to each character of the null-terminated string s.
The function f receives the index of the character and the character itself,
allowing for index-based transformations.

Return value:
------------
Returns the newly allocated string resulting from the transformation, or
NULL if the allocation fails.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strmapi.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>

char	ft_upper_test1on3(unsigned int i, char c)
{
	char	new_char;

	new_char = c;
	if (i % 3 == 0 && ( 97 <= c &&  c <= 122 ))
		new_char = c - 32;
	return (new_char); 
}

int main(void)
{
	char *str = "Hello World";
	char *answer;

	printf("original str : %s\n", str);
	answer = ft_strmapi(str, ft_upper_test1on3);
	printf("after ft_strmapi: %s\n", answer);
	free (answer);
	return (0);
}
*/
