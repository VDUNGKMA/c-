#include <iostream>
using namespace std;
void input_array(int arr[][100],int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout <<"\ninput arr["<<i<<"]["<<j<<"]\n";
            cin >>arr[i][j];
        }
    }
}
void ouput_array(int arr[][100],int row,int column)
{
    cout <<"output array\n";
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout <<arr[i][j]<<"\t";
        }
            cout <<"\n";
    }
}
void all_sum_array(int arr[][100],int row,int column)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            sum+=arr[i][j];
        }
    }
        cout <<"all sum array(row +column) "<<sum<<endl;
}
void one_row_sum_in_array(int arr[][100],int row,int column)
{   
    cout <<"\nsum one row array "<<endl;
    for(int i=0;i<row;i++)
    {   
        int sum=0;
        for(int j=0;j<column;j++)
        {
            sum+=arr[i][j];
        }
            cout <<sum<<endl;
    }
}
void one_column_sum_in_array(int arr[][100],int row,int column)
{   
    cout <<"\nsum one column array "<<endl;
    for(int i=0;i<column;i++)
    {   
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum+=arr[j][i];
        }
            cout <<sum<<"\t";
    }
}
void head_sum_of_duongcheo(int arr[][100],int row,int column)
{
    int sum=0;
    if(row !=column)
    {
        cout <<"no duong cheo in array because maxtrix is not square";
    }
    else 
    {
            for(int i=0;i<row;i++)//đường chéo chính 1
        {
            for(int j=0;j<column;j++)
            {
                if(i==j)
                {
                    sum+=arr[i][j];
                }
            }
        }
            //  for(int i=0;i<row;i++) //đường chéo chính 2
        // {
        //     for(int j=0;j<column;j++)
        //     {
        //         if(i+j==row-1)
        //         {
        //             sum+=arr[i][j];
        //         }
        //     }  
        // } 
        // cout<<sum;
        int i=0,j=column-1;
        while(i<row&&j>=0)
        {
            sum+=arr[i][j];
            i++,j--;
        }
        cout << "sum head duong cheo in array "<<sum;
    } 
}
int main(int argc, char const *argv[])
{
    int arr[100][100],row,column;
    cout <<"input row and column\n";
    cin >>row>>column;
    input_array(arr,row, column);
    ouput_array( arr, row, column);
    all_sum_array(arr,row,column);
    one_row_sum_in_array(arr,row,column);
    one_column_sum_in_array(arr,row,column);
    head_sum_of_duongcheo(arr,row,column);
    return 0;
}
