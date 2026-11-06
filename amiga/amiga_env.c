/* getenv() for Heroes on AmigaOS (-Wl,--wrap=getenv), from the Team's GNU
 * Robbo port. Heroes finds its files through the environment
 * (src/relocate.c) and keeps its settings, scores and saved games in
 * $(home-dir)/.heroes. Here the prefix is the program's drawer, the data
 * its data/, and $HOME its user/ (made at the first start). Every other
 * name is libnix's getenv's.
 * The AmiCradle Team. GPL 2 or later, like Heroes. */
#include <string.h>
#include <sys/stat.h>

char *__real_getenv(const char *name);

char *__wrap_getenv(const char *name)
{
	static int made;
	if (!name)
		return __real_getenv(name);
	if (strcmp(name, "HOME") == 0) {
		if (!made) {
			mkdir("PROGDIR:user", 0755);
			made = 1;
		}
		return "PROGDIR:user";
	}
	if (strcmp(name, "HEROES_PREFIX") == 0)
		return "PROGDIR:";
	if (strcmp(name, "HEROES_DATA_DIR") == 0)
		return "PROGDIR:data";
	if (strcmp(name, "HEROES_LOCALE_DIR") == 0)
		return "PROGDIR:locale";
	return __real_getenv(name);
}
