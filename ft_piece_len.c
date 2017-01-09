/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:54:22 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/03 16:22:45 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_piece_len(char **piece)
{
	ft_putstr("ft_piece_len\n");
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
		if (piece[j][i] == '#' && i < start)
			start = i;
		if (piece[j][i] == '#' && i > end)
			end = i;
		i++;
		if (i == 4 && j == 3)
			break ;
		if (i == 4 && j++ < 4)
			i = 0;
	}
	return (end - start);
}
