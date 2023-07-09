#include "include/glm_vec3.h"
#include <iostream>

inline std::ostream &operator<<(std::ostream &os, glm::vec3 const &v) {
    return os << v.x << ' ' << v.y << ' ' << v.z;
}

void glm_test() {
    glm::vec3 v(1, 2, 3);
    v += 1;
    std::cout << v << std::endl;
}
