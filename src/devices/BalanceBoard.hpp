#include "Device.hpp"

class BalanceBoard extends Device
{
public:
    void get_balance_weight(uint8_t *data, float *weight);
};
