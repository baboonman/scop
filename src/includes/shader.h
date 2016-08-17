/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenouf- <jrenouf-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 17:42:39 by jrenouf-          #+#    #+#             */
/*   Updated: 2016/08/14 17:43:15 by jrenouf-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHADER_H
# define SHADER_H

# include "gl_include.h"
# include <stdio.h>
# include <stdlib.h>

GLuint				get_shader_prog(char *vs_file, char *fs_file);

#endif
