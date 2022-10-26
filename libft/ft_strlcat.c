/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:03:38 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/11 14:04:44 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	while (dest[i] && i < nb)
	{
		i++;
	}
	while (src[j] && i + j + 1 < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < nb)
		dest[i + j] = '\0';
	return (i + ft_strlen((char *)src));
}
