// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2015 Qianyi Zhou <Qianyi.Zhou@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// ----------------------------------------------------------------------------

#include <Core/Core.h>

void PrintHelp()
{
	using namespace three;
	PrintInfo("Usage :\n");
	PrintInfo("    > TestTriangleMesh [--help] [--switch] [--int i] [--double d] [--string str]\n");
}

int main(int argc, char *argv[])
{
	using namespace three;
	if (argc == 1 || ProgramOptionExists(argc, argv, "--help")) {
		PrintHelp();
		return 1;
	}

	PrintInfo("Switch is %s.\n", 
			ProgramOptionExists(argc, argv, "--switch") ? "ON" : "OFF");
	PrintInfo("Int is %d\n", GetProgramOptionAsInt(argc, argv, "--int"));
	PrintInfo("Double is %.10f\n", 
			GetProgramOptionAsDouble(argc, argv, "--double"));
	PrintInfo("String is %s\n", 
			GetProgramOptionAsString(argc, argv, "--string").c_str());
	return 1;
}