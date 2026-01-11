/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:37:47 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/09 11:37:49 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
Purpose:
--------
Converts a lowercase letter to its uppercase equivalent.

Description:
------------
The toupper() function converts a lower-case letter to the corresponding 
upper-case letter. The argument must be representable as an unsigned char
 or the value of EOF.

Return value:
------------
If the argument is a lower-case letter, the toupper() function returns
the corresponding upper-casse letter if there is one; otherwise, the argument 
is returned unchanged.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_toupper.c

Run the program with:
	./a.out		and follow the instruction.
*/
/*
#include <stdio.h>	//for printf scanf
#include <ctype.h>	//for isalpha

int	main(void)
{
	int		c;
	char	s[42];

	printf("\nYou are testing || ft_toupper ||.");
	printf("\nEnter a char as an input: ");
	scanf("%s", s);
	c = s[0] + 0;
	printf("ANSWER\n======\n");
	printf("\t!!answer with toupper: %c \n", toupper(c));
	printf("\t!!answer with ft_toupper: %c \n", ft_toupper(c));

	return (0);
}*/
