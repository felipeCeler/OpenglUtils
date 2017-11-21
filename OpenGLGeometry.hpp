/*
 * OpenGLGeometry.hpp
 *
 *  Created on: Nov 21, 2017
 *      Author: felipe
 */

#ifndef OPENGLGEOMETRY_HPP_
#define OPENGLGEOMETRY_HPP_

#include <GL/glew.h>

class OpenGLGeometry
{
        public:
                OpenGLGeometry();
                virtual ~OpenGLGeometry ( );

                // Surface Mesh
                GLuint vertexArray_;
                    GLuint vertexBuffer_vertices_;
                    GLuint vertexBuffer_normals_;
                    GLuint vertexBuffer_colors_;
                /// Draw the mesh as element array to aid filters implementationxzs
                    GLuint vertexBuffer_elemets_;
                GLuint number_of_elements_;

                void resetBuffers();
};

#endif /* OPENGLGEOMETRY_HPP_ */

