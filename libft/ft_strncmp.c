/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:00:59 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:44:29 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*
Purpose:
--------
Compares two strings up to a specified number of characters.

Description:
------------
The ft_strncmp() function compares up to n characters of the null-terminated
strings s1 and s2. The comparison is done byte by byte using unsigned char
values. Comparison stops at the first differing character or after n characters.

Return value:
------------
Returns an integer less than, equal to, or greater than zero if s1 (or the
first n bytes thereof) is found, respectively, to be less than, to match,
or be greater than s2.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strncmp.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>//for printf scanf
#include <string.h> // for strncmp


int	main(void)
{
	char	s1[50];
	char	s2[50];
	size_t 	n;

	printf("\nYou are testing || ft_strncmp ||.");
	printf("\nEnter the 1rst string s1 (under 50 char): ");
	scanf("%[^\n]", s1);
	getchar();

	printf("Enter the 2nde string s2 (under 50 char): ");
	scanf("%[^\n]", s2);
	getchar();

	printf("Enter the number of char you want to compare s1 and s2: ");
	scanf("%lu", &n);

	printf("ANSWER\n======\n");
	printf("\tReturn value with strncmp   : %d \n", strncmp(s1, s2, n));

	printf("\n\tReturn value with ft_strncmp: %d \n", ft_strncmp(s1, s2, n));

	return (0);
}*/
