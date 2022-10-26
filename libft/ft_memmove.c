/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:17:21 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/11 17:58:34 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	csrc = (char *) src;
	cdest = (char *) dest;
	if (cdest > csrc)
	{
		while (n-- > 0)
			cdest[n] = csrc[n];
	}
	else
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dest);
}
