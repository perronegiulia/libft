/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <gmaia-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:04:52 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/10/10 16:05:56 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;

	d = dest;
	if (d < (unsigned char *)src)
		return (ft_memcpy(dest, src, n));
	else if (d > (unsigned char *)src)
		while (n--)
			d[n] = ((unsigned char *)src)[n];
	return (dest);
}
