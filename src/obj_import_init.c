/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obj_import_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenouf- <jrenouf-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 17:42:39 by jrenouf-          #+#    #+#             */
/*   Updated: 2016/08/14 17:43:15 by jrenouf-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "obj_import.h"

void				allocate_mesh(t_mesh *mesh, t_sizes *sizes)
{
	mesh->vertices = malloc(sizeof(t_vec4) * sizes->vert_size);
	mesh->indices = malloc(sizeof(GLuint) * sizes->ind_size);
	mesh->vert_pos = 0;
	mesh->ind_pos = 0;
	mesh->nb_prim = sizes->ind_size / 3;
}

void				init_min_max(t_mesh *m)
{
	m->mm.min_x = 10000;
	m->mm.max_x = -10000;
	m->mm.min_y = 10000;
	m->mm.max_y = -10000;
	m->mm.min_z = 10000;
	m->mm.max_z = -10000;
}

int					check_extension(char *filename)
{
	int				i;
	int				j;
	char			*s;

	i = 0;
	j = 0;
	if (!(s = (char *)malloc(sizeof(char) * ft_strlen(filename))))
		return (0);
	while (filename[i] != '.')
		i++;
	i++;
	while (filename[i] != '\0')
		s[j++] = filename[i++];
	s[j] = '\0';
	return (!ft_strcmp("obj", s));
}
