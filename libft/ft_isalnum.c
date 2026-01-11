/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:46:11 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:15:13 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'))
		return (1);
	else
		return (0);
}
/*
Purpose:
--------
Checks whether a character is alphanumeric.

Description:
------------
The ft_isalnum() function checks if the given character is either an
alphabetic letter or a decimal digit. The argument must be representable
as an unsigned char or the value of EOF.

Return value:
------------
Returns a non-zero value if the character is alphanumeric; otherwise,
returns 0.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_isalnum.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>	//for printf scanf
#include <ctype.h>	//for isalnum
#include <string.h>	//for strlen

int	main(void)
{
	int		c;
	char	s[42];

	printf("\nYou are testing ft_isalnum.\nEnter a char as an input: ");
	scanf("%s", s);
	if (strlen(s) != 1)
	{
		printf("\n!!!Please, enter only one char!!!\n");
		return (0);
	}
	c = s[0] + 0;
	printf("ANSWER\n======\n");
	printf("\t!!isalnum   : %d \n", !!isalnum(c));
	printf("\t!!ft_isalnum: %d \n", !!ft_isalnum(c));

	return (0);
}*/
