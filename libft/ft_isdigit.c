/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:42:08 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/06 14:42:12 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
/*
Purpose:
--------
Checks whether a character is a digit.

Description:
------------
The ft_isdigit() function checks if the given character is a digit
character, including space. The argument must be representable as an
unsigned char or the value of EOF.

Return value:
------------
Returns a non-zero value if the character is digit; otherwise,
returns 0.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_isdigit.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>	//for printf scanf
#include <ctype.h>	//for isdigit
#include <string.h>	//for strlen


int	main(void)
{
	int		c;
	char	s[42];

	printf("\nYou are testing ft_isdigit.\nEnter a char as an input: ");
	scanf("%s", s);
	if (strlen(s) != 1)
	{
		printf("\n!!!Please, enter only one char!!!\n");
		return (0);
	}
	c = s[0] + 0;
	printf("\nANSWER\n======\n");
	printf("\t!!isdigit   : %d \n", !!isdigit(c));
	printf("\t!!ft_isdigit: %d \n", !!ft_isdigit(c));

	return (0);
}*/
