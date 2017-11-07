/*
 Please fix to make it built
 */

#include <iostream>
#include <vector>

int main() {
  std::vector<Shape*> shapes;
  class_adapter::TextShape s1;
  shapes.push_back(&s1);
  Point p1, p2;
  shapes[0].BoundingBox(p1, p2);


  object_adapter::TextShape s2;
  shapes.push_back(&s2);
  shapes[1].BoundingBox(p1, p2);
}