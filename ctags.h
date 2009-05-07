/*
*   $Id$
*
*   Copyright (c) 1996-2002, Darren Hiebert
*
*   This source code is released for free distribution under the terms of the
*   GNU General Public License.
*
*   Program definitions
*/
#ifndef _CTAGS_H
#define _CTAGS_H

/*
*   MACROS
*/
#ifndef PROGRAM_VERSION
# define PROGRAM_VERSION "5.6b1"
#endif
#define PROGRAM_NAME      "Exuberant Ctags"
#define PROGRAM_URL       "http://ctags.sourceforge.net"
#define PROGRAM_COPYRIGHT "Copyright (C) 1996-2007"
#define AUTHOR_NAME       "Darren Hiebert"
#define AUTHOR_EMAIL      "dhiebert@users.sourceforge.net"

#ifdef KANJI
# define PROGRAM_JP_VERSION	"J1"
# define JP_AUTHOR_NAME		"Hirohito Higashi"
# define JP_AUTHOR_URL		"http://hp.vector.co.jp/authors/VA025040/"
# define JP_AUTHOR_EMAIL	"h_east@pop11.odn.ne.jp"
#endif

#endif	/* _CTAGS_H */

/* vi:set tabstop=4 shiftwidth=4: */
