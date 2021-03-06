/*****************************************************************************
 *
 * XSDDEFAULT.H - Header file for default status data routines
 *
 * Copyright (c) 1999-2009 Ethan Galstad (egalstad@nagios.org)
 * Copyright (c) 2009-2013 Nagios Core Development Team and Community Contributors
 * Copyright (c) 2009-present Icinga Development Team (http://www.icinga.org)
 *
 * License:
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *****************************************************************************/

#ifndef _XSDDEFAULT_H
#define _XSDDEFAULT_H

#ifdef NSCORE
int xsddefault_initialize_status_data(char *);
int xsddefault_cleanup_status_data(char *,int);
int xsddefault_save_status_data(void);
#endif

#ifdef NSCGI

#define XSDDEFAULT_NO_DATA               0
#define XSDDEFAULT_INFO_DATA             1
#define XSDDEFAULT_PROGRAMSTATUS_DATA    2
#define XSDDEFAULT_HOSTSTATUS_DATA       3
#define XSDDEFAULT_SERVICESTATUS_DATA    4
#define XSDDEFAULT_CONTACTSTATUS_DATA    5
#define XSDDEFAULT_HOSTCOMMENT_DATA      6
#define XSDDEFAULT_SERVICECOMMENT_DATA   7
#define XSDDEFAULT_HOSTDOWNTIME_DATA     8
#define XSDDEFAULT_SERVICEDOWNTIME_DATA  9

int xsddefault_read_status_data(char *,int);
#endif

int xsddefault_grab_config_info(char *);
int xsddefault_grab_config_directives(char *);

#endif
