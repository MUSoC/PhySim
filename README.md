# PhySim
## Project Details: 

Creating a Physics Simulator using OpenGL.

### MUSoC Proposal link: https://drive.google.com/file/d/0B58WlDabcUEZWkg1OUE3YzhnNW8/view


# Running The Project:
There are two basic ways to build and run the project:

## 1. Using Qt:

	--> Open the Simulator.pro file directly (if the extension is associated via Qt) 
		or load the project via Qt first.
	--> Click on the Hammer icon (or use Ctrl+B) to build the project.
	--> Now use the Run icon (or Ctrl+R) to run the project.

## 2. Using Terminal:

	For running via terminal, the first step would be to create a MakeFile
	
	--> Move into the directory containing the file simulator.cpp
	--> While in this directory, a Qt project can be created by the command:
		$ qmake -project

	This creates a file called Simulator.pro and includes the file simulator.cpp in it.

	--> Now run qmake on the project file to create a platform specific MakeFile by the following command:

		$qmake test.pro

	This would create a MakeFile in the particular directory.

	Now the program can be compiled by using the command:
		$ make

	Execution of the program

		After running the previous command, an executable file by the name of "Simulator" in the directory.
		To run it, use the following command.

		$ ./Simulator 