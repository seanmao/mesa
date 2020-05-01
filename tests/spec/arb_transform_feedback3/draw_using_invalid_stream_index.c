/*
 * Copyright © 2013 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#include "piglit-util-gl.h"
#include "xfb3_common.h"

/**
 * @file draw_using_invalid_stream_index.c
 *
 * "The error INVALID_VALUE is generated by DrawTransformFeedbackStream
 *  if <stream> is greater than or equal to the value of MAX_VERTEX_STREAMS."
 */

PIGLIT_GL_TEST_CONFIG_BEGIN

	config.supports_gl_compat_version = 32;
	config.supports_gl_core_version = 32;
	config.khr_no_error_support = PIGLIT_HAS_ERRORS;

PIGLIT_GL_TEST_CONFIG_END

void
piglit_init(int argc, char **argv)
{
	GLuint tfb;
	GLint max_stream;
	bool pass;

	piglit_require_extension("GL_ARB_transform_feedback3");
	piglit_require_extension("GL_ARB_gpu_shader5");

	glGetIntegerv(GL_MAX_VERTEX_STREAMS, &max_stream);
	if (!piglit_check_gl_error(GL_NO_ERROR)) {
		printf("failed to resolve the maximum number of streams\n");
		piglit_report_result(PIGLIT_FAIL);
	}

	glGenTransformFeedbacks(1, &tfb);
	glBindTransformFeedback(GL_TRANSFORM_FEEDBACK, tfb);

	glDrawTransformFeedbackStream(GL_TRIANGLE_STRIP, tfb, max_stream);

	pass = piglit_check_gl_error(GL_INVALID_VALUE);

	glDeleteTransformFeedbacks(1, &tfb);

	piglit_report_result(pass ? PIGLIT_PASS : PIGLIT_FAIL);
}

enum piglit_result
piglit_display(void)
{
	/* Should never be reached */
	return PIGLIT_FAIL;
}