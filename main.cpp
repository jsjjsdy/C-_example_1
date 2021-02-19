/**小游戏：小公主养成记**/
#include <iostream>
#include <iomanip>//控制输出格式
#include <cstdlib>
#include <ctime>//设置随机数
#include <vector>
#include <array>

using namespace std;

int main()
{
    cout<<"欢迎进入小公举养成记"<<endl;
    //1、为父女取名字
    /**父亲姓名*/
    string value_father_name;
    /**女儿姓名*/
    string value_daughter_name;

    //2、为女儿录入初始信息 生日、星座
    /**女儿生日的月份*/
    int value_birth_month;
    /**女儿生日的日期*/
    int value_birth_date;
    /**女儿的星座*/
    string value_daughter_constell;
    /**金币数*/
    int value_daughter_gold=500;
    /**女儿的五项基本信息：体力、智力、魅力、道德、气质*/
    vector<int> value_vec_baseinfo;//动态分配内存的数组
    //array<int,5> value_vec_baseinfo[5];//等同于int ***[5]

    cout<<"父亲的姓名："<<endl;
    cin>>value_father_name;
    cout<<"女儿的姓名："<<endl;
    cin>>value_daughter_name;
    cout<<"女儿的生日(MM DD)："<<endl;
    cin>>value_birth_month>>value_birth_date;
    cout<<"********************"<<endl;


    /**星座二维数组*/
    string constell_names[12][2]=
    {
    {"山羊座","水瓶座"},//1月
    {"水瓶座","双鱼座"},//2月
    {"双鱼座","白羊座"},//3月
    {"白羊座","金牛座"},//4月
    {"金牛座","双子座"},//5月
    {"双子座","巨蟹座"},//6月
    {"巨蟹座","狮子座"},//7月
    {"狮子座","处女座"},//8月
    {"处女座","天秤座"},//9月
    {"天秤座","天蝎座"},//10月
    {"天蝎座","射手座"},//11月
    {"射手座","山羊座"},//12月
    };
    /**各月份的跨星座日期*/
    int constell_dates[]={20,19,21,20,21,22,23,23,23,24,23,22};
    value_daughter_constell=constell_names[value_birth_month-1][value_birth_date/constell_dates[value_birth_month-1]];

    cout<<"女儿的信息："<<endl;
    cout<<"姓名："<<value_daughter_name<<endl;
    cout<<"生日：1659-"<<value_birth_month<<"-"<<value_birth_date<<endl;
    cout<<"星座："<<value_daughter_constell<<endl;


    //   根据女儿的星座，设置游戏的基本参数（体力、智力、魅力、道德、气质）
    if(value_daughter_constell=="山羊座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="水平座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="双鱼座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="白羊座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="金牛座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="双子座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="巨蟹座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="狮子座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="处女座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="天秤座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="天蝎座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }
        if(value_daughter_constell=="射手座")
    {
        value_vec_baseinfo.push_back(80);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(15);
        value_vec_baseinfo.push_back(11);
        value_vec_baseinfo.push_back(21);
//        value_vec_baseinfo[0]=80;
//        value_vec_baseinfo[1]=15;
//        value_vec_baseinfo[2]=15;
//        value_vec_baseinfo[3]=11;
//        value_vec_baseinfo[4]=21;
    }

    int i;
    string value_baseinfonames[]={"体力值","智力值","魅力值","道德值","气质值"};
    for(i=0;i<5;i++)
    {
        cout<<value_baseinfonames[i]<<":"<<value_vec_baseinfo[i]<<'\t';
    }
    cout<<endl;
    cout<<"********************"<<endl;

    //3、开始游戏大循环
    //游戏从1659年开始
    int year;
    int month;
    int j,choice,temp1,temp2,temp3;//定义临时变量
    for(year=1659;year<=1659+7;year++)
    {
        for(month=(year==1659)?value_birth_month:1;month<=12;month++)
        {
            //判断本月是不是女儿的生日
            if(month==value_birth_month)
            {
                cout<<"本月是"<<value_daughter_name<<"的生日，要不要送礼物？"<<endl;
            }
            //显示主菜单
            cout<<"\n1、查看状态\n2、安排行程\n3、亲自谈话\n4、存档\n5、读档"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1: cout<<"女儿的信息："<<endl;
                        cout<<"姓名："<<value_daughter_name<<endl;
                        cout<<"生日：1659-"<<value_birth_month<<"-"<<value_birth_date<<endl;
                        cout<<"星座："<<value_daughter_constell<<endl;
                        cout<<"金币值："<<value_daughter_gold<<endl;
                        for(i=0;i<5;i++)
                            {
                                cout<<value_baseinfonames[i]<<":"<<value_vec_baseinfo[i];
                                int soildCount=value_vec_baseinfo[i]/10;
                                //计算实心方框是数量
                                for(int j=0;j<10;j++)
                                    {
                                        if(j<soildCount)
                                            cout<<"■";
                                        else
                                            cout<<"□";
                                    }
                                cout<<endl;
                            }
                            cout<<endl;
                        break;
                //一个月最多安排三个行程
                case 2: {
                        string month_parts[]={"上旬","中旬","下旬"};
                        for(int i=0;i<3;i++)
                        {
                            cout<<"--"<<month<<"月 --"<<month_parts[i]<<endl;
                            cout<<"1、学习武艺\n2、上私塾\n3、学习礼法\n4、出城修行\n5、打工赚钱"<<endl;
                            cout<<"请选择 ";
                            cin>>choice;
                            //这里注意，需要判断没钱的情况，强制打工
                            srand(time(NULL));
                            if(choice==1)
                            {
                                //+体力+魅力-金钱，随机数字
                                value_vec_baseinfo[0]+=temp1=rand()%11;
                                value_vec_baseinfo[2]+=temp2=rand()%11;
                                value_daughter_gold-=temp3=rand()%51;
                                cout<<"学习张无忌好榜样"<<endl;
                                cout<<"体力+"<<temp1<<"，魅力+"<<temp2<<"，金钱-"<<temp3<<endl;
                            }
                            else if(choice==5)
                            {
                                value_daughter_gold-=temp3=rand()%101;
                                cout<<"通过努力打工，赚到了"<<temp3<<"个金币！"<<endl;
                            }
                        }
                        break;
                        }
                case 3:
                        break;
                case 4:
                        break;
                case 5:
                        break;
                default:
                        break;
            }

        }
    }



    //4、根据各项参数，判定游戏结果
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=value_vec_baseinfo[i];

    }
    if(sum>=2000)
    {
        cout<<"最优游戏结果：登基为女王陛下"<<endl;
    }
    else if(sum>=1800&&sum<2000)
    {
        cout<<"次优游戏结果：成为王妃"<<endl;
    }
    else if(sum>=1200&&sum<1600)
    {
        int maxValue=value_vec_baseinfo[0];
        int maxIndex=0;
        for(int i=1;i<5;i++)
        {
            if(maxValue<value_vec_baseinfo[i])
            {
                maxValue=value_vec_baseinfo[i];
                maxIndex=i;
            }
        }
        if(value_vec_baseinfo[2]>value_vec_baseinfo[4])
        {

        }
        cout<<"经过长期的训练，"<<value_daughter_name<<"成为一名光荣的高级祭祀！"<<endl;
    }
    return 0;
}
