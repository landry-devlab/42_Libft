/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:39:56 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/20 17:39:58 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s_new;

	s_new = malloc(sizeof(t_list));
	if (!s_new)
		return (NULL);
	s_new->content = content;
	s_new->next = NULL;
	return (s_new);
}
/*
Purpose:
--------
Creates a new list element.

Description:
------------
The ft_lstnew() function allocates and returns a new element of type t_list.
The content of the element is initialized with the provided pointer,
and the next pointer is set to NULL.

Return value:
------------
Returns the newly created list element, or NULL if allocation fails.

Testing:
--------
Compile the test file using:
	cc -Wall -Wextra -Werror ft_lstnew.c

Run the program with:
	./a.out		and follow the instructions.
*/
/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str1 = strdup("Hello world");
	t_list *s_str1;

	s_str1 = ft_lstnew(str1);

	printf("\nYou are testing || ft_lstnew ||\n");

	printf("New node content (pointer to a content) : %s\n",
		(char*)s_str1->content);
	printf("New node next (pointer value) : %p\n", (char*)s_str1->next);

	free(s_str1);

	return (0);	
}*/
