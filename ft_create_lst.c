/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:59:38 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/09 01:20:50 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_start		*ft_create_lst(char **piece)
{
	t_fill	*tmp;
	t_start	*start;

	if (!(tmp = malloc(sizeof(t_fill))))
		return (NULL);
	if (!(start = malloc(sizeof(t_start))))
		return (NULL);
	tmp->tetri = ft_letter(piece, 'A');
	tmp->dst_i = 0;
	tmp->dst_j = 0;
	tmp->tetri_l = ft_piece_len(piece);
	tmp->tetri_h = ft_piece_high(piece);
	tmp->place = 0;
	tmp->next = NULL;
	start->start = tmp;
	return (start);
}
