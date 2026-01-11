/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:46:19 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/20 17:46:21 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
	return ;
}
/*
Purpose:
--------
Applies a function to each element of a linked list.

Description:
------------
The ft_lstiter() function iterates over the list lst and applies the function
f to the content of each element. The list itself is not modified or freed;
only the content is affected by f.

Return value:
------------
This function does not return a value.

Testing:
--------
Compile the test file using:
	make
	cc -Wall -Wextra -Werror ft_lstiter.c libft.a

Run the program with:
	./a.out
*/
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

static void	str_toupper(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = toupper((unsigned char)str[i]);
		i++;
	}
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

	printf("\nYou are testing || ft_lstiter ||\n");

	printf("Here is the original list printed :");
	ptr = lst;
	while (ptr)	
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	printf("Now, let's apply the fonction toupper through ft_lstiter.\n\n");
	
	ft_lstiter(lst, str_toupper);

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

	return (0);
}
*/
