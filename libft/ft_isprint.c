/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 12:14:31 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/12 21:23:09 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int arg)
{
	if ((arg >= 32) && (arg <= 126))
		return (1);
	else
		return (0);
}
