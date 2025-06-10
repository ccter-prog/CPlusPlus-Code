#ifndef __ClockDisplay_H__
#define __ClockDisplay_H__

#include "NumberDisplay.h"

class ClockDisplay
{
    public:
        void start(void);
    private:
        NumberDisplay hours;
        NumberDisplay minutes;
};

#endif