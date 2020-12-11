/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  '--enable-static=yes' '--enable-shared=no' '--enable-sockets' '--enable-mysqlnd' '--with-pcre-jit' '--with-zlib' '--enable-fpm' '--prefix=/tmp/php'"
#define PHP_ODBC_CFLAGS	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/tmp/php/lib/php/extensions/no-debug-non-zts-20200930"
#define PHP_PREFIX              "/tmp/php"
#define PHP_BINDIR              "/tmp/php/bin"
#define PHP_SBINDIR             "/tmp/php/sbin"
#define PHP_MANDIR              "/tmp/php/php/man"
#define PHP_LIBDIR              "/tmp/php/lib/php"
#define PHP_DATADIR             "/tmp/php/share/php"
#define PHP_SYSCONFDIR          "/tmp/php/etc"
#define PHP_LOCALSTATEDIR       "/tmp/php/var"
#define PHP_CONFIG_FILE_PATH    "/tmp/php/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""
