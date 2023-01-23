#include "point.h"
#include "point_inter.h"
#include "courbe.h"


//Importation de OpenGL
#include "OpenGL/glm/glm/vec3.hpp" // glm::vec3
#include "OpenGL/glm/glm/vec4.hpp" // glm::vec4
#include "OpenGL/glm/glm/mat4x4.hpp" // glm::mat4
#include "OpenGL/glm/glm/ext/matrix_transform.hpp" // glm::translate, glm::rotate, glm::scale
#include "OpenGL/glm/glm/ext/matrix_clip_space.hpp" // glm::perspective
#include "OpenGL/glm/glm/ext/scalar_constants.hpp" // glm::pi


//#include "OpenGL/GLFW/from_github/glfw/include/GLFW/glfw3.h"

#include "windows.h"
#include "GL/glu.h"

int main(){
    //Definition des points qui portent les 2 segments
    Point a(0, 0);
    Point b(1, 2);
    Point c(3, 2);
    Point d(4, 0);

    Point_inter point_inter(a, b, c, d);

    Courbe courbe_1(30, point_inter, a, d);

};

