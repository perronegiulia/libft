/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:09:16 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/10/07 16:06:00 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*source1;
	unsigned char	*source2;

	source1 = (unsigned char *)s1;
	source2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*source1 != *source2)
			return (*source1 - *source2);
		source1++;
		source2++;
		n--;
	}
	return (0);
}
