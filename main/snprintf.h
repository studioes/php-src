/*
   +----------------------------------------------------------------------+
   | PHP version 4.0                                                      |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997, 1998, 1999, 2000 The PHP Group                   |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.0 of the PHP license,       |
   | that is bundled with this package in the file LICENSE, and is        |
   | available at through the world-wide-web at                           |
   | http://www.php.net/license/2_0.txt.                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Stig S�ther Bakken <ssb@guardian.no>                        |
   +----------------------------------------------------------------------+
 */

#ifndef _PHP_SNPRINTF_H
#define _PHP_SNPRINTF_H

#ifndef HAVE_SNPRINTF
extern int ap_php_snprintf(char *, size_t, const char *, ...);
#define snprintf ap_php_snprintf
#endif

#ifndef HAVE_VSNPRINTF
extern int ap_php_vsnprintf(char *, size_t, const char *, va_list ap);
#define vsnprintf ap_php_vsnprintf
#endif

#if BROKEN_SPRINTF
int php_sprintf (char* s, const char* format, ...);
#else
#define php_sprintf sprintf
#endif

#endif /* _PHP_SNPRINTF_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */
