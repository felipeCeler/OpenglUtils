/*
 * OpenGLGeometry.cpp
 *
 *  Created on: Nov 21, 2017
 *      Author: felipe
 */

#include "OpenGLGeometry.hpp"

OpenGLGeometry::OpenGLGeometry ( )
{
        vertexArray_ = 0;
        vertexBuffer_vertices_ = 0;
        vertexBuffer_normals_ = 0;
        vertexBuffer_colors_ = 0;
        /// Draw the mesh as element array to aid filters implementationxzs
        vertexBuffer_elemets_ =  0;
        number_of_elements_ = 0;

}
void OpenGLGeometry::resetBuffers()
{

        if (vertexArray_ != 0)
        {
            if (vertexBuffer_vertices_ != 0)
            {
                glDeleteBuffers(1, &vertexBuffer_vertices_);
                vertexBuffer_vertices_ = 0;
            }

            if (vertexBuffer_normals_ != 0)
            {
                glDeleteBuffers(1, &vertexBuffer_normals_);
                vertexBuffer_normals_ = 0;
            }

            if (vertexBuffer_colors_ != 0)
            {
                glDeleteBuffers(1, &vertexBuffer_colors_);
                vertexBuffer_colors_ = 0;
            }

            if (vertexBuffer_elemets_ != 0)
            {
                glDeleteBuffers(1, &vertexBuffer_elemets_);
                vertexBuffer_elemets_ = 0;
            }

            glDeleteVertexArrays(1, &vertexArray_);
            vertexArray_ = 0;
        }

        number_of_elements_ = 0;
}

OpenGLGeometry::~OpenGLGeometry ( )
{
        this->resetBuffers();
}

