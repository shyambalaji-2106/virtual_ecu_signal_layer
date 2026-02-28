#ifndef SIGNAL_READER_H
#define SIGNAL_READER_H

#include <stdint.h>

typedef struct {
    uint16_t rpm;
    uint8_t throttle;
    int8_t temp;
} SignalData;

void read_signals(SignalData* data);

#endif