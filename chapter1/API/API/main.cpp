//Program 1-1 ����һ�����α��ʽ
int abc(int a, int b, int c)
{
return a + b * c;
}

//program 1-2 ����һ�������ͱ��ʽ
float adc(float a,float b, float c)
{
    return a + b *c;
}

//program 1-3 ����ģ�庯������һ�����ʽ
template<class T>
T abc(T a,T b, T c)
{
    return a + b * c;
}

//program 1-4 �������ò�������һ�����ʽ
template<classT>
T abc(T& a,T& b,T& c)
{
    return a + b * c;
}

//program 1-5 ���ó������ò�������һ�����ʽ
template<classT>
T abc(const T& a,const T& b,const T& c)
{
    return a + b * c;
}

//program 1-6 program1-5 ��һ����ͨ�õİ汾
template<class Ta,class Tb,class Tc>
Ta abc(const Ta& a,const Tb& b,const Tc& c)
{
    return a + b * c;
}

//program 1-8 �׳�һ������Ϊchar* ���쳣
int abc(int a ,int b,int c)
{
    if(a <= 0 || b <= 0 || c <=0)
        throw "All parameters should be > 0";
    return a + b * c;
}
// program 1-9 ��׽һ������Ϊchar* ���쳣 �����ǻ���program 1-8
int main()
{
    try {cout << abc(2,0,4) << endl}
    catch (char* e)
        {
            cout << "The parameters to abc were 2 , 0 and 4 " << endl;
            cout << "An exception has been thrown " << endl;
            cout << e <<  endl;
            return 1;
        }
}


//program 1-10 Ϊһ����ά�������洢�ռ�
template <class T>
bool make2dArray(T ** &x, int numberOfRows, int numberOfColumns)
{//����һ����ά����
    try {
        //������ָ��
        x = new T * [numberOfRows];

        //Ϊÿһ�з���ռ�
        for (int i = 0 ; i < numberOfRows;i++)
            x[i] = new int [numberOfColumns];
        return true;
    }
    catch (bad_alloc)
    {
        return false;
    }
    }
}


//program 1-11 ����һ����ά���飬û���쳣����

