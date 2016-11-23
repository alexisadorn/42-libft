/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:58:53 by adorn             #+#    #+#             */
/*   Updated: 2016/11/05 12:33:58 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	char		*s;

	d = (char*)dst;
	s = (char*)src;
	if (s < d)
	{
		d = d + len - 1;
		s = s + len - 1;
		while (len > 0)
		{
			*d-- = *s--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	return (dst);
}
