#ifndef TEXT_MANIPULATOR_H
#define TEXT_MANIPULATOR_H

#include "Manipulator.h"

template<typename T>
class TextManipulator : public Manipulator {
public:
    TextManipulator(const T* s) : _textShape(s) { 
    }
private:
    const T* _textShape;
};

#endif /* TEXT_MANIPULATOR_H */
