

    #include <bits/stdc++.h>
    using namespace std;
    int main(void){
        int M,N;
        cin >> M >> N;
        int result;
        if(M % 2 != 0 && N % 2 != 0)
            result = (M/2)*N+(N/2);
        else
            result = max((N/2)*M,(M/2)*N);
        cout << result << endl;
     
    }