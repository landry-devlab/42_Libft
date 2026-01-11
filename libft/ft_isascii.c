/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:38:04 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/09 09:38:11 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
/*
Purpose:
--------
Checks whether a character belongs to the ASCII character set.

Description:
------------
The ft_isascii() function checks if the given character value is a valid
7-bit ASCII character, in the range from 0 to 127 inclusive. The argument
must be representable as an unsigned char or the value of EOF.

Return value:
------------
Returns a non-zero value if the character is a valid ASCII character;
otherwise, returns 0.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_isascii.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>	//for printf scanf
#include <ctype.h>	//for isascii
#include <string.h>	//for strlen

int	main(void)
{
	int		c;
	char	s[42];

	printf("\nYou are testing ft_isascii.\nEnter a char as an input: ");
	scanf("%s", s);
	if (strlen(s) != 1)
	{
		printf("\n!!!Please, enter only one char!!!\n");
		return (0);
	}
	c = s[0] + 0;
	printf("ANSWER\n======\n");
	printf("\t!!isascii   : %d \n", !!isascii(c));
	printf("\t!!ft_isascii: %d \n", !!ft_isascii(c));

	return (0);
}*/
