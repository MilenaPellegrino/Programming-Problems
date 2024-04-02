    #include <bits/stdc++.h>
    using namespace std;
    typedef struct _username {
        string name;
        int i;
    } username;
     
    username agregar_usuario(username usuarios[], long i, string aux){
        long index = i;
        username result;
        result.name = aux;
        while(index >= 0 && usuarios[index].name != aux)
            --index;
        if (index > -1){
            result.i = usuarios[index].i + 1;
        }
        else
            result.i = 0;
        return result;
    }
     
    int main(void){
        long n;
        cin >> n;
        username usuarios[n];
        for(long i = 0; i < n; ++i)
            usuarios[i].i = 0;
        string aux;
        for(long i = 0; i < n ; ++i){
            cin >> aux;
            usuarios[i] = agregar_usuario(usuarios,i,aux);
            if(usuarios[i].i == 0)
                cout << "OK" << endl;
            else
                cout << usuarios[i].name << usuarios[i].i << endl;
        }
    }

