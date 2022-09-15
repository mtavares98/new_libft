/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:57:35 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 22:40:57 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	if (size == 0)
		return (size + s_len);
	d_len = ft_strlen(dst);
	j = d_len;
	if (d_len > size)
		return (size + s_len);
	i = -1;
	while (src[++i] && d_len + i < size - 1)
		dst[j++] = src[i];
	dst[j] = 0;
	return (d_len + s_len);
}
