//
// Created by bangoc on 21/10/2017.
//

#ifndef HW2_IVAL_MAKER_H
#define HW2_IVAL_MAKER_H

/*
 * please add your includes here
 */

class Ival_maker {
public:
    virtual Ival_slider* slider(int, int) = 0;
    virtual Ival_dial* dial(int, int) = 0;
};

#endif //HW2_IVAL_MAKER_H
