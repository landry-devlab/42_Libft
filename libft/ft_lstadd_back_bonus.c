/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:43:40 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/20 17:43:41 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return ;
}
/*
Purpose:
--------
Adds an element to the end of a linked list.

Description:
------------
The ft_lstadd_back() function adds the element new at the end of the
list pointed to by lst. If the list is empty (*lst is NULL), the new
element becomes the first element of the list.

Return value:
------------
This function does not return a value.

Testing:
--------
Compile the test file using:
	make
	cc -Wall -Wextra -Werror ft_lstadd_back.c libft.a

Run the program with:
	./a.out
*/
/*
#include <stdio.h>
#include <string.h>


int	main(void)
{
	char *str0 = strdup("Hello ");
	char *str1 = strdup("world ");
	char *str2 = strdup("! ");
	char *str3 = strdup("++NEW STR++");


	t_list *s_str0;
	t_list *s_str1;
	t_list *s_str2;
	t_list *s_str3;


	t_list *lst;
	t_list *ptr;

	s_str0 = ft_lstnew(str0);
	s_str1 = ft_lstnew(str1);
	s_str2 = ft_lstnew(str2);
	s_str3 = ft_lstnew(str3);

	lst = s_str2;
	ft_lstadd_front(&lst, s_str1);
	ft_lstadd_front(&lst, s_str0);

	printf("\nYou are testing || ft_lstadd_back ||\n");

	printf("Here is the original list printed :");
	ptr = lst;
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	printf("Now, let's add the new node s_str3 (++NEW STR++) "
		"with ft_lstadd_back function\n\n");
	
	ft_lstadd_back(&lst, s_str3);

	printf("Here is the new list printed : ");
	ptr = lst;
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	ft_lstdelone(s_str0, free);
	ft_lstdelone(s_str1, free);
	ft_lstdelone(s_str2, free);
	ft_lstdelone(s_str3, free);
	
	return (0);
}
*/