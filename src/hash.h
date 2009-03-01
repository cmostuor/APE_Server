/*
  Copyright (C) 2006, 2007, 2008, 2009  Anthony Catel <a.catel@weelya.com>

  This file is part of ACE Server.
  ACE is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  ACE is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with ACE ; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef _LHTBL
#define _LHTBL

#define HACH_TABLE_MAX 5381

typedef struct HTBL
{
	char *key;
	void *addrs;
	struct HTBL *next;
} HTBL;

HTBL **hashtbl_init();

void hashtbl_free(HTBL **htbl);
void *hashtbl_seek(HTBL **htbl, char *key);
void hashtbl_erase(HTBL **htbl, char *key);
void hashtbl_append(HTBL **htbl, char *key, void *structaddr);
/*void * hashtbl_seek_special(HTBL **htbl, char *key, char *channel);
void hashtbl_erase_special(HTBL **htbl, char *key, char *channel);*/
#endif
