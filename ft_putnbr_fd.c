/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <gmaia-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:33:42 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/10/14 12:33:52 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = (long int)n;
	if (nb < 0)
	{
		ft_putchar_fd ('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd ((int)(nb / 10), fd);
		ft_putnbr_fd ((int)(nb % 10), fd);
	}
	else
		ft_putchar_fd ((char)(nb + '0'), fd);
}
