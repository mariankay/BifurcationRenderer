//
// Created by Marian Cichy
//

#include "Mesh.h"

namespace mrn {
    Mesh::Mesh() {
        draw_type = GL_TRIANGLES;
    }

    Mesh::~Mesh() {

    }


    void Mesh::addTriangleIndices(uint32 p1, uint32 p2, uint32 p3) {
        this->indices.push_back(p1);
        this->indices.push_back(p2);
        this->indices.push_back(p3);
    }
}
