#ifndef WATCHDOG_H
#define WATCHDOG_H

#include <stdint.h>

void watchdog_check(uint32_t current_time, uint32_t last_update);

#endif