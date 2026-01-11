/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 08:59:57 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 15:00:07 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iscinset(char c, char const	*set)
{
	int	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	startpos;
	size_t	endpos;

	if (!s1 || !set)
		return (NULL);
	startpos = 0;
	endpos = ft_strlen(s1);
	while (s1[startpos] && ft_iscinset(s1[startpos], set))
		startpos++;
	while (startpos < endpos && ft_iscinset(s1[endpos - 1], set))
		endpos--;
	return (ft_substr(s1, startpos, (endpos - startpos)));
}
/*
Purpose:
--------
Removes specified characters from the beginning and end of a string.

Description:
------------
Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strtrim.c

Run the program with:
	./a.out <stringS1> <set_of_char>
*/
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;
	
	if (ac != 3)
		return (-1);
	str = ft_strtrim(av[1], av[2]);
	printf("Trimed string with ft_strtrim : %s\n", str);

	free(str);
	return (0);
}*/
