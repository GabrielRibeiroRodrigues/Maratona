 #include <bits/stdc++.h>
            using namespace std;
            int main()
            {
                
                string resposta;
                int alternativaA, alternativaB, alternativaC, alternativaD, alternativaE, contador = 0,qtd;
                while(cin >> qtd && qtd != 0){
                    for(int i = 0; i < qtd; i++){
                        cin >> alternativaA;
                        cin >> alternativaB;
                        cin >> alternativaC;
                        cin >> alternativaD;
                        cin >> alternativaE;
                    contador = 0;
                if (alternativaA <= 127)
                {
                    contador += 1;
                    resposta = "A";
                }
                if (alternativaB <= 127){
                    contador += 1;
                    resposta = "B";
                }
                if (alternativaC <= 127){
                    contador += 1;
                    resposta = "C";
                }
                if (alternativaD <= 127){
                    contador += 1;
                    resposta = "D";
                }
                if (alternativaE <= 127){
                    contador += 1;
                    resposta = "E";
                }
                if (contador != 1 ){
                    cout << "*" << endl;
                }else{
                    cout << resposta << endl;
                }
                }   }
            }