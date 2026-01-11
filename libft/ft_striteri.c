/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:19:36 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 10:57:23 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
Purpose:
--------
Applies a function to each character of a string in-place, using the index.

Description:
------------
The ft_striteri() function applies the function f to each character of the
null-terminated string s, passing its index as the first argument. This
allows modifying the string in-place based on both the character value
and its position.

Return value:
------------
This function does not return a value.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_striteri.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>

void	ft_test_upper_every3(unsigned int i, char *c)
{
	char	new_char;

	new_char = *c;
	if (i % 3 == 0 && ( 97 <= new_char &&  new_char <= 122 ))
		new_char = new_char - 32;
	*c = new_char;
}

int main(void)
{
	char str[] = "Hello World";

	printf("original str : %s\n", str);
	ft_striteri(str, ft_test_upper_every3);
	printf("after ft_striteri: %s\n", str);
	return (0);
}*/
