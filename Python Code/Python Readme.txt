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

