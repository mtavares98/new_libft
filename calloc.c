/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:38:29 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 19:48:32 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	total;

	total = nmemb * size;
	if (nmemb == 0 || size == 0 || total / size != nmemb)
		return (NULL);
	ptr = malloc(total);
	if (ptr)
		ft_bzero(ptr, total);
	return (ptr);
}
