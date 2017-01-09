/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:46:35 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/03 16:07:54 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_save(t_fill *piece, char **dst)
{
	ft_putstr("ft_save\n");
	int		i;
	int		j;

	i = 0;
	j = 0;
	ft_putstr("01\n");
	while (piece->tetri[j][i])
	{
		if (piece->tetri[j][i] == '#')
			dst[piece->dst_j][piece->dst_i] = '#';
		i++;
		ft_putstr("02\n");
		piece->dst_i++;
		if (i == 4 && j < 4)
		{
			ft_putstr("03\n");
			i = 0;
			piece->dst_i = piece->dst_i - 4;
			j++;
			piece->dst_j++;
		}
		ft_putstr("04\n");
	}
	return (dst);
}
