/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 17:15:19 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/06 14:33:05 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fill		*ft_push_left(t_fill *lst)
{
	ft_putstr("ft_push_left\n");
	int		i;
	int		j;
	int		left;

	i = 0;
	j = 0;
	ft_putstr("wtf");
	while (lst->next)
	{
		while (i <= 3)
		{
			ft_putstr("1ere boucle left\n");
			if (lst->tetri[0][i] == '#')
				break ;
			i++;
		}
		i = 0;
		while (lst->tetri[j][i])
		{
			left = 0;
			ft_putstr("2nde boucle left\n");
			if (lst->tetri[j][i] == '#')
			{
				ft_putstr("1er if\n");
				lst->tetri[left++][i] = lst->tetri[j][i];
				lst->tetri[j][i] = '.';
			}
			i++;
			if (i == 3 && j == 3)
				break ;
			ft_putstr("second if\n");
			if (i == 4 && j++ < 4)
				i = 0;
			ft_putstr("3eme if\n");
		}
		lst = lst->next;
	}
	ft_putstr("ft_push_left : OK\n");
	return (ft_push_top(lst));
}

t_fill		*ft_push_top(t_fill *lst)
{
	ft_putstr("ft_push_top\n");
	int		i;
	int		j;
	int		top;

	i = 0;
	j = 0;
	top = 0;
	while (lst->next)
	{
		while (j <= 3)
		{
			ft_putstr("1ere boucle top\n");
			if (lst->tetri[j][0] == '#')
				break ;
			j++;
		}
		j = 0;
		while (lst->tetri[j][i])
		{
			top = 0;
			ft_putstr("2nde boucle top\n");
			if (lst->tetri[j][i] == '#')
			{
				ft_putstr("1er if top\n");
				lst->tetri[top++][i] = lst->tetri[j][i];
				lst->tetri[j][i] = '.';
			}
			i++;
			if (i == 4 && j == 3)
				break ;
			ft_putstr("second if top\n");
			if (i == 4 && j++ < 4)
				i = 0;
			ft_putstr("3eme if top\n");
		}
		lst = lst->next;
	}
	ft_putstr("ft_push_top : OK\n");
	return (lst);
}
