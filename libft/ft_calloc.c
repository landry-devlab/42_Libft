/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:57:15 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:14:24 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(0);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if ((SIZE_MAX / nmemb) < size)
		return (NULL);
	i = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
Purpose:
--------
Allocates and zero-initializes a block of memory.

Description:
------------
The ft_calloc() function allocates memory for an array of nmemb elements,
each of size bytes. The allocated memory is set to zero. This function
provides a safe way to allocate memory for arrays, avoiding uninitialized
data.

Return value:
------------
Returns a pointer to the allocated memory, or NULL if the allocation fails.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_calloc.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	int		*tab1;
	int		*tab2;
	size_t	i;

	//test on str -> fill with '\0'
	str1 = (char *)calloc(6, sizeof(char));
	str2 = (char *)ft_calloc(6, sizeof(char));

	if (!str1 || !str2)
		return (-1);

	printf("\nHere is the str (calloc version)   : %s", str1);
	printf("\nHere is the str (ft_calloc version): %s\n", str2);

	// Test on integer tab
	tab1 = (int *)calloc(5, sizeof(int));
	tab2 = (int *)ft_calloc(5, sizeof(int));

	if (!tab1 || !tab2)
		return(-1);

	printf("\nHere is the tab (calloc version)   : ");
	i = 0;
	while (i < 5)
		printf("%d ", tab1[i++]);

	printf("\nHere is the tab (ft_calloc version): ");
	i = 0;
	while (i < 5)
		printf("%d ", tab2[i++]);
	printf("\n");

	free(str1);
	free(str2);
	free(tab1);
	free(tab2);

	return (0);
}*/
