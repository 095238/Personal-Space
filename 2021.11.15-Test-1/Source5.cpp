#include<iostream>;

using namespace std;

int main(int argc, char* argv[])
{
  
    int M = 0;
    int N = 0;

    int a[10], b[10];

    cin >> N >> M;
  
    for (int f = 0; f < N; ++f) 
       {
           cin >> a[f];
       }
   
    for (int g = 0; g < M; ++g) 
        {
            cin >> b[g];
        }
        
        for (int i = 0; i < N; ++i) 
        {
            for (int j = 0; j < M; ++j) 
            {
                if (a[i] == b[j]) 
                {
                    cout << b[j] << endl;
                }
            }
        }
     
	return EXIT_SUCCESS;
}