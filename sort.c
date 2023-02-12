/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbouagou <bbouagou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:34:31 by bbouagou          #+#    #+#             */
/*   Updated: 2023/02/12 06:52:34 by bbouagou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** simple bubble sort to sort the c stack.
*/

void	sort_array(t_info *info)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = 0;
	while (i < info->c_size)
	{
		j = 0;
		while (j < info->c_size)
		{
			if (info->c[i] < info->c[j])
			{
				tmp = info->c[i];
				info->c[i] = info->c[j];
				info->c[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*
** idk what i'm doing here so im just gonna first
** create a third stack named c and sort it, it may
** be of use later on.
*/

void	sort(t_info *info)
{
	size_t	i;

	i = 0;
	info->c = (int *)malloc(sizeof(int) * info->a_size);
	if (!info->c)
	{
		ft_printf("Error\nMalloc failure.\n");
		exit(-1);
	}
	info->c_size = info->a_size;
	while (i < info->c_size)
	{
		info->c[i] = info->a[i];
		i++;
	}
	sort_array(&(*info));
}