/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_high.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:56:59 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/09 00:54:07 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_piece_high(char **piece)
{
	ft_putstr("ft_piece_high\n");
	int		i;
	int		j;
	int		start;
	int		end;

	i = 0;
	j = 0;
	start = 4;
	end = 0;
	while (piece[j][i])
	{
		if (piece[j][i] == '#' && j < start)
			start = j;
		if (piece[j][i] == '#' && j > end)
			end = j;
		i++;
		if (i == 4 && j == 3)
			break ;
		if (i == 4 && j++ < 4)
			i = 0;
	}
	return (start - end);
}
