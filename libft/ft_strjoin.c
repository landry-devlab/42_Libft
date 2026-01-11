/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:00:11 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:38:14 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	strjoin = malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!strjoin)
		return (NULL);
	ft_memcpy(strjoin, s1, ls1);
	ft_memcpy(strjoin + ls1, s2, ls2);
	strjoin[ls1 + ls2] = '\0';
	return (strjoin);
}
/*
Purpose:
--------
Concatenates two strings into a new string.

Description:
------------
The ft_strjoin() function allocates and returns a new string resulting
from the concatenation of the two input strings S1 a S2.

Return value:
------------
Returns the newly allocated null-terminated string, or NULL if the
allocation fails.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strjoin.c

Run the program with:
	./a.out <string_s1> <string_s2>
*/
/*

#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;
	
	if (ac != 3)
		return (-1);
	str = ft_strjoin(av[1], av[2]);
	printf("concatenates string with ft_strjoin : %s\n", str);

	free(str);
	return (0);
}
*/
