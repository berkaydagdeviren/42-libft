/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:58:44 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/11 17:58:46 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char	*p;
	char	*charfind;

	p = (char *) s;
	charfind = 0;
	while ((s != 0) && n--)
	{
		if (*p == (char) c)
		{
			charfind = p;
			break ;
		}
		p++;
	}
	return (charfind);
}
