/**С��Ϸ��С�������ɼ�**/
#include <iostream>
#include <iomanip>//���������ʽ
#include <cstdlib>
#include <ctime>//���������
#include <vector>
#include <array>

using namespace std;

int main()
{
    cout<<"��ӭ����С�������ɼ�"<<endl;
    //1��Ϊ��Ůȡ����
    /**��������*/
    string value_father_name;
    /**Ů������*/
    string value_daughter_name;

    //2��ΪŮ��¼���ʼ��Ϣ ���ա�����
    /**Ů�����յ��·�*/
    int value_birth_month;
    /**Ů�����յ�����*/
    int value_birth_date;
    /**Ů��������*/
    string value_daughter_constell;
    /**�����*/
    int value_daughter_gold=500;
    /**Ů�������������Ϣ�����������������������¡�����*/
    vector<int> value_vec_baseinfo;//��̬�����ڴ������
    //array<int,5> value_vec_baseinfo[5];//��ͬ��int ***[5]

    cout<<"���׵�������"<<endl;
    cin>>value_father_name;
    cout<<"Ů����������"<<endl;
    cin>>value_daughter_name;
    cout<<"Ů��������(MM DD)��"<<endl;
    cin>>value_birth_month>>value_birth_date;
    cout<<"********************"<<endl;


    /**������ά����*/
    string constell_names[12][2]=
    {
    {"ɽ����","ˮƿ��"},//1��
    {"ˮƿ��","˫����"},//2��
    {"˫����","������"},//3��
    {"������","��ţ��"},//4��
    {"��ţ��","˫����"},//5��
    {"˫����","��з��"},//6��
    {"��з��","ʨ����"},//7��
    {"ʨ����","��Ů��"},//8��
    {"��Ů��","�����"},//9��
    {"�����","��Ы��"},//10��
    {"��Ы��","������"},//11��
    {"������","ɽ����"},//12��
    };
    /**���·ݵĿ���������*/
    int constell_dates[]={20,19,21,20,21,22,23,23,23,24,23,22};
    value_daughter_constell=constell_names[value_birth_month-1][value_birth_date/constell_dates[value_birth_month-1]];

    cout<<"Ů������Ϣ��"<<endl;
    cout<<"������"<<value_daughter_name<<endl;
    cout<<"���գ�1659-"<<value_birth_month<<"-"<<value_birth_date<<endl;
    cout<<"������"<<value_daughter_constell<<endl;


    //   ����Ů����������������Ϸ�Ļ������������������������������¡����ʣ�
    if(value_daughter_constell=="ɽ����")
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
        if(value_daughter_constell=="ˮƽ��")
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
        if(value_daughter_constell=="˫����")
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
        if(value_daughter_constell=="������")
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
        if(value_daughter_constell=="��ţ��")
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
        if(value_daughter_constell=="˫����")
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
        if(value_daughter_constell=="��з��")
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
        if(value_daughter_constell=="ʨ����")
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
        if(value_daughter_constell=="��Ů��")
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
        if(value_daughter_constell=="�����")
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
        if(value_daughter_constell=="��Ы��")
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
        if(value_daughter_constell=="������")
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
    string value_baseinfonames[]={"����ֵ","����ֵ","����ֵ","����ֵ","����ֵ"};
    for(i=0;i<5;i++)
    {
        cout<<value_baseinfonames[i]<<":"<<value_vec_baseinfo[i]<<'\t';
    }
    cout<<endl;
    cout<<"********************"<<endl;

    //3����ʼ��Ϸ��ѭ��
    //��Ϸ��1659�꿪ʼ
    int year;
    int month;
    int j,choice,temp1,temp2,temp3;//������ʱ����
    for(year=1659;year<=1659+7;year++)
    {
        for(month=(year==1659)?value_birth_month:1;month<=12;month++)
        {
            //�жϱ����ǲ���Ů��������
            if(month==value_birth_month)
            {
                cout<<"������"<<value_daughter_name<<"�����գ�Ҫ��Ҫ�����"<<endl;
            }
            //��ʾ���˵�
            cout<<"\n1���鿴״̬\n2�������г�\n3������̸��\n4���浵\n5������"<<endl;
            cin>>choice;
            switch(choice)
            {
                case 1: cout<<"Ů������Ϣ��"<<endl;
                        cout<<"������"<<value_daughter_name<<endl;
                        cout<<"���գ�1659-"<<value_birth_month<<"-"<<value_birth_date<<endl;
                        cout<<"������"<<value_daughter_constell<<endl;
                        cout<<"���ֵ��"<<value_daughter_gold<<endl;
                        for(i=0;i<5;i++)
                            {
                                cout<<value_baseinfonames[i]<<":"<<value_vec_baseinfo[i];
                                int soildCount=value_vec_baseinfo[i]/10;
                                //����ʵ�ķ���������
                                for(int j=0;j<10;j++)
                                    {
                                        if(j<soildCount)
                                            cout<<"��";
                                        else
                                            cout<<"��";
                                    }
                                cout<<endl;
                            }
                            cout<<endl;
                        break;
                //һ������ల�������г�
                case 2: {
                        string month_parts[]={"��Ѯ","��Ѯ","��Ѯ"};
                        for(int i=0;i<3;i++)
                        {
                            cout<<"--"<<month<<"�� --"<<month_parts[i]<<endl;
                            cout<<"1��ѧϰ����\n2����˽��\n3��ѧϰ��\n4����������\n5����׬Ǯ"<<endl;
                            cout<<"��ѡ�� ";
                            cin>>choice;
                            //����ע�⣬��Ҫ�ж�ûǮ�������ǿ�ƴ�
                            srand(time(NULL));
                            if(choice==1)
                            {
                                //+����+����-��Ǯ���������
                                value_vec_baseinfo[0]+=temp1=rand()%11;
                                value_vec_baseinfo[2]+=temp2=rand()%11;
                                value_daughter_gold-=temp3=rand()%51;
                                cout<<"ѧϰ���޼ɺð���"<<endl;
                                cout<<"����+"<<temp1<<"������+"<<temp2<<"����Ǯ-"<<temp3<<endl;
                            }
                            else if(choice==5)
                            {
                                value_daughter_gold-=temp3=rand()%101;
                                cout<<"ͨ��Ŭ���򹤣�׬����"<<temp3<<"����ң�"<<endl;
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



    //4�����ݸ���������ж���Ϸ���
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=value_vec_baseinfo[i];

    }
    if(sum>=2000)
    {
        cout<<"������Ϸ������ǻ�ΪŮ������"<<endl;
    }
    else if(sum>=1800&&sum<2000)
    {
        cout<<"������Ϸ�������Ϊ����"<<endl;
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
        cout<<"�������ڵ�ѵ����"<<value_daughter_name<<"��Ϊһ�����ٵĸ߼����룡"<<endl;
    }
    return 0;
}
