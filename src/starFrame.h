#ifndef STARFRAME_H
#define STARFRAME_H

#include <GL/glew.h>

#include "program.h"

class StarFrame{
 public:
    void Initialize();
    ~StarFrame();
    void Draw(const Program & program);
 private:
    GLuint vao_;
    GLuint vertex_buffer_;
    GLuint color_buffer_;
};

#endif // STARFRAME_H
