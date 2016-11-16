/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bmp_import.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenouf- <jrenouf-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:03:10 by jrenouf-          #+#    #+#             */
/*   Updated: 2016/11/16 16:07:37 by jrenouf-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BMP_IMPORT_H
# define BMP_IMPORT_H

# include <stdio.h>
# include <stdlib.h>
# include "bmp_import_fn.h"

typedef struct	__attribute__((__packed__))	s_bmp_header
{
	unsigned short int						magic;
	unsigned int							size;
	unsigned short int						reserved1;
	unsigned short int						reserved2;
	unsigned int							offset;
}											t_bmp_header;

typedef struct	__attribute__((__packed__))	s_bmp_info
{
	unsigned int							size;
	int										width;
	int										height;
	unsigned short int						planes;
	unsigned short int						bits;
	unsigned int							compression;
	unsigned int							image_size;
	int										xresolution;
	int										yresolution;
	unsigned int							ncolours;
	unsigned int							important_colours;
}											t_bmp_info;

typedef struct								s_bmp_file
{
	FILE									*file;
	t_bmp_header							header;
	t_bmp_info								info;
	unsigned char							*img;
}											t_bmp_file;

#endif
