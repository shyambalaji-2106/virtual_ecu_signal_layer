#include "watchdog.h"
#include <stdio.h>

void watchdog_check(uint32_t current_time, uint32_t last_update)
{
    if ((current_time - last_update) > 20)
    {
        printf("SAFE STATE: Watchdog timeout detected\n");
    }
}