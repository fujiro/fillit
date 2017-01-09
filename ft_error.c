/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_usage.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 07:18:31 by elcarrei          #+#    #+#             */
/*   Updated: 2016/12/29 15:34:06 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(int error)
{
	if (error == 1)
		ft_putstr("Invalid map\n");
	if (error == 2)
		ft_putstr("Wrong number of arguments\n");
	ft_putstr("Usage : ./fillit source_file\n");
}
