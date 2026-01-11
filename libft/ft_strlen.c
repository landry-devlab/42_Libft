/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:41:30 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/09 09:41:35 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}
/*
Purpose:
--------
Calculates the length of a null-terminated string.

Description:
------------
The ft_strlen() function computes the number of characters in the
null-terminated string s, excluding the terminating null byte ('\0').

Return value:
------------
Returns the length of the string as a size_t value.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strlen.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>	//for printf scanf
#include <string.h>	//for strlen

int	main(void)
{
	char	s[100];

	printf("\nYou are testing ft_strlen.\nEnter a string as an input: ");
	scanf("%[^\n]", s);
	printf("ANSWER\n======\n");
	printf("\tstrlen   : %zd \n", strlen(s));
	printf("\tft_strlen: %zd \n", ft_strlen(s));

	return (0);
}*/
