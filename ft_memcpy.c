/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:20:14 by adorn             #+#    #+#             */
/*   Updated: 2016/11/05 11:35:32 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (len > 0)
	{
		*d = *s;
		d++;
		s++;
		len--;
	}
	return (dst);
}
