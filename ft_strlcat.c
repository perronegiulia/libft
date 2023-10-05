/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:09:16 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/10/03 21:24:02 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		altdst;
	size_t		altsrc;
	size_t		i;

	if (!size)
		return (ft_strlen(dst) + size);
	altsrc = ft_strlen(src);
	i = 0;
	while (dst[i] && i < size)
		i++;
	altdst = i;
	while (src[i - altdst] && i < size - 1)
	{
		dst[i] = src[i - altdst];
		i++;
	}
	if (altdst < size)
		dst[i] = '\0';
	return (altdst + altsrc);
}