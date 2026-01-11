/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:38:36 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:15:57 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c < 127)
		return (1);
	else
		return (0);
}
/*
Purpose:
--------
Checks whether a character is printable.

Description:
------------
The ft_isprint() function checks if the given character is a printable
character, including space. The argument must be representable as an
unsigned char or the value of EOF.

Return value:
------------
Returns a non-zero value if the character is printable; otherwise,
returns 0.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_isprint.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>	//for printf scanf
#include <ctype.h>	//for isprint
#include <string.h>	//for strlen

int	main(void)
{
	int		c;
	char	s[42];

	printf("\nYou are testing ft_isprint.\nEnter a char as an input: ");
	scanf("%s", s);
	if (strlen(s) != 1)
	{
		printf("\n!!!Please, enter only one char!!!\n");
		return (0);
	}
	c = s[0] + 0;
	printf("ANSWER\n======\n");
	printf("\t!!isprint   : %d \n", !!isprint(c));
	printf("\t!!ft_isprint: %d \n", !!ft_isprint(c));

	return (0);
}*/
