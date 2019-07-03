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

	//public:
	//	static Singleton* Instance(int cam, int height, int width);

	protected:
		Singleton(int c=0, int h=400, int w=400) {
			this -> CAM = c;
			this -> HEIGHT = h;
			this -> WIDTH = w;
		}
	

	public:
		static Singleton* Instance (int cam = 0, int height = 400, int width = 400) {
			if (_instance == 0) {
				_instance = new Singleton(cam, height, width);
			}
		return _instance;
	}
	int p(){
		cout << getCam() << endl;
	}

	int getCam() {
      return this -> HEIGHT;
   }

   // void setData(int data) {
   //    this -> data = data;
   // }
	
	
};



Singleton* Singleton::_instance = 0;

// Singleton* Singleton::Instance () {
// if (_instance == 0) {
// _instance = new Singleton;
// }
// return _instance;
// }

int main()
{
	Singleton *Sing = Sing->Instance(0, 1100, 400);
	Singleton *Sing2 = Sing2->Instance(0, 400, 500); 

	Sing->p();
	
	Sing2->p();
	return 0;
}