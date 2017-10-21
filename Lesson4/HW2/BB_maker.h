//
// Created by bangoc on 21/10/2017.
//

#ifndef HW2_BB_MAKER_H
#define HW2_BB_MAKER_H

#include "Ival_maker.h"

// Make BB objects
class BB_maker: public Ival_maker {
public:
    Ival_slider* slider(int, int) override;
    Ival_dial* dial(int, int) override;
};

#endif //HW2_BB_MAKER_H
