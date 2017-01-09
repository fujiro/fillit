/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 04:09:13 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/06 14:24:51 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_fillit(t_fill *lst, char **dst, int size)
{
	ft_putstr("ft_fillit\n");
	int		i;
	int		j;
	t_fill	*tmp;

	i = 0;
	j = 0;
	tmp = lst;
	ft_putstr("01\n");
	while (tmp->next)
	{
		if (tmp->place == 1)
			tmp = tmp->next;
		else if (size - i - tmp->tetri_l >= 0 && size - j - tmp->tetri_h >= 0)
		{
			ft_putstr("02\n");
			tmp->place = 1;
			tmp->dst_i = i;
			tmp->dst_j = j;
			ft_putstr("02.1\n");
			dst = ft_save(tmp, dst);
			j = j + tmp->tetri_l;
			ft_putstr("02.2\n");
			if (j + tmp->tetri_l > size && i + tmp->tetri_h <= size)
			{
				j = 0;
				i++;
			}
			ft_putstr("02.3\n");
			tmp = lst;
			ft_putstr("03\n");
		}
		else if (tmp->next != NULL)
			tmp = tmp->next;
		else
			return (ft_fillit(lst, ft_tab_realloc(dst), size + 1));
	}
	ft_putstr("04\n");
	return (dst);
}
