
// Program: demo2.cpp
// Purpose: Demonstrate use of bmplip for handling
//          bmp colored and grayscale images
//          Program load a gray image and store in another file
// Author:  Mohammad El-Ramly
// Date:    30 March 2018
// Version: 1.0
#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include "bmplib.cpp"
using namespace std;
unsigned char image[SIZE][SIZE];
void loadImage ();
void saveImage ();
void Menu_Display();
void Black_And_White_Filter_1();
void Invert_Filter();
void Merge_Filter();

int main()
{
    loadImage();
    Menu_Display();
    ///___________enter_Choose_From_Display__________________
char ChOose;
cin>>ChOose;
switch(ChOose)
{
case '1':
    Black_And_White_Filter_1();
    break;
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
case 's':
    break;

}

  ///doSomethingForImage();
  ///saveImage();

  return 0;
}
//_________________________________________
void loadImage () {
   char imageFileName[100];
   cout<<"Ahlan Ya User Ya Habibi !!"<<endl;
   // Get gray scale image file name
   cout << "Enter the source image file name: ";
   cin >> imageFileName;
   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   readGSBMP(imageFileName, image);



}
//_________________________________________
void saveImage () {
   char imageFileName[100];

   // Get gray scale image target file name
   cout << "Enter the target image file name: ";
   cin >> imageFileName;

   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   writeGSBMP(imageFileName, image);
}
//_________________________________________
void Black_And_White_Filter_1() {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
        if(image[i][j]>0&&image[i][j]<127)
            image[i][j]=1;
    }
  }
}
//___________________________________
void Invert_Filter(){


}
//____________________________________
void Merge_Filter(){


}
//_____________________________________
void Menu_Display(){
cout<<"Please select a filter to apply or 0 to exit:"<<endl
<<"1- Black & White Filter"<<endl
<<"2- Invert Filter"<<endl
<<"3- Merge Filter"<<endl
<<"4- Flip Image"<<endl
<<"5- Darken and Lighten Image"<<endl
<<"6- Rotate Image"<<endl
<<"7- Detect Image Edges"<<endl
<<"8- Enlarge Image"<<endl
<<"9- Shrink Image"<<endl
<<"s- Save the image to a file"<<endl;
}













