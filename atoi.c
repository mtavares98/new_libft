/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtavares <mtavares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:43:44 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/14 22:51:30 by mtavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	s;
	int	i;

	n = 0;
	s = 1;
	i = -1;
	while ((nptr[++i] > 8 && nptr[i] < 14) || nptr[i] == 32)
		;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		s = (nptr[i] != '-') - (nptr[i] == '-');
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		n = (n * 10) + (s * (nptr[i++] - '0'));
	return (n);
}
