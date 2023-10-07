/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <gmaia-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:35:35 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/10/07 20:00:21 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	i = ft_strlen(s);
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	while (i--)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		if (s[i] == '\0')
			break ;
	}
	return (0);
}