#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;


class Singleton {
	private:
		static Singleton* _instance;
		int CAM;
		int HEIGHT;
		int WIDTH;
		//namedWindow("edges",1);
		//VideoCapture cap = VideoCapture();

	protected:
		Singleton(int c, int h, int w) {
			this -> CAM = c;
			this -> HEIGHT = h;
			this -> WIDTH = w;
		}
	

	public:
		static Singleton* Instance (int cam=0, int height=400, int width=400)
		{
			if (_instance == 0) 
				_instance = new Singleton(cam, height, width);
			return _instance;
		}

	VideoCapture openCam()
	{
		//cap = this->cap(0);
		VideoCapture cap(0);
		//VideoCapture cap = VideoCapture( this->CAM );
		if(!cap.isOpened()) {
		cout << "Not Working";return -1;}
		else return cap;
	}
	
	Mat readFrame(VideoCapture c)
	{
		Mat original, resized;
	
		c >> original;
		resize( original, resized, Size(this->WIDTH, this->HEIGHT),0, 0, INTER_LINEAR );
		return resized;
	}

	void closeCam( VideoCapture c)
	{
		c.release();
	}
	
	
};



Singleton* Singleton::_instance = 0;
