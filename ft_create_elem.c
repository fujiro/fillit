/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 20:02:50 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/09 01:10:38 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_start		*ft_create_elem(t_start *lst, char **piece, int c)
{
	t_fill	*tmp;

	if (!(tmp = malloc(sizeof(t_fill))) || lst == NULL)
		return (NULL);
	tmp->tetri = ft_letter(piece, c);
	tmp->dst_i = 0;
	tmp->dst_j = 0;
	tmp->tetri_l = ft_piece_len(piece);
	tmp->tetri_h = ft_piece_high(piece);
	tmp->place = 0;
	tmp->next = lst->start;
	lst->start = tmp;
	return (lst);
}
