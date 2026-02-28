#include "register_map.h"
#include "signal_reader.h"

volatile uint16_t ECU_MEMORY[3];

void read_signals(SignalData* data)
{
    data->rpm = ECU_MEMORY[RPM_REG];

    data->throttle = (uint8_t)(ECU_MEMORY[THROTTLE_REG] & 0x00FF);

    data->temp = (int8_t)(ECU_MEMORY[TEMP_REG] & 0x00FF);
}