/*
 Theo giải pháp object adapter, lớp đóng gói sẽ lưu đối tượng của lớp được đóng gói
 và triển khai các API trên cơ sở đối tượng được đóng gói.
 */
#include "TextShape.h"

#include "Manipulator.h"
#include "Coord.h"
#include "Point.h"
#include "TextView.h"
#include "TextManipulator.h"

namespace object_adapter {

TextShape::TextShape (TextView* t) {
    _text = t;
}


void TextShape::BoundingBox (
    Point& bottomLeft, Point& topRight
) const {
    Coord bottom, left, width, height;

    _text->GetOrigin(bottom, left);
    _text->GetExtent(width, height);

    bottomLeft = Point(bottom, left);
    topRight = Point(bottom + height, left + width);
}


bool TextShape::IsEmpty () const {
    return _text->IsEmpty();
}


Manipulator* TextShape::CreateManipulator () const {
    return new TextManipulator<object_adapter::TextShape>(this);
}

}  // object_adapter