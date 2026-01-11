/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:00:28 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:36:06 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strdup;
	int		len;

	len = 0;
	while (s[len])
		len++;
	strdup = malloc((sizeof(char)) * (len + 1));
	if (!strdup)
		return (NULL);
	len = 0;
	while (s[len])
	{
		strdup[len] = s[len];
		len++;
	}
	strdup[len] = '\0';
	return (strdup);
}
/*
Purpose:
--------
Duplicates a string by allocating sufficient memory for a copy.

Description:
------------
The strdup() function allocates sufficient memory for a copy of the 
string s1, does the copy, and returns a pointer to it. 

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strdup.c

Run the program with:
	./a.out <string>
*/
/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	*s1;
	char	*s2;
	
	if (ac != 2)
		return (-1);

	printf("\nYou are testing || ft_strdup ||\n");

	printf("\nthe string to be copied : %s\n\n", av[1]);

	s1 = strdup(av[1]);
	s2 = ft_strdup(av[1]);
	printf("Duplicate string with strup    : %s\n", s1);
	printf("Duplicate string with ft_strup : %s\n", s2);

	free(s1);
	free(s2);
	return (0);
}*/
