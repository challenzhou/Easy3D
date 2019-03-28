/*
*	Copyright (C) 2015 by Liangliang Nan (liangliang.nan@gmail.com)
*	https://3d.bk.tudelft.nl/liangliang/
*
*	This file is part of Easy3D: software for processing and rendering
*   meshes and point clouds.
*
*	Easy3D is free software; you can redistribute it and/or modify
*	it under the terms of the GNU General Public License Version 3
*	as published by the Free Software Foundation.
*
*	Easy3D is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
*	GNU General Public License for more details.
*
*	You should have received a copy of the GNU General Public License
*	along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "real_camera.h"


// This example shows how to
//		- render a model from the view point given its (intrinsic and
//        extrinsic) camera parameters. The camera parameters were
//        recovered using computer vison techniques (i.e., SfM in this example).



int main(int /*argc*/, char** /*argv*/) {
    // Create the viewer.
    RealCamera viewer("Tutorial_12_RealCamera");

	// Run the viewer
    viewer.run();

    return EXIT_SUCCESS;
}

