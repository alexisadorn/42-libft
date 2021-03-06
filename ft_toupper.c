/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:05:08 by adorn             #+#    #+#             */
/*   Updated: 2016/11/08 17:16:57 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	unsigned char x;

	if (c >= 97 && c <= 122)
	{
		x = c - 32;
	}
	else
		return (c);
	return (x);
}
