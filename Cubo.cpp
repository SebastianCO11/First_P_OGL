#include "Cubo.h"

Cubo::Cubo() {}

void Cubo::DibujarCubo(float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(45, 0, 0, 1);
    glutSolidCube(0.5);
    glPopMatrix();
}
