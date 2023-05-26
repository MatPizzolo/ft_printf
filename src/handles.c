/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handles.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzolo <mpizzolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:32:31 by mpizzolo          #+#    #+#             */
/*   Updated: 2023/03/20 18:06:26 by mpizzolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strllen(const char *s, int len)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && i < len)
		i++;
	return (i);
}

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	reverse_str(char *str, int xx)
{
	int		len;
	int		i;
	int		j;
	char	temp;

	i = 0;
	len = ft_strllen(str, xx);
	j = len - 1;
	while (i < len - 1 && i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
