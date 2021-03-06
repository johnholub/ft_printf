/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yholub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:05:33 by yholub            #+#    #+#             */
/*   Updated: 2017/11/13 15:57:07 by yholub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t size;
	size_t i;

	if (s == NULL)
		return ;
	size = ft_strlen(s);
	i = -1;
	while (++i < size)
	{
		s[i] = 0;
	}
}
