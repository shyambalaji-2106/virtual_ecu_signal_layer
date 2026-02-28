#include <stdio.h>
#include <stdint.h>
#include "register_map.h"
#include "signal_reader.h"
#include "can_frame_builder.h"
#include "watchdog.h"

int main()
{
    SignalData data;
    CANFrame frame;

    /* Simulate register updates */
    ECU_MEMORY[RPM_REG] = 3000;
    ECU_MEMORY[THROTTLE_REG] = 45;
    ECU_MEMORY[TEMP_REG] = 90;

    uint32_t current_time = 0;
    uint32_t last_update = 0;

    for (int cycle = 0; cycle < 5; cycle++)
    {
        current_time += 10;

        read_signals(&data);
        build_can_frame(&data, &frame);

        printf("Cycle %d\n", cycle);
        printf("CAN Frame: ");

        uint8_t* bytes = (uint8_t*)&frame;
        for (size_t i = 0; i < sizeof(CANFrame); i++)
        {
            printf("0x%02X ", bytes[i]);
        }
        printf("\n");

        watchdog_check(current_time, last_update);
        last_update = current_time;
    }

    printf("Struct Size: %lu bytes\n", sizeof(CANFrame));

    return 0;
}