/*
 Theo giải pháp class adapter, lớp kế thừa sẽ thực hiện đa kế thừa từ lớp được đóng gói và giao diện sử dụng đích
 */

#include "TextShape.h"
#include "TextView.h"
#include "Manipulator.h"
#include "TextManipulator.h"

namespace class_adapter {

void TextShape::BoundingBox (
    Point& bottomLeft, Point& topRight
) const {
    Coord bottom, left, width, height;

    GetOrigin(bottom, left);
    GetExtent(width, height);

    bottomLeft = Point(bottom, left);
    topRight = Point(bottom + height, left + width);
}


bool TextShape::IsEmpty () const {
    return TextView::IsEmpty();
}


Manipulator* TextShape::CreateManipulator () const {
    return new TextManipulator<class_adapter::TextShape>(this);
}

}  // class_adapter