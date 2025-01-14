/*
 * Copyright (c) 2015, 2024, Oracle and/or its affiliates.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0, as
 * published by the Free Software Foundation.
 *
 * This program is designed to work with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation. The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have either included with
 * the program or referenced in the documentation.
 *
 * Without limiting anything contained in the foregoing, this file,
 * which is part of Connector/C++, is also subject to the
 * Universal FOSS Exception, version 1.0, a copy of which can be found at
 * https://oss.oracle.com/licenses/universal-foss-exception.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

/*
  Lists of character sets known to CDK string codec (see codec.h).
  This is generally kept in sync with character sets known to the MySQL Server.
  See: http://dev.mysql.com/doc/refman/en/charset-charsets.html

  Note: currently the codec can only convert utf8 strings.
*/


#ifndef MYSQL_CDK_CHARSETS_H
#define MYSQL_CDK_CHARSETS_H

#define CDK_CS_LIST(X) \
  X(big5)  \
  X(dec8)  \
  X(cp850)  \
  X(hp8)  \
  X(koi8r)  \
  X(latin1)  \
  X(latin2)  \
  X(swe7)  \
  X(ascii)  \
  X(ujis)  \
  X(sjis)  \
  X(hebrew)  \
  X(tis620)  \
  X(euckr)  \
  X(koi8u)  \
  X(gb2312)  \
  X(greek)  \
  X(cp1250)  \
  X(gbk)  \
  X(latin5)  \
  X(armscii8)  \
  X(utf8mb3)  \
  X(ucs2)  \
  X(cp866)  \
  X(keybcs2)  \
  X(macce)  \
  X(macroman)  \
  X(cp852)  \
  X(latin7)  \
  X(utf8mb4)  \
  X(cp1251)  \
  X(utf16)  \
  X(utf16le)  \
  X(cp1256)  \
  X(cp1257)  \
  X(utf32)  \
  X(binary)  \
  X(geostd8)  \
  X(cp932)  \
  X(eucjpms)  \
  X(gb18030)  \

#endif
