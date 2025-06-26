#pragma once

class Device
{
private:
    uint16_t bluetooth_device_id;

public:
    void set_led(uint8_t leds);
};
