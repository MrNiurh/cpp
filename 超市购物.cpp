#include<iostream>

float sum_3997xy=0;//总金额
char a_3997xy;//用于用户回答，终止程序
int b_3997xy;//用于商品类型输入
int i_3997xy=0;//用于数组递增
float c_3997xy;//用于数量输入
char name[100][20];
float price[100];
float total[100];
void Name(char name[100][20]);//商品名
void Price(float price[100]);//单价
void Total(float total[100]);//部分总价

using namespace std;
int TYPE0_3997xy(int b_3997xy);//商品大类的选择
int TYPE1_3997xy(char a_3997xy, int b_3997xy,  float c_3997xy,int &i_3997xy);//生活用品类商品选择
int TYPE2_3997xy(char a_3997xy, int b_3997xy,  float c_3997xy,int &i_3997xy);//食品类商品选择
int TYPE3_3997xy(char a_3997xy, int b_3997xy,  float c_3997xy,int &i_3997xy);//饮料类商品选择

int main()
{
    cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"* *                                                       * *"<<endl;
    cout<<"*                      欢迎光临                             *"<<endl;
    cout<<"* *                                                       * *"<<endl;
    cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    for(i_3997xy; i_3997xy<100; i_3997xy++) //赋予数组初值
    {
        name[i_3997xy][20]='0';
        price[i_3997xy]=0;
        total[i_3997xy]=0;
    }


    for( ; ; )//大循环
    {
        switch(TYPE0_3997xy(b_3997xy))
        {
        case 1:
            TYPE1_3997xy( a_3997xy,b_3997xy,c_3997xy,i_3997xy);
            break;
        case 2:
            TYPE2_3997xy( a_3997xy,b_3997xy,c_3997xy,i_3997xy);
            break;
        case 3:
            TYPE3_3997xy( a_3997xy,b_3997xy,c_3997xy,i_3997xy);
            break;
        default :
            break;
        }

        cout<<"是否继续购买？Y/N :";
        cin>>a_3997xy;
        if(a_3997xy=='y' || a_3997xy=='Y')
            continue;
        else
            break;
    }
    cout<<"商品名\t"<<"价格\t"<<endl;
    for(i_3997xy=0; name[i_3997xy][20]!='0'; i_3997xy++)
    {
        cout<<name[i_3997xy]<<"\t"<<total[i_3997xy]<<endl;
        sum_3997xy=sum_3997xy+total[i_3997xy];
    }

    cout<<"总金额："<<sum_3997xy<<endl;


    return 0;
}

int TYPE0_3997xy(int b_3997xy)
{

    cout<<"请选择商品类型："<<endl;
    cout<<"1:生活用品"<<endl;
    cout<<"2:食品"<<endl;
    cout<<"3:饮料"<<endl;

    cin>>b_3997xy;
    return b_3997xy;
}

int TYPE1_3997xy(char a_3997xy, int b_3997xy,  float c_3997xy,int &i_3997xy)
{
    for( ; ; )
    {
        cout<<"商品\t"<<"\t单价"<<endl;
        cout<<"1:洗发露\t"<<"22.4"<<endl;
        cout<<"2:牙膏\t"<<"\t9"<<endl;
        cout<<"3:抽纸\t"<<"\t6.6"<<endl;
        cout<<"4:香皂\t"<<"\t4.5"<<endl;
        cout<<"请选择商品:";
        cin>>b_3997xy;

        if(b_3997xy==1)
        {
            name[i_3997xy][20]='洗发露';
            price[i_3997xy]=22.4;
        }
        if(b_3997xy==2)
        {
            name[i_3997xy][20]='牙膏';
            price[i_3997xy]=9;
        }
        if(b_3997xy==3)
        {
            name[i_3997xy][20]='抽纸';
            price[i_3997xy]=6.6;
        }
        if(b_3997xy==4)
        {
            name[i_3997xy][20]='香皂';
            price[i_3997xy]=4.5;
        }

        cout<<"请输入数量：";
        cin>>c_3997xy;
        total[i_3997xy]=price[i_3997xy]*c_3997xy;
        i_3997xy++;

        cout<<"是否继续购买生活用品？Y/N";
        cin>>a_3997xy;
        if(a_3997xy=='y' || a_3997xy=='Y')
            continue;
        else
            break;
    }
}

int TYPE2_3997xy(char a_3997xy, int b_3997xy,  float c_3997xy,int &i_3997xy)
{
    for( ; ; )
    {
        cout<<"商品\t"<<"\t单价"<<endl;
        cout<<"1:益达\t"<<"\t10"<<endl;
        cout<<"2:可比克"<<"\t7.5"<<endl;
        cout<<"3:奥利奥"<<"\t7"<<endl;
        cout<<"4:泡面\t"<<"\t5"<<endl;
        cout<<"请选择商品:";
        cin>>b_3997xy;

        if(b_3997xy==1)
        {
            name[i_3997xy][20]='益达';
            price[i_3997xy]=10;
        }
        if(b_3997xy==2)
        {
            name[i_3997xy][20]='可比克';
            price[i_3997xy]=7.5;
        }
        if(b_3997xy==3)
        {
            name[i_3997xy][20]='奥利奥';
            price[i_3997xy]=7;
        }
        if(b_3997xy==4)
        {
            name[i_3997xy][20]='泡面';
            price[i_3997xy]=5;
        }

        cout<<"请输入数量：";
        cin>>c_3997xy;
        total[i_3997xy]=price[i_3997xy]*c_3997xy;
        i_3997xy++;

        cout<<"是否继续购买生活用品？Y/N";
        cin>>a_3997xy;
        if(a_3997xy=='y' || a_3997xy=='Y')
            continue;
        else
            break;
    }
}

int TYPE3_3997xy(char a_3997xy, int b_3997xy,  float c_3997xy,int &i_3997xy)
{
    for( ; ; )
    {
        cout<<"商品\t"<<"\t单价"<<endl;
        cout<<"1:可乐\t"<<"\t2.5"<<endl;
        cout<<"2:脉动\t"<<"\t4"<<endl;
        cout<<"3:牛奶\t"<<"\t3"<<endl;
        cout<<"4:矿泉水\t"<<"1.5"<<endl;
        cout<<"请选择商品:";
        cin>>b_3997xy;

        if(b_3997xy==1)
        {
            name[i_3997xy][20]='可乐';
            price[i_3997xy]=2.5;
        }
        if(b_3997xy==2)
        {
            name[i_3997xy][20]='脉动';
            price[i_3997xy]=4;
        }
        if(b_3997xy==3)
        {
            name[i_3997xy][20]='牛奶';
            price[i_3997xy]=3;
        }
        if(b_3997xy==4)
        {
            name[i_3997xy][20]='矿泉水';
            price[i_3997xy]=1.5;
        }

        cout<<"请输入数量：";
        cin>>c_3997xy;
        total[i_3997xy]=price[i_3997xy]*c_3997xy;
        i_3997xy++;

        cout<<"是否继续购买生活用品？Y/N";
        cin>>a_3997xy;
        if(a_3997xy=='y' || a_3997xy=='Y')
            continue;
        else
            break;
    }
}
