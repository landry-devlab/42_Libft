/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:00:43 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/13 14:11:18 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	sign;

	n = 0;
	i = 0;
	sign = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}
/*
Purpose:
--------
The atoi() function converts the initial portion of the string pointed 
to by str to int representation.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_atoi.c

Run the program with:
	./a.out <string>
*/
/*
#include <stdio.h>	//for printf scanf
#include <stdlib.h>	//for atoi

int	main(void)
{
	char	s[50];

	printf("\nYou are testing || ft_atoi ||.");
	printf("\nEnter a string (under 49 char) where to search a number: ");
	scanf("%[^\n]", s);
	getchar();

	printf("ANSWER\n======\n");
	printf("\tWith atoi   : %d \n", atoi(s));
	printf("\tWith ft_atoi: %d \n", ft_atoi(s));

	return (0);
}*/
