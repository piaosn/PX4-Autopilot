/**
 * @file px4_simple_app.c
 * Minimal application example for PX4 autopilot
 *
 * @author Example User <mail@example.com>
 */

#include <px4_platform_common/log.h>

extern "C" __EXPORT int mode_register_main(int argc, char *argv[])
{
	PX4_INFO("Hello Mode Register");
	return OK;
}
