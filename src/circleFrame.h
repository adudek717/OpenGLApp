#ifndef CIRCLEFRAME_H
#define CIRCLEFRAME_H

#include <GL/glew.h>

#include "program.h"

class CircleFrame{
 public:
    void Initialize();
    ~CircleFrame();
    void Draw(const Program & program);
 private:
    GLuint vao_;
    GLuint vertex_buffer_;
    GLuint color_buffer_;
};

#endif // CIRCLEFRAME_H
