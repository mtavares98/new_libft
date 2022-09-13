/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:46:32 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/13 19:09:09 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = -1;
	while (src[++src_len])
		;
	i = -1;
	while (++i + 1 < size && src[i])
		dst[i] = src[i];
	if (i != size)
		dst[i] = 0;
	return (src_len);
}
