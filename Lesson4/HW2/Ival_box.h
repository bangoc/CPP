//
// Created by bangoc on 20/10/2017.
//

#ifndef HW2_IVAL_BOX_H
#define HW2_IVAL_BOX_H

class Ival_box {
public:
    virtual int get_value() = 0;
    virtual void set_value(int i) = 0;
    virtual void reset_value(int i) = 0;
    virtual void prompt() = 0;
    virtual bool was_changed() const = 0;
    virtual ~Ival_box(){}
};

#endif //HW2_IVAL_BOX_H
