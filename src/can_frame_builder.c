#include "can_frame_builder.h"
#include <string.h>

void build_can_frame(const SignalData* data, CANFrame* frame)
{
    memset(frame, 0, sizeof(CANFrame));

    frame->rpm = data->rpm;
    frame->throttle = data->throttle;
    frame->temp = data->temp;
}