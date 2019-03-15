#include <gcc-plugin.h>

int
plugin_init(struct plugin_name_args *plugin_info,
		struct plugin_gcc_version *version)
{
	(void)plugin_info;
	(void)version;

	fprintf(stderr, "HELLO from %s\n", plugin_info->full_name);

	return 0;
}

int
plugin_is_GPL_compatible;
