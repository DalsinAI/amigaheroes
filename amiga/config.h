/* Heroes' config.h (configure makes it from src/config.h.in) for AmigaOS
 * with libnix, the SDL video and keyboard drivers and the SDL_mixer sound
 * driver. No gettext: Heroes is in English. The paths are given at run
 * time (amiga/amiga_env.c: HEROES_PREFIX and the others), so the compiled-in
 * ones below are only fallbacks.
 * The AmiCradle Team. GPL 2 or later, like Heroes. */
#define PACKAGE "heroes"
#define PACKAGE_NAME "heroes"
#define PACKAGE_STRING "heroes 0.21"
#define PACKAGE_TARNAME "heroes"
#define PACKAGE_VERSION "0.21"
#define PACKAGE_BUGREPORT "heroes-bugs@lists.sourceforge.net"
#define VERSION "0.21"
#define HOST "m68k-amigaos"
#define PREFIX "PROGDIR:"
#define FORWARD_RELATIVE_PKGDATADIR "data"
#define FORWARD_RELATIVE_LOCALEDIR "locale"
#define BACKWARD_RELATIVE_BINDIR "PROGDIR:"
#define WORDS_BIGENDIAN 1
#define BYTEORDER 4321
#define STDC_HEADERS 1
#define PROTOTYPES 1
#define HAVE_DIRENT_H 1
#define HAVE_FCNTL_H 1
#define HAVE_LIMITS_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STDDEF_H 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_STRINGS_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_GETCWD 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_MEMCPY 1
#define HAVE_MKDIR 1
#define HAVE_READDIR 1
#define HAVE_SLEEP 1
#define HAVE_STRCHR 1
#define HAVE_STRDUP 1
#define HAVE_STRERROR 1
#define HAVE_STRTOUL 1
#define HAVE_STRCASECMP 1
#define HAVE_DECL_STRCASECMP 1
#define HAVE_DECL_STRERROR 1
#define HAVE_DECL_MALLOC 1
#define HAVE_DECL_REALLOC 1
#define HAVE_DECL_CALLOC 1
#define HAVE_DECL_FREE 1
#define HAVE_VPRINTF 1
#define HAVE_FTRUNCATE 1
#define HAVE_LIBSDL_MIXER 1
#define HAVE_SDL_ENABLEKEYREPEAT 1
#define HAVE_SDL_JOYSTICKOPEN 1
#define HAVE_SSIZE_T 1
/* libnix has these, so lib/'s replacements are not built */
#define HAVE_STPCPY 1
#define HAVE_DECL_STPCPY 1
#define HAVE_STRNDUP 1
#define HAVE_MEMRCHR 1
#define HAVE_DECL_MEMRCHR 1
#define HAVE_DECL_STRNLEN 1
#define HAVE_DONE_WORKING_MALLOC_CHECK 1
#define HAVE_DONE_WORKING_REALLOC_CHECK 1
