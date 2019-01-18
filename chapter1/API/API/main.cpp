//Program 1-1 计算一个整形表达式
int abc(int a, int b, int c)
{
return a + b * c;
}

//program 1-2 计算一个浮点型表达式
float adc(float a,float b, float c)
{
    return a + b *c;
}

//program 1-3 利用模板函数计算一个表达式
template<class T>
T abc(T a,T b, T c)
{
    return a + b * c;
}

//program 1-4 利用引用参数计算一个表达式
template<classT>
T abc(T& a,T& b,T& c)
{
    return a + b * c;
}

//program 1-5 利用常量引用参数计算一个表达式
template<classT>
T abc(const T& a,const T& b,const T& c)
{
    return a + b * c;
}

//program 1-6 program1-5 的一个更通用的版本
template<class Ta,class Tb,class Tc>
Ta abc(const Ta& a,const Tb& b,const Tc& c)
{
    return a + b * c;
}

//program 1-8 抛出一个类型为char* 的异常
int abc(int a ,int b,int c)
{
    if(a <= 0 || b <= 0 || c <=0)
        throw "All parameters should be > 0";
    return a + b * c;
}
// program 1-9 捕捉一个类型为char* 的异常 函数是基于program 1-8
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


//program 1-10 为一个二维数组分配存储空间
template <class T>
bool make2dArray(T ** &x, int numberOfRows, int numberOfColumns)
{//创建一个二维数组
    try {
        //创建行指针
        x = new T * [numberOfRows];

        //为每一行分配空间
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


//program 1-11 创建一个二维数组，没有异常处理

