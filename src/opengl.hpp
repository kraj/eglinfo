/*

eglinfo EGL information utility

Copyright (c) 2013 Carlos Rafael Giani

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

   1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.

   3. This notice may not be removed or altered from any source
   distribution.

*/


#ifndef EGLINFO_OPENGL_HPP
#define EGLINFO_OPENGL_HPP


#include <config.h>


#include <EGL/egl.h>


// Prefer ES2 header over ES1
#if defined(WITH_GLES2)

#include <GLES2/gl2.h>
#if defined(WITH_GL2EXT_H)
#include <GLES2/gl2ext.h>
#endif

#elif defined(WITH_GLES1)

#include <GLES/gl.h>
#if defined(WITH_GLEXT_H)
#include <GLES/glext.h>
#endif

#elif defined(WITH_OPENGL)
#include <GL/gl.h>
#endif


#endif

