/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:40:49 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/20 17:40:56 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
Purpose:
--------
Adds an element to the beginning of a linked list.

Description:
------------
The ft_lstadd_front() function adds the element new at the beginning of
the list pointed to by lst. The new element becomes the first element,
and its next pointer is set to the previous first element.

Return value:
------------
This function does not return a value.

Testing:
--------
Compile the test file using:
	make
	cc -Wall -Wextra -Werror ft_lstadd_front.c libft.a

Run the program with:
	./a.out
*/
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str0 = strdup("Hello ");
	char *str1 = strdup("world !");

	t_list *s_str0;
	t_list *s_str1;
	t_list *lst;
	t_list *ptr;

	s_str0 = ft_lstnew(str0);

	s_str1 = ft_lstnew(str1);

	lst = s_str1;
	ptr = lst;
 
	printf("\nYou are testing || ft_lstadd_front ||\n");

	printf("str0 : %s\n", (char*)s_str0->content);
	printf("str1 : %s\n", (char*)s_str1->content);

	printf("Before fonction, printf lst : ");
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	ft_lstadd_front (&lst, s_str0);
	printf("After ft_lstadd_front (lst, str0), printf lst : ");
	ptr = lst;
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	ft_lstdelone(s_str0, free);
	ft_lstdelone(s_str1, free);

	return (0);
}*/
