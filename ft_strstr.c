/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:48:48 by adorn             #+#    #+#             */
/*   Updated: 2016/11/07 10:59:27 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char *lg;
	const char *sm;

	if (*to_find == '\0')
		return ((char*)str);
	while (*str != '\0')
	{
		lg = str;
		sm = to_find;
		while (*sm != '\0' && *lg == *sm)
		{
			lg++;
			sm++;
		}
		if (*sm == '\0')
			return ((char*)str);
		str++;
	}
	return (NULL);
}
