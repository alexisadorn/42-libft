/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:06:50 by adorn             #+#    #+#             */
/*   Updated: 2016/11/07 12:25:41 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	const char	*lg;
	const char	*sm;
	size_t		i;

	if (*to_find == '\0')
		return ((char*)str);
	while (*str != '\0' && len > 0)
	{
		lg = str;
		sm = to_find;
		i = len;
		while (*sm != '\0' && *lg == *sm && i--)
		{
			lg++;
			sm++;
		}
		if (*sm == '\0')
			return ((char*)str);
		str++;
		--len;
	}
	return (NULL);
}
