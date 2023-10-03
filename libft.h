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


#ifndef libft

#define libft

#include <stdlib.h>

#include <unistd.h>

size_t	ft_strlen(const char *s);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);