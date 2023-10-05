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

size_t  ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int     ft_islower(int c);
int     ft_isspace(int c);
int     ft_isupper(int c);

int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);
