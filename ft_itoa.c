/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <gmaia-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:25:46 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/10/12 17:29:49 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int				len;
	unsigned int	nb;

	len = 1;
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	else
		nb = n;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				intlen;
	unsigned int	nb;

	intlen = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (intlen + 1));
	if (!str)
		return (NULL);
	str[intlen] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	while (intlen-- > 0 && str[intlen] != '-')
	{
		str[intlen] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
