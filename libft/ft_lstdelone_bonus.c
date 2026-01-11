/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:44:51 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/20 17:44:53 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
	return ;
}
/*
Purpose:
--------
Deletes and frees a single list element.

Description:
------------
The ft_lstdelone() function takes a node as parameter and frees its content
using the function 'del'. It then frees the node itself but does NOT free
the next node. Care must be taken to update the previous node's next pointer
before calling this function to avoid dangling pointers.

Example:

Before:
A -> B -> C -> NULL

Call:
ft_lstdelone(B, del)

After:
A.next → still points to B (now freed!) ← Dangling pointer
B → freed
C → still exists but the pointer to this node may be lost

To prevent issues, adjust pointers before calling:
A->next = B->next;

Return value:
------------
This function does not return a value.

Testing:
--------
Compile the test file using:
	make
	cc -Wall -Wextra -Werror ft_lstdelone.c libft.a

Run the program with:
	./a.out
*/
/*

#include <stdio.h>
#include <string.h>

static void	ft_del(void *str)
{
	free(str);
}

int	main(void)
{
	char *str0 = strdup("Hello ");
	char *str1 = strdup("world ");
	char *str2 = strdup("!");

	t_list *s_str0;
	t_list *s_str1;
	t_list *s_str2;


	t_list *lst;
	t_list *ptr;

	s_str0 = ft_lstnew(str0);
	s_str1 = ft_lstnew(str1);
	s_str2 = ft_lstnew(str2);

	lst = s_str2;
	ft_lstadd_front(&lst, s_str1);
	ft_lstadd_front(&lst, s_str0);

	printf("\nYou are testing || ft_lstdelone ||\n");

	printf("Here is the original list printed :");
	ptr = lst;
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	printf("Now, let's free the s_str1 (world) ");

	s_str0->next = s_str1->next;
	
	ft_lstdelone(s_str1, ft_del);
	
	printf("Here is the new list printed : ");
	ptr = lst;
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	ft_lstdelone(s_str0, ft_del);
	ft_lstdelone(s_str2, ft_del);
	
	return (0);
}*/
