/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 08:59:25 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:30:31 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_part(char const *str, char c);
static void	*ft_free_array(char **array, int i);
static void	ft_initiate_variable(int *i, int *pos);

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		pos;

	if (!s || !*s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count_part(s, c) + 1));
	if (!split)
		return (NULL);
	ft_initiate_variable(&i, &pos);
	while (i < ft_count_part(s, c))
	{
		while (s[pos] && s[pos] == c)
			pos++;
		j = 0;
		while (s[pos + j] != '\0' && s[pos + j] != c)
			j++;
		split[i] = ft_substr(s, pos, j);
		if (!split[i])
			return (ft_free_array(split, i));
		pos = pos + j;
		i++;
	}
	split[i] = NULL;
	return (split);
}

static int	ft_count_part(char const *str, char c)
{
	size_t	i;
	size_t	nb_part;

	i = 0;
	nb_part = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else if (str[i] != c)
		{
			nb_part++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (nb_part);
}

static void	ft_initiate_variable(int *i, int *pos)
{
	*i = 0;
	*pos = 0;
}

static void	*ft_free_array(char **array, int i)
{
	while (i-- > 0)
		free(array[i]);
	free(array);
	return (NULL);
}
/*
Purpose:
--------
Splits a string into an array of substrings separated by a given delimiter.

Description:
------------
Allocates and returns a null-terminated array of strings obtained by
splitting the input string at each occurrence of the delimiter character.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_split.c

Run the program with:
	./a.out <string>
*/
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	**array_of_str;
	int		i;

	if (ac != 3)
		return (-1);
	array_of_str = ft_split(av[1], av[2][0]);
	i = 0;
	printf("Initial string : %s\n", av[1]);
	printf("Separation char: %c\n", av[2][0]);
	printf("ANSWER\n======\n");
	while (array_of_str[i])
	{
		printf("Part %d: %s\n",i , array_of_str[i]);
		i++;
	}
	return (0);
}*/
