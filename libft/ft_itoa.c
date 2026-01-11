/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 08:59:09 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 08:59:12 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_number(long n);
static void		ft_fill_str_digit(char *str, long nb, size_t len_number);

char	*ft_itoa(int n)
{
	char	*str_itoa;
	long	nb;
	size_t	len_number;

	if (n == 0)
	{
		str_itoa = malloc(sizeof(char) * 2);
		if (!str_itoa)
			return (NULL);
		str_itoa[0] = '0';
		str_itoa[1] = '\0';
		return (str_itoa);
	}
	nb = n;
	len_number = ft_len_number(nb);
	str_itoa = malloc(sizeof(char) * (len_number + 1));
	if (!str_itoa)
		return (NULL);
	ft_fill_str_digit(str_itoa, nb, len_number);
	return (str_itoa);
}

static size_t	ft_len_number(long nb)
{
	size_t	len_number;

	len_number = 0;
	if (nb < 0)
	{
		len_number++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len_number++;
	}
	return (len_number);
}

static void	ft_fill_str_digit(char *str, long nb, size_t len_number)
{
	int	digit;

	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len_number] = '\0';
	while (nb > 0)
	{
		digit = nb % 10;
		nb = nb / 10;
		str[--len_number] = '0' + digit;
	}
}
/*
Purpose:
--------
Converts an integer value to its null-terminated string representation.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_itoa.c

Run the program with:
	./a.out <integer>
*/
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac !=2)
	{
		printf("please, run acgain the programme writing 
		a number as an input!\n");
		return (-1);
	}
	printf("Input : %s\n", av[1]);
	printf("ANSWER\n======\nString with ft_itoa : %s\n", ft_itoa(atoi(av[1])));
	return (0);
}
*/
