/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 17:55:38 by cuzureau          #+#    #+#             */
/*   Updated: 2017/01/03 14:15:40 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create_tab(t_fill *lst)
{
	ft_putstr("ft_create_tab\n");
	int		i;
	int		j;
	char	**new;

	i = 0;
	j = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	if (!(new = malloc(sizeof(char *) * ft_sqrt(i * 4))))
		return (NULL);
	while (j <= i)
	{
		if (!(new[j] = malloc(sizeof(char) * ft_sqrt(i * 4))))
			return (NULL);
		ft_memset(new[j], '.', ft_sqrt(i * 4));
		j++;
	}
	return(new);
}
