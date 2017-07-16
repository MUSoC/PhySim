# PhySim
## Project Details: 

It is a Qt created GUI project that consists of different simulations of simple shapes (5, for now), made via OpenGL.
The user can select the desired option from the interface. 

# Running The Project:
There are two basic ways to build and run the project:

## 1. Using Qt:

	--> Open the PhySim.pro file directly (if the extension is associated via Qt) 
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

		After running the previous command, an executable file by the name of "PhySim" in the directory.
		To run it, use the following command.

		$ ./PhySim 


## Building and compilation (Ubuntu):
		the animation_builds folder contains the code for the different animations in addition to the Build executables. If you wish to do it yourself, you can do so by using running the following in the terminal:
				$ g++ filename.cpp -o outputname -lGL -lGLU -lglut

		You can refer to the following for additional help:
				http://goanna.cs.rmit.edu.au/~gl/teaching/Interactive3D/2012/compiling.html

## Before running the project:
		Make sure to update the location of the build executable for all the animations under mainwindow.cpp by editing the following code, or it could cause the program to not run properly:

			void MainWindow::on_pushButton_clicked()
				{
				    QString file = "Insert location of executable here";
				    QProcess::startDetached(file);
				}


