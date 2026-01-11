/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:47:06 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/20 17:47:08 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
DESCRIPTION : 
Iterates through the list ’lst’, applies the
function ’f’ to each node’s content, and creates
a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to
delete the content of a node if needed. (if for exemple malloc doesn't
work and we have to free eveything)
*/
/*

#include <stdio.h>
#include <string.h>
#include <ctype.h>

static void *str_toupper(void *str)
{
	char *s = (char *)str;
	char *dup_list;
	int i = 0;

	dup_list = malloc(strlen(s) + 1);
	if (!dup_list)
		return (NULL);

	while (s[i])
	{
		dup_list[i] = toupper((unsigned char)s[i]);
		i++;
	}
	dup_list[i] = '\0';
	return (dup_list);
}

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


	t_list	*lst;
	t_list	*ptr;
	t_list	*new_lst;

	s_str0 = ft_lstnew(str0);
	s_str1 = ft_lstnew(str1);
	s_str2 = ft_lstnew(str2);

	lst = s_str2;
	ft_lstadd_front(&lst, s_str1);
	ft_lstadd_front(&lst, s_str0);

	printf("\nYou are testing || ft_lstmap ||\n");

	printf("Here is the original list printed :");
	ptr = lst;
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	printf("Now, let's apply the fonction toupper through ft_lstmap.\n\n");
	

	new_lst = ft_lstmap(lst, str_toupper, ft_del);

	printf("Here is the new list printed : ");
	ptr = new_lst;
	while (ptr)
	{
		printf("%s", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	ft_lstclear(&lst, free);
	ft_lstclear(&new_lst, free);

	return (0);
}
*/
