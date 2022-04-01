#include"header.h"

using namespace std;


//
//int main()
//{
//    char ch;
//    int vowelcnt;
//    while (cin>>ch)
//    {
//        switch (ch)
//        {
//        case 'a': case 'e': case 'i': case 'o': case 'u': case 'A' : case 'E' : case 'I': case 'O': case 'U': 
//            vowelcnt++;
//            break;
//        }
//    }
//    cout<<vowelcnt<<endl; 
//}



//int main()
//{
//    string str;
//    getline(cin,str);
//    char* ch = &str[0];
//    int ff_cnter = 0,fl_cnter = 0,fi_cnter = 0;
//        for (int i = 0; i < str.size(); i++)
//        {
//            switch (*ch)
//            {
//            case 'f':
//                switch (*(ch+1))
//                {
//                case 'f':
//                    ff_cnter++;
//                    break;
//                case 'l':
//                    fl_cnter++;
//                    break;
//                case 'i':
//                    fi_cnter++;
//                    break;
//                }
//                break;
//            }
//            ch++;
//        }
//    cout<<"No of times ff has occured: "<<ff_cnter<<"\nfl: "<<fl_cnter<<"\nfi: "<<fi_cnter<<endl;
//}

//
//int main()
//{
//    int i = 0;
//    do
//    {
//        i++;
//        cout<<i<<endl;
//    } while (i<10);
//
//    cout<<"\n";
//    cout.flush();
//
//    i=0;
//    while (i<10)
//    {
//        i++;
//        cout<<i<<endl;
//    }
//    
//    cout.flush();
//}



//int main()
//{
//    int i = 10;
//   
//    while (i<10)
//    {
//        cout<<"i  is less than 10";
//    }
//    
//
//    do
//    {
//        cout<<"i is less than 10";
//    } while (i<10);
//}

//int main()
//{
//    int i = 0;
//    adder:
//        i++;
//        cout<<i<<endl;
//        goto minuser;
//
//    minuser:
//        i--;
//        cout<<i<<endl;
//        goto adder;
//}


//int main()
//{
//    double i;
//    cin>>i;
//    cin.sync();
//    if (i<0 || i != (int) i )            
//        throw runtime_error("We need positive ints only");
//    else
//        cout<<i;
//}



//int diagonalDifference(vector<vector<int>> arr) 
//{
//    int prim_trace = 0,sec_trace = 0;
//    int mat_order = sqrt(arr.size());
//    for(int i = 0;i<mat_order;i++)
//    {
//        prim_trace+=arr[i][i];
//        sec_trace+=arr[i][mat_order-i];
//    }
//    return abs(prim_trace - sec_trace);
//}


//unsigned long fact (int x)
//{
//    if (x==1 || x==0)
//        return 1;
//    else
//        return(fact(x-1)*x); 
//}
//
//
//
//
//int main()
//{
//    int x;
//    cin>>x;
//    cout<<fact(x);
//
//}

//int fib(int x)
//{
//    if (x <= 0 || x!=(int)x)
//        throw runtime_error("Enter a valid positive integer");
//    
//    switch (x)
//    {
//    case 1:
//        return 0;
//        break;
//    
//    case 2:
//        return 1;
//        break;
//    }
//    return(fib(x-1) + fib(x-2));
//}
//
//int main()
//{
//    int x;
//    cin>>x;
//    cin.sync();
//    cout<<x<<"th "<<"Fibbonaci no is :"<<fib(x)<<endl;
//
//
//}


//int absolut(int x)
//{
//    switch (x>0)
//    {
//    case true:
//        return x;
//        break;
//    
//    case false:
//        return -x;
//        break;
//    }
//}
//
//
//int main()
//{
//     int x;
//     cin>>x;
//     cin.sync();
//     cout<<"The absolut val is :"<<absolut(x);
//     
//}

//void Valchanger(int* x)
//{
//    *x = *(x+1);
//}
//
//int main()
//{
//    int valour[4] = {1,2,3,4};
//    
//    Valchanger(valour);
//    for (int i = 0; i < 4; i++)
//    {
//        cout<<*valour;
//    }
//    
//    
//}


/*
    #   i=1     i is the no of # to print;
   ##   i=2     j is the no of spaces to print i.e n-i;
  ###   i=3     print "\n" after each iter of i;   
 ####   i=4
#####   i=5=n





*/
//int main()
//{
//    int n;
//    cin>>n;
//    for (int i = 1; i < n+1; i++)
//    {
//        for(int j = 0; j<n-i;j++)
//        cout<<" ";
//        for(int k = 0; k<i;k++)
//        cout<<"#";
//        cout<<"\n";
//    }
//    
//}


//int main()
//{
//    vector<int> a={1,2,3};
//    vector<int> b={2,5,4};
//    for (int i = 0; i < 3; i++)
//    {
//        cout<<abs(a[i]-b[i])<<" ";
//    }
//}

//int main()
//{
//    vector<int> ranked = {100,100,50,40,40,20,10};
//    vector<int> ranked_discrete;
//
//    int currval;
//    int ranked_size = ranked.size();
// 
//    for(int i = 0; i < ranked_size;i++)
//    {
//        int currval = ranked[i];
//        int rep_counter = 0;
//        ranked_discrete.push_back(currval);    
//
//        for(int j = i + 1 ; j<ranked_size;j++)
//        {    
//        while (currval == ranked[j])
//        {
//            rep_counter++;
//            j++;
//        }
//        
//        if (rep_counter == 0)
//        {
//        break;
//        }
//
//        else
//        {
//        i+=(rep_counter);
//        break;    
//        }
//        }
//    }
//
//int number = 120 ;
//int number_index;
//for (int i = 0; i < ranked_discrete.size(); i++)
//{
//    if (number < ranked_discrete[i] )
//    {
//        number_index = i + 1;
//    }
//
//}
//
//cout<<number_index + 1<<endl;
//
//}

//int main() 
//{
//    int n = 7;
//    vector<int> ar = {1,2,1,2,1,3,2};
//    vector<int> ar_counts;
//    int currval;
//    sort(ar.begin(),ar.end());
//    for(int i = 0; i < ar.size();i++)
//    {
//        int instcounter = 0;
//        currval = ar[i];
//        for(int j = i+1; j < ar.size();j++)
//        {
//            if(currval == ar[j])
//            {
//                instcounter++;
//            }
//        }
//        i += instcounter;
//        instcounter+=1;
//        ar_counts.push_back(instcounter);
//    }
//    int total_pairs = 0;
//    for(int i = 0;i<ar_counts.size();i++)
//        total_pairs+=(ar_counts[i]/2);
//    return total_pairs;
//    cout<<total_pairs;
//}

//int main()
//{
//    int x;
//    cin>>x;
//    cout<<"The factor of "<<x<<"is "<<fib(x);
//}
void swap_pointer (int*x,int*y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_ref(int& x,int& y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}


void reset(int& x)
{
    x = 0;
}

int main()
{
    int a = 1,b = 2;
    
    int &ref1 = a;
    int &ref2 = b;
    
    cout<<a<<" "<<b<<"\n";
    swap_ref(ref1,ref2);
    cout<<a<<" "<<b;

    return 0;

}




















































































































































































































































