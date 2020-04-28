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
