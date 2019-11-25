/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmullan <tmullan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 14:18:57 by tmullan        #+#    #+#                */
/*   Updated: 2019/11/25 21:53:18 by tmullan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	d;

	i = 0;
	d = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while ((i < len) && (haystack[i] != '\0'))
	{
		while ((haystack[i] != needle[0]) && (i < len) \
				&& (haystack[i] != '\0'))
			i++;
		c = i;
		d = 0;
		while ((haystack[i] == needle[d]) && (i < len))
		{
			i++;
			d++;
			if (needle[d] == '\0')
				return ((char *)&haystack[c]);
		}
	}
	return (0);
}
