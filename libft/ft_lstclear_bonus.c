/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:45:38 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/20 17:45:40 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	next_node = *lst;
	while (next_node)
	{
		del(next_node->content);
		*lst = next_node->next;
		free(next_node);
		next_node = *lst;
	}
	*lst = NULL;
	return ;
}
/*
Purpose:
--------
Deletes and frees all elements of a linked list.

Description:
------------
The ft_lstclear() function deletes and frees the given element and
all successors of that element using the function del and free. The
pointer to the list is then set to NULL.

Return value:
------------
This function does not return a value.

Testing:
--------
Compile the test file using:
	make
	cc -Wall -Wextra -Werror ft_lstclear.c libft.a

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
	char *str2 = strdup("! ");


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

	printf("\nYou are testing || ft_lstclear ||\n");

	printf("Here is the list printed :");
	ptr = lst;
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	ft_lstclear(&lst, ft_del);

	printf("Printed list, after ft_lstclear(&lst, del) :");

	ptr = lst;
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	
	return (0);
}*/
