/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:00:21 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:48:27 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	lstr;

	if (!str)
		return (NULL);
	lstr = ft_strlen(str);
	if (start > lstr)
		return (ft_calloc(1, 1));
	if (len + start > lstr)
		len = lstr - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
Purpose:
--------
Extracts a substring from a string starting at a given index.

Description:
------------
Allocates memory (using malloc(3)) and returns a substring from the string ’s’.
The substring starts at index ’start’ and has a maximum length of ’len’.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_strdup.c

Run the program with:
	./a.out		and follow the instruction.
*/
/*
#include <stdio.h>//for printf scanf
#include <string.h> // for strncmp


int	main(void)
{
	char			s1[50];
	char			*substr;
	unsigned int 	start;
	size_t 			size;


	printf("\nYou are testing || ft_substr ||.");
	printf("\nEnter the string (under 50 char): ");
	scanf("%[^\n]", s1);
	getchar();

	printf("Enter from which position you want the substring: ");
	scanf("%u", &start);

	printf("Enter the lenth of the substring: ");
	scanf("%zu", &size);

	substr = ft_substr(s1, start, size);
	if (!substr)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Duplicate substring with ft_substr :----- %s-----\n", substr);

	free(substr);
	return (0);
}
*/
