										MATLAB
This readme is intended for the Matlab Engine.  

                               README

The files in this directory are:
1. O3Scaled.mat
2. DDC_ver01_1_CAMS.m
3. ddc2.m
O3Scaled.mat has the data to analyse the ozone percentage.
DDC_ver01_1_CAMS.m has the function for implementing the data density-based clustering with a manual radii. 
DDC2.m is the Matlab user script used to call the function with radii=0.1257. The outputs of Results (data with cluster number) and Clusters (array of cluster centre co-ordinates and radii) are produced.

Run:
1.	Import O3scaled.mat into the matlab workspace.
2.	Run and time the ddc2.m script.
3.	Make sure you are in the correct folder path.


										PYTHON
This readme is intended for Python.
README

The files in this directory are:
1. DDC Python.py
DDC Python connects to a matlab shared session and runs the user script ddc2.m

Requirements:
1.	Matlab (version R2014b or later)
2.	Python (version 2.7, 3.6, 3.7)
3.	Install Matlab Engine API for Python (might need administrator privileges):
•	At a Windows operating system prompt — 
cd "matlabroot\extern\engines\python"
python setup.py install
•	At the MATLAB command prompt —
cd (fullfile(matlabroot,'extern','engines','python'))
system('python setup.py install')

•	To install the API in nondefault locations please refer: https://uk.mathworks.com/help/matlab/matlab_external/install-matlab-engine-api-for-python-in-nondefault-locations.html
   
4. Make sure the python interpreter is added to the system environment variable path.

On Windows:
------------
1.	Import O3Scaled.mat to matlab.
2.	Specify session name of matlab: 
            matlab.engine.shareEngine('Matlab2406')
3.	Run DDC Python.py using the IDE or python shell.

Other OS:
------------
To get details about requirements and to run in Linux or Mac OS, please refer to: https://uk.mathworks.com/help/matlab/matlab-engine-for-python.html

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



										JAVA
This readme is intended for Java.  

                               README

The files in this directory are:
1. StartMatlab.java
2. engine.jar in lib folder
3. javabuilder.jar in lib folder

Requirements:
1.	Java Developer’s Kit (JDK™) 7 or 8 (make sure JRE is not a later version than JDK)
2.	Matlab (version R2016B or later)
3.	Add “matlabroot/extern/engines/java/jar/engine.jar” to your Java class path.
4.	Add “matlabroot/bin/<computer-architecture>;” to path in Windows system environment variables.
5.	When using an IDE, like eclipse or netbeans, configure project by adding the given jar files.

On Windows:
------------
   Compile:
 	   javac -classpath matlabroot\extern\engines\java\jar\engine.jar StartMatlab.java
   Run:
       java -classpath .;matlabroot\extern\engines\java\jar\engine.jar StartMatlab
If using an IDE, then just run the file in it and the output will show the cluster results.

Other OS:
------------
To get details about requirements and to run in Linux or Mac OS, please refer to: https://uk.mathworks.com/help/matlab/matlab-engine-api-for-java.html
