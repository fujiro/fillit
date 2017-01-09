/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 12:25:43 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/09 00:55:44 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlst(t_fill *lst)
{
	ft_putstr("prinstlst\n");
	int		i;

	i = 0;
	while (lst->next != NULL)
	{
		while (lst->tetri[i])
		{
			ft_putstr(lst->tetri[i]);
			ft_putchar('\n');
			i++;
		}
		lst = lst->next;
	}
}
