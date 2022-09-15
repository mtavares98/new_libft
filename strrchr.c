/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:16:42 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 22:41:52 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	chr;

	chr = c;
	i = ft_strlen(s);
	while (s[i] != chr && --i > -1)
		;
	if (i > -1)
		return ((char *)(s + i));
	return (NULL);
}
