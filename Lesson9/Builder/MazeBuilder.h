/*

    Mục đích cơ bản của mẫu xây dựng là tách quá trình tạo đối tượng riêng biệt với biểu diễn của đối tương
    để việc tạo dựng một đối tượng phức tạp trở nên dễ dàng hơn và có sự kiểm soát tốt hơn đối với tiến trình
    tạo dựng đối tượng.

*/


#ifndef MAZE_BUILDER_H
#define MAZE_BUILDER_H

class Maze;

class MazeBuilder {
public:
    virtual void BuildMaze() { }
    virtual void BuildRoom(int) { }
    virtual void BuildDoor(int, int) { }

    virtual Maze* GetMaze() { return 0; }
protected:
    MazeBuilder();
};

#endif /* MAZE_BUILDER_H */
