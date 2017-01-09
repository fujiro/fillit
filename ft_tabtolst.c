/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 16:13:09 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/09 01:58:07 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_fill		*ft_tabtolst(char **map)
{
	ft_putstr("ft_tabtolst\n");
	int		j;
	int		c;
	char	**tmp;
	t_start	*lst;

	j = 0;
	c = 66;
	if (!(tmp = malloc(sizeof(char *) * 4)))
		return (NULL);
	tmp[0] = ft_strdup(map[j]);
	tmp[1] = ft_strdup(map[j + 1]);
	tmp[2] = ft_strdup(map[j + 2]);
	tmp[3] = ft_strdup(map[j + 3]);
	lst = ft_create_lst(tmp);
	j = j + 4;
	while (map[j + 3])
	{
		tmp[0] = ft_strdup(map[j]);
		tmp[1] = ft_strdup(map[j + 1]);
		tmp[2] = ft_strdup(map[j + 2]);
		tmp[3] = ft_strdup(map[j + 3]);
		lst = ft_create_elem(lst, tmp, c++);
		j = j + 4;
		ft_printlst(lst->start);
	}
	return (lst->start);
}
