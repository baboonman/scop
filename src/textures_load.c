/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures_load.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenouf- <jrenouf-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:34:16 by jrenouf-          #+#    #+#             */
/*   Updated: 2016/11/13 18:34:26 by jrenouf-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "textures_load.h"

static void			set_texture1(t_tex *tex, GLuint program)
{
	float			*texels;
	int				w;
	int				h;

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, tex->id[0]);
	texels = import_bmp_file("textures/chaton.bmp", &w, &h);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_FLOAT, texels);
	glUniform1i(glGetUniformLocation(program, "tex0"), 0);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	free(texels);
}

static void			set_texture2(t_tex *tex, GLuint program)
{
	float			*texels;
	int				w;
	int				h;

	glActiveTexture(GL_TEXTURE0 + 1);
	glBindTexture(GL_TEXTURE_2D, tex->id[1]);
	texels = import_bmp_file("textures/weird1.bmp", &w, &h);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_FLOAT, texels);
	glUniform1i(glGetUniformLocation(program, "tex1"), 1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	free(texels);
}

static void			set_texture3(t_tex *tex, GLuint program)
{
	float			*texels;
	int				w;
	int				h;

	glActiveTexture(GL_TEXTURE0 + 2);
	glBindTexture(GL_TEXTURE_2D, tex->id[2]);
	texels = import_bmp_file("textures/wood1.bmp", &w, &h);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_FLOAT, texels);
	glUniform1i(glGetUniformLocation(program, "tex2"), 2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	free(texels);
}

void				setup_texture(t_tex *tex, GLuint program, t_mesh *mesh)
{
	glGenTextures(2, tex->id);
	set_texture1(tex, program);
	set_texture2(tex, program);
	set_texture3(tex, program);
	glUniform1i(glGetUniformLocation(program, "nbPrim"), mesh->nb_prim);
}
