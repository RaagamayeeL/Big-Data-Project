									C++
This readme is intended for C++.  

                               README

The files in this directory are:
1. DDC.cpp
2. DDC.exe

Requirements:
1.	Compiler that supports C++11 (I used Visual Studio 2019. Supported Compilers: https://www.mathworks.com/support/requirements/supported-compilers.html)
2.	Matlab (version R2016B or later)
3.	In visual studio, create project and add “C:\Program Files\MATLAB\_<ver>_\extern\include;” directory to additional include directories.
4.	Add “C:\Program Files\MATLAB\_<ver>_\extern\lib\win64\microsoft;” to additional library directories, under linker.
5.	Add path =“ C:\Program Files\MATLAB\_<ver>_\extern\bin\win64;” to debugging under configuration properties.
6.	Add “libMatlabEngine.lib” and “libMatlabDataArray.lib” to additional dependencies under linker input.
7.	Add “C:\Program Files\MATLAB\_<ver>_\extern\bin\win64;” to path in Windows system environment variables.

On Windows:
------------
  Compile:
          mex -setup -client engine C++
          mex -v -client engine DDC.cpp
   Run:
      An executable with the filename will be created in the same folder. Run the executable DDC.exe, that gets created.

Other OS:
------------
To get details about requirements and to run in Linux or Mac OS, please refer to: https://uk.mathworks.com/help/matlab/calling-matlab-engine-from-cpp-programs.html






