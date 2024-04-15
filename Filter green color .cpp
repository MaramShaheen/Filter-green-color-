

#include<iostream>
#include"Image_Class.h"


using namespace std;
 
 
int main ()
 {

 /* get the name of image from user */
 string Image_Name ;
 cout <<"Please enter the name of image\n" ;
 cin>>Image_Name ;
 
 
 Image image (Image_Name) ;
 
  /*loop to pass in all width and height and change the value of green by multiple to 0.3 */
 for (int i=0 ; i <image.width ;++i)
 {
     for (int j=0 ; j< image.height ;++j) 
     {
     
     image(i, j, 1)-=image(i,j,1)*2.5;

      image(i, j, 2 )-= image(i, j, 2 )*2.6;
      
    
     }
 }
 

 /* Save the new image (new Image) */

 string outputFile_name = "new_image.jpg";
 image.saveImage(outputFile_name );


    return 0;
}