/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gl_context.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenouf- <jrenouf-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 17:42:39 by jrenouf-          #+#    #+#             */
/*   Updated: 2016/08/14 17:43:15 by jrenouf-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GL_CONTEXT_H
# define GL_CONTEXT_H

# include "gl_include.h"
# include "gl_struct.h"
# include "callback.h"

int						init_opengl(t_gl_data *data, t_win_info *win_info);
void					clean_opengl(t_gl_data *data);
void					set_hint();
void					set_callback(GLFWwindow *win);

#endif
