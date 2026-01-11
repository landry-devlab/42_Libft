/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 09:33:59 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/19 14:30:06 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
Purpose:
--------
Checks whether a character is an alphabetic letter.

Description:
------------
The ft_isalpha() function checks if the given character is an alphabetic
letter (either uppercase or lowercase). The argument must be representable
as an unsigned char or the value of EOF.

Return value:
------------
Returns a non-zero value if the character is an alphabetic letter;
otherwise, returns 0.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_isalpha.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>	//for printf scanf
#include <ctype.h>	//for isalpha
#include <string.h>	//for strlen

int	main(void)
{
	int		c;
	char	s[42];

	printf("\nYou are testing ft_isalpha.\nEnter a char as an input: ");
	scanf("%s", s);
	if (strlen(s) != 1)
	{
		printf("\n!!!Please, enter only one char!!!\n");
		return (0);
	}
	c = s[0] + 0;
	printf("\nANSWER\n======\n");
	printf("\t!!isalpha   : %d \n", !!isalpha(c));
	printf("\t!!ft_isalpha: %d \n", !!ft_isalpha(c));

	return (0);
}
*/
