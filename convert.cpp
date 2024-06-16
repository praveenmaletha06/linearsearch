// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

// bool linearsearch(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;

//         }

//     }
//     return false;
// }

// int main(){
//     int arr[500];
//     int n;
//     int key;
//     cout<<"enter how many no you want to enter";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//      cout<<"enter the no you want to find";
//      cin>>key;
// if(linearsearch(arr,n,key)==1){
//     cout<<"found";

// }
// else{
//     cout<<"not found";

// }

// }

// int main(){bool linearsearch(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;

//         }

//     }
//     return false;
// }

// int main(){
//     int arr[500];
//     int n;
//     int key;
//     cout<<"enter how many no you want to enter";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//      cout<<"enter the no you want to find";
//      cin>>key;
// if(linearsearch(arr,n,key)==1){
//     cout<<"found";

// }
// else{
//     cout<<"not found";

// }

// }
// int main(){
//   int arr[10]={1,2,3,4,5,6,7};
//   int size=7;
//   int key=10;
//   cin>>key;
//   bool flag=0;

//   for(int i=0;i<7;i++){
//     if(arr[i]==key){
//       flag=1;
//       break;

//     }
//   }

//   if(flag){
//     cout<<"found";

//   }
//   else{
//     cout<<"not found";
//   }
// }

// int main(){
//     int arr[]={0,0,1,0,1,1,1,0,0};
//     int size=9;
//     int count1=0;
//     int count2=0;
//      for(int i=0;i<size;i++){
//       if(arr[i]==0){
//         count1++;
//      }
//      else{
//       count2++;
//      }
//      }
//      cout<<"the no of 0="<<count1<<endl;
//      cout<<"the no of 1="<<count2;

// }

// int main()
// {
//   int arr[500];
//   int n;
//   int p = 0;
//   cin >> n;

//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//   for (int j = 1; j < n; j++)
//   {
//     if (arr[p] < arr[j])
//     {
//       arr[p] = arr[j];
//     }

//     else
//     {
//       arr[p] = arr[p];
//     }
//   }
//     cout << arr[p];

// }

// int main()
// {
//   int arr[500];
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     if (i <= (n - 1 - i))
//     {
//       if (i == (n - 1 - i))
//       {
//         cout << arr[i];
//       }
//       else
//       {
//         cout << arr[i];
//         cout << arr[n - 1 - i];
//       }
//     }
//   }
// }

// swap by using temporary variable store
// int main()
// {
//   int arr[500];
//   int n;
//   cin >> n;
//   int store;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//   int start=0;
//   int end=n-1;

//   while(start!=n){

//     if(start<end){

//     store=arr[start];

//     arr[start]=arr[end];
//     arr[end]=store;
//     cout<<arr[start];
//     start++;
//     end--;
//     }

//     if(start==end){
//       cout<<arr[start];
//       start++;
//       end--;
//     }
//     if(end<start){
//       cout<<arr[start];
//       start++;
//       end--;
//     }
//   }
//   cout<<end;
//   cout<<start;

// }

// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int size=7;

//     int start=0;
//     int end=size-1;

//     while(start<end){
//       swap(arr[start],arr[end]);
//       start++;
//       end--;

//     }
//     for(int i=0;i<size;i++){
//       cout<<arr[i];
//     }
// }

// int main()
// {
//   int arr[500];
//   int n;
//   cin >> n;
//   int store;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//   int start=0;
//   int end=n-1;

//   while(start<end){

//     if(start<end){

//     store=arr[start];

//     arr[start]=arr[end];
//     arr[end]=store;
//     start++;
//     end--;
//     }
//   }

//   for(int i=0;i<n;i++){
//     cout<<arr[i];
//   }
//   cout<<start;
//   cout<<end;

// }

vector<int>unionarrays(vector<int>arr, vector<int>brr){

   int p=0;

  int n = arr.size() + brr.size();

  vector<int>ans(n);

  for (int i = 0; i < arr.size(); i++)
  {
    ans[i] = arr[i];
  }
  for (int i = arr.size(); i < n; i++)
  {
    ans[i] = brr[p];
    p++;
  }
  


  
  return ans;
}





int main()
{

  int n;
  cout<<"enter size of arr arraay";
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }

  int p;
  cout<<"enter the size of brr array";
  cin >> p;

  vector<int> brr(p);

  for (int i = 0; i < brr.size(); i++)
  {
    cin >> brr[i];
  }

  vector<int>pra=unionarrays(arr,brr);


  vector<int>m;
  int count3=0;

  for(int i=0;i<pra.size();i++){
    for(int j=1;j<pra.size();j++){
      if(i<j){
        // if(i==j){
        //   continue;
        // }

        if(pra[i]==pra[j]){

          m.push_back(pra[i]);
          count3++;


        }
        if(count3>0){
          count3=0;
          break;
        }


      }
      


    }
    

  }

  for (int i = 0; i < m.size(); i++)
  {
    cout << m[i] << " ";
  }
  cout<<endl;

  int count=0;
  int count2=0;
  for(int i=0;i<pra.size();i++){
    for(int j=0;j<m.size();j++){
      if(pra[i]==m[j]){
        break;
      }

      else{

          for(int j=0;j<m.size();j++){

            if(pra[i]==m[j]){
              count++;
      
       
            }
       
          }
      
      }

      if (count>0){
        break;
      }


     
      m.push_back(pra[i]);
      break;
     
     
    }
    count=0;
    
  }
  


  for (int i = 0; i < pra.size(); i++)
  {
    cout << pra[i] << " ";
  }

  cout<<endl;


  for (int i = 0; i < m.size(); i++)
  {
    cout << m[i] << " ";
  }
}

