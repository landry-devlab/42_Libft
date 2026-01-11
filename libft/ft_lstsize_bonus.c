/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:42:23 by llarrive          #+#    #+#             */
/*   Updated: 2025/10/20 17:42:24 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*next_node;

	len = 0;
	next_node = lst;
	while (next_node)
	{
		len++;
		next_node = next_node->next;
	}
	return (len);
}
/*
DESCRIPTION
return the number of element(s) in a list.
*/
/*
#include <stdio.h>
#include <string.h>


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

	printf("\nYou are testing || ft_lstsize ||\n");

	printf("Here is the list printed :");
	ptr = lst;
	printf("|| ");
	while (ptr)
	{
		printf("%s|| ", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\n");

	printf("Following ft_lstsize, the number of node is "
	"-- %d --.\n", ft_lstsize(lst));
	
	ft_lstdelone(s_str0, free);
	ft_lstdelone(s_str1, free);
	ft_lstdelone(s_str2, free);
	
	return (0);
}
*/
