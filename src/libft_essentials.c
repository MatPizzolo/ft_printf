/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_essentials.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:23:20 by mpizzolo          #+#    #+#             */
/*   Updated: 2023/01/29 14:17:50 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	z;
	unsigned int	dest_length;
	unsigned int	src_length;

	if (dst == '\0')
		dest_length = 0;
	else
		dest_length = ft_strlen(dst);
	z = dest_length;
	src_length = ft_strlen(src);
	if (dstsize <= dest_length || dstsize == 0)
		return (src_length + dstsize);
	i = 0;
	while (i < (dstsize - z - 1) && src[i] && z + 1 < dstsize)
	{
		dst[z + i] = src[i];
		i++;
	}		
	dst[z + i] = '\0';
	return (dest_length + src_length);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cast;
	unsigned char	*s2_cast;

	s1_cast = (unsigned char *)s1;
	s2_cast = (unsigned char *)s2;
	while (n && (*s1_cast == *s2_cast))
	{
		s1_cast++;
		s2_cast++;
		n--;
	}
	if (n)
		return (*s1_cast - *s2_cast);
	else
		return (0);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
