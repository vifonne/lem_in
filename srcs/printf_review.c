/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_review.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 10:41:11 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/21 14:43:36 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"lem_in.h"

void	printf_review(t_data *data)
{
	t_path	*tmpath;
	tmpath = data->global_path;
	/*t_map	*tmp;
	int		n;
	int		i;

	tmp = data->map;
	printf("ant= %zu\n\n", data->ant);
	while (tmp)
	{
		n = 0;
		printf("name= %s\t", tmp->name);
		printf("x= %zu\t", tmp->x);
		printf("y= %zu\t", tmp->y);
		printf("state= %d\t", tmp->state);
		printf("nbant= %zu\t", tmp->nbant);
		printf("nameant= %zu\t", tmp->nameant);
		printf("connex= %ld\t\n", tmp->connex);
		while (tmp->pipe && tmp->pipe[n])
		{
			printf("pipe= %s\n", tmp->pipe[n]->name);
			n++;
		}
		printf("\n");
		tmp = tmp->next;
	}*/
	while (tmpath)
	{
	printf("%s->", tmpath->room->name);
		tmpath = tmpath->next;
	}
	printf("\n");
}
