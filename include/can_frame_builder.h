#ifndef CAN_FRAME_BUILDER_H
#define CAN_FRAME_BUILDER_H

#include "signal_reader.h"

typedef struct __attribute__((packed)) {
    uint16_t rpm;
    uint8_t throttle;
    int8_t temp;
    uint8_t reserved[4];
} CANFrame;

void build_can_frame(const SignalData* data, CANFrame* frame);

#endif