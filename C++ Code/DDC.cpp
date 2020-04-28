//#include "MatlabDataArray.hpp"
#include "MatlabEngine.hpp"   //include engine for matlab external interface
#include <iostream>
#include <chrono>             //include library for calculating executin time.
#include <stdlib.h>
using namespace std;
/*
  Function Name: findConnect()
  According to the matlab external interface documentation, use the function to find matlab shred session and connect to it.
  Need to include MatlabDataArray.hpp for this funcation.
  Output: If session is found and coonnected to or not.
*/
/*void findConnect() {
	using namespace matlab::engine;

	// Find and connect to shared MATLAB session
	std::unique_ptr<MATLABEngine> matlabPtr;
	std::vector<String> names = findMATLAB();
	std::vector<String>::iterator it;
	it = std::find(names.begin(), names.end(), u"myMatlab2406");
	if (it != names.end()) {
		matlabPtr = connectMATLAB(*it);
	}

	// Determine if engine connected
	if (matlabPtr) {
		matlab::data::ArrayFactory factory;
		matlab::data::CharArray arg = factory.createCharArray("-release");
		matlab::data::CharArray version = matlabPtr->feval(u"version", arg);
		std::cout << "Connected to: " << version.toAscii() << std::endl;
	}
	else {
		std::cout << "MatlabEngine not found" << std::endl;
	}
}*/
/*
Funcation Name: callF()
Connects to matlab shared session by name and runs the matlab acript containing the ddc algorithm function call.
Outputs: Resulting clusters of dimanesions 49 million x 2.
*/
void callF() {
	using namespace matlab::engine; 
	// Connect to shared MATLAB session by name
	std::unique_ptr<MATLABEngine> matlabPtr = connectMATLAB(u"Matlab2406");
	//call findConnect() if there is need to find session and connect
    //findConnect();
	//nargout can be used to deal with outputs from the script
	//matlabPtr->eval(u"run('ddc2.m'),nargout=0");
	//Run the matlab script
	matlabPtr->eval(u"run('ddc2.m')");
}
int main() {
	auto start = chrono::steady_clock::now();
	
	callF();   //Call Funcation to connect and run matlab script

	auto end = chrono::steady_clock::now();

	cout << "Elapsed time in nanoseconds : "
		<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
		<< " ns" << endl;

	cout << "Elapsed time in microseconds : "
		<< chrono::duration_cast<chrono::microseconds>(end - start).count()
		<< " µs" << endl;

	cout << "Elapsed time in milliseconds : "
		<< chrono::duration_cast<chrono::milliseconds>(end - start).count()
		<< " ms" << endl;

	cout << "Elapsed time in seconds : "
		<< chrono::duration_cast<chrono::seconds>(end - start).count()
		<< " sec";
	return 0;
}
