#ifndef REGISTER_MAP_H
#define REGISTER_MAP_H

#include <stdint.h>

/* Simulated ECU memory region */
extern volatile uint16_t ECU_MEMORY[3];

/* Register indices */
#define RPM_REG        0
#define THROTTLE_REG   1
#define TEMP_REG       2

#endif