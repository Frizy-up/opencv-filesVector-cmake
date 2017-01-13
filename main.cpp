#include <iostream>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/contrib/contrib.hpp>

/**********************************
#include <sstream>
#include <fstream>
#include <string>
***********************************/

using namespace std;


int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    
    string dir_path = "/home/frizy/data/KITTI/KITTI/JPEGImages/";

    cv::Directory dir;
    vector<string> fileNames = dir.GetListFiles(dir_path,".jpg",false);

    for( vector<string>::iterator it=fileNames.begin(); it!=fileNames.end(); ++it)
    {
        cout <<*(it) <<endl;
    }


    /*=======================================================================
     //                         file >> out
    int apResult(string fileName)
    {
        ifstream in(fileName.c_str());
        string line;

        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
    //            cout << line << endl;

                string w,x,y,z;

                std::stringstream word(line);
                word >> w;
                word >> x;
                word >> y;
                word >> z;
                easy.push_back(x);
                moderate.push_back(y);
                hard.push_back(z);

    //            std::cout << "w: " << w << std::endl;
    //            std::cout << "x: " << x << std::endl;
    //            std::cout << "y: " << y << std::endl;
    //            std::cout << "z: " << z << std::endl;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
            return -1;
        }

        in.close();

        double ap_easy, ap_moderate, ap_hard;

        for(int i=0; i<easy.size(); i+=4)
        {
            ap_easy += atof( easy.at(i).c_str() );
            ap_moderate += atof( moderate.at(i).c_str() );
            ap_hard += atof( hard.at(i).c_str() );
        }
        ap_easy = ap_easy/11.0;
        ap_moderate = ap_moderate/11.0;
        ap_hard = ap_hard / 11.0;

        std::cout << "easy: " << ap_easy << std::endl
                  << "moderate: " <<ap_moderate <<std::endl
                  << "hard: " <<ap_hard <<std::endl;

        FILE *fp = fopen((fileName + "_result").c_str(),"w");
        fprintf(fp,"%f %f %f\n",ap_easy,ap_moderate,ap_hard);
        fclose(fp);

        return 0;
    }

    =======================================================================*/
    
    return 0;
}
