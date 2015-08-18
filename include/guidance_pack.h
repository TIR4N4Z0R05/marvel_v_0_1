#ifndef GUIDANCE_PACK_HEADER
#define GUIDANCE_PACK_HEADER

enum vertical_mode {
    VERTICAL_HOLD,
    VERTICAL_LOCK,
    VERTICAL_CLIMB,
    VERTICAL_IDLE
};

enum horizontal_mode {
    HORIZONTAL_HOLD,
    HORIZONTAL_LOCK,
    HORIZONTAL_CLIMB,
    HORIZONTAL_VELOCITY,
    HORIZONTAL_IDLE
};

enum heading_mode {
    HEADING_HOLD,
    HEADING_LOCK,
    HEADING_RATE,
    HEADING_IDLE
};

#endif
