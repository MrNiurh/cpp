/*
*功能：计算平均分
*
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~"<<endl;
    cout<<"~                                     ~"<<endl;
    cout<<"~                                     ~"<<endl;
    cout<<"~      欢迎使用平均分计算程序         ~"<<endl;
    cout<<"~                                     ~"<<endl;
    cout<<"~           版本：1.0                 ~"<<endl;
    cout<<"~                                @ @  ~"<<endl;
    cout<<"~                                 -   ~"<<endl;
    cout<<"~                                     ~"<<endl;
    cout<<"~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~"<<endl;
    char a;
    cout<< "是否要进行学生平均分的计算 是请输入”Y“ 否请输入”N“" << endl;
    cout<< "请输入：";
    cin>> a;
    while(a != 'Y' && a != 'N')
        {
              cout<< "输入字符非法，请重新输入:";
              cin>> a;
        }
    while(a == 'Y')
 {
    int score;
    int sum=0;
    int frequency=0;
    int average;
    cout<< "输入第" << frequency+1 << "个学生的成绩" << "(输入“-1”时停止运算) ";
    cin>> score;
    while(-1 != score)
    {

    cout<< "输入第" << frequency+2 << "个学生的成绩" << "(输入“-1”时停止运算) ";

        if(score < 0 || score > 100)
            do
        {
            cout<< "输入成绩不合法，不在【0-100】" <<endl;
            cout<< "请重新输入：" ;
            cin>> score;
        }while(score < 0 || score > 100);
        else
        {
            sum = sum + score ;
            frequency = frequency + 1 ;
            cin>> score;while(a != 'Y' && a != 'N');
        }
    }
    average = sum / frequency ;
    cout<< frequency << "个学生的平均分是：" << average << endl ;
    cout<< "是否要继续进行学生平均分的计算 是请输入”Y“ 否请输入”N“" << endl ;
    cout<< "请输入：" ;
    cin>>a;
    while(a != 'Y' && a != 'N')
        {
              cout<< "输入字符非法\n" << "请重新输入:" ;
              cin>>a;
        }
 }


	return 0;
}
