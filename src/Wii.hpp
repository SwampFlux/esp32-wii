/**
 * @file Wii.h
 * @author Wray Bowling
 * @brief
 * @version 0.1
 * @date 2025-06-22
 *
 * @copyright Copyright (c) 2025
 *
 */

#pragma once

enum balance_position_type_t
{
    BALANCE_POSITION_TOP_RIGHT,
    BALANCE_POSITION_BOTTOM_RIGHT,
    BALANCE_POSITION_TOP_LEFT,
    BALANCE_POSITION_BOTTOM_LEFT,
};

typedef void (*wiimote_callback_t)(wiimote_event_type_t event_type, uint16_t wiimote, uint8_t *data, size_t len);

class Wii
{
public:
    void init(wiimote_callback_t instance_callback, uint8_t max_connections);
    void update();

    void discovery(bool enable);

    void scan(bool enable);
    uint8_t connections;
    bool is_scanning;
    void disconnect_all();

    void _callback(wiimote_event_type_t event_type, uint16_t handle, uint8_t *data, size_t len);

    void initiate_auth(uint16_t handle);

private:
    wiimote_callback_t _wiimote_callback;
};