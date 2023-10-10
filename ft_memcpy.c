/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <gmaia-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:50:59 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/10/10 15:46:13 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char const	*src2;
	unsigned char		*dst2;

	src2 = src;
	dst2 = dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*dst2++ = *src2++;
	return (dst);
}
