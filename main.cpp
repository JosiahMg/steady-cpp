#include "glm_vec3.h"
#include "fmt_format.h"
#include <Eigen/Dense>
#include <json

void eigen_print() {
    Eigen::MatrixXf m1(2, 3);
    m1 << 1, 3, 3, 5, 6, 7;
    std::cout << m1 << std::endl;
}


int main() {

    glm_test();
    fmt_format();
    eigen_print();
    return 0;
}
