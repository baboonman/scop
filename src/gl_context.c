/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gl_context.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenouf- <jrenouf-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 17:42:39 by jrenouf-          #+#    #+#             */
/*   Updated: 2016/08/14 17:43:15 by jrenouf-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_context.h"

void					set_hint(void)
{
	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

void					set_callback(GLFWwindow *win)
{
	glfwSetErrorCallback(error_callback);
	glfwSetKeyCallback(win, key_callback);
}

int						init_opengl(t_gl_data *data, t_win_info *win_info)
{
	int					width;
	int					height;

	if (!glfwInit())
		return (0);
	set_hint();
	data->win = glfwCreateWindow(win_info->width, win_info->height,
									win_info->name, NULL, NULL);
	if (!data->win)
	{
		glfwTerminate();
		return (0);
	}
	set_callback(data->win);
	glfwMakeContextCurrent(data->win);
	glfwSwapInterval(1);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glfwGetFramebufferSize(data->win, &(width), &(height));
	glViewport(0, 0, width, height);
	return (1);
}

void					clean_opengl(t_gl_data *data)
{
	glfwDestroyWindow(data->win);
	glfwTerminate();
}
