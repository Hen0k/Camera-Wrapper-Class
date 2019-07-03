#include "./cameraWrapper.cpp"

int main()
{
	// Create the Singleton instance with defaul cam and 400X400 dimentions
	Singleton *Sing = Sing->Instance(0, 1000, 1000);
	
	// hold the return value from the openCam function 
	// inside a VideoCapture class variable
	VideoCapture c = Sing->openCam();
	
	for(int i=0;i<100;i++)
	{
		imshow("edges", Sing->readFrame(c));
		if(waitKey(30) >= 0) break;
	}
	Sing->closeCam(c);
	return 0;
}