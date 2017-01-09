/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:57:31 by cuzureau          #+#    #+#             */
/*   Updated: 2016/12/07 14:26:20 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print(char **s)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		ft_putstr(s[i]);
		ft_putstr("\n");
		count++;
		i++;
		if (count == 4 && s[i])
		{
			count = 0;
			ft_putstr("\n");
		}
	}
}
