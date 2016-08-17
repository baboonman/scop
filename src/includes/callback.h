/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callback.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenouf- <jrenouf-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 17:42:39 by jrenouf-          #+#    #+#             */
/*   Updated: 2016/08/14 17:43:15 by jrenouf-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALLBACK_H
# define CALLBACK_H

# include <stdio.h>
# include "gl_include.h"
# include "gl_struct.h"

void			error_callback(int error, const char *description);
void			key_callback(GLFWwindow *window, int key, int scancode,
								int action, int mods);

#endif
