########################################################################
# Copyright (c) 1988-2023 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: libfila.pri
#
# Author: $author$
#   Date: 1/19/2023
#
# generic QtCreator project file for numachinae framework fila static library libfila
########################################################################

########################################################################
# libfila
XOS_LIB_FILA_VERSION_BUILD_DATE = 1/19/2023 #$$system(~/bin/utility/tdate)

# libfila TARGET
#
libfila_TARGET = fila
libfila_TEMPLATE = lib
libfila_CONFIG += staticlib

# libfila INCLUDEPATH
#
libfila_INCLUDEPATH += \
$${fila_INCLUDEPATH} \

# libfila DEFINES
#
libfila_DEFINES += \
$${fila_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_FILA_VERSION_BUILD_DATE=$${XOS_LIB_FILA_VERSION_BUILD_DATE} \

########################################################################
# libfila OBJECTIVE_HEADERS
#
#libfila_OBJECTIVE_HEADERS += \
#$${FILA_SRC}/xos/lib/fila/version.hh \

# libfila OBJECTIVE_SOURCES
#
#libfila_OBJECTIVE_SOURCES += \
#$${FILA_SRC}/xos/lib/fila/version.mm \

########################################################################
# libfila HEADERS
#
libfila_HEADERS += \
$${FILA_SRC}/xos/lib/fila/version.hpp \

# libfila SOURCES
#
libfila_SOURCES += \
$${FILA_SRC}/xos/lib/fila/version.cpp \

########################################################################

