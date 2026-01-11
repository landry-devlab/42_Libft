/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:45:47 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/09 11:45:49 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
Purpose:
--------
Converts a uppercase letter to its lowercase equivalent.

Description:
------------
The ft_tolower() function converts a upper-case letter to the corresponding 
lower-case letter. The argument must be representable as an unsigned char
 or the value of EOF.

Return value:
------------
If the argument is a upper-case letter, the ft_tolower() function returns
the corresponding lower-casse letter if there is one; otherwise, the argument 
is returned unchanged.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_tolower.c

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

	printf("\nYou are testing || ft_tolower ||.");
	printf("\nEnter a char as an input: ");
	scanf("%s", s);
	c = s[0] + 0;
	printf("ANSWER\n======\n");
	printf("\t!!answer with tolower: %c \n", tolower(c));
	printf("\t!!answer with ft_tolower: %c \n", ft_tolower(c));

	return (0);
}*/
