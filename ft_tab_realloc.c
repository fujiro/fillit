/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_realloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 19:42:00 by elcarrei          #+#    #+#             */
/*   Updated: 2016/12/29 12:53:30 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tab_realloc(char **src)
{
	char	**dst;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (!(dst = malloc(sizeof(char *) * i + 2)))
		return (NULL);
	while (j <= i)
	{
		if (!(dst[j] = malloc(sizeof(char) * i + 2)))
			return (NULL);
	}
	return (dst);
}
