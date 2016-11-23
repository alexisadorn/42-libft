/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:48:39 by adorn             #+#    #+#             */
/*   Updated: 2016/11/05 12:19:22 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	char		*d;
	char		*s;

	d = (char*)dst;
	s = (char*)src;
	while (len > 0 && *s != c)
	{
		--len;
		*d = *s;
		d++;
		s++;
	}
	if (len > 0)
	{
		*d++ = c;
		return ((void*)d);
	}
	else
		return (NULL);
}
