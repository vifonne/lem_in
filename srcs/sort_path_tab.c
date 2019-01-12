/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_path_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:02:15 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/11 15:44:04 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	sort_path_tab(t_path **path_tab, size_t len)
{
	t_path	*tmp;
	size_t	i;

	tmp = *path_tab;
	while ((len - 1) > 0)
	{
		i = 0;
		while (i < (len - 1))
		{
			if (path_tab[i]->size > path_tab[i + 1]->size)
			{
				tmp = path_tab[i];
				path_tab[i] = path_tab[i + 1];
				path_tab[i + 1] = tmp;
			}
			i++;
		}
		len--;
	}
}