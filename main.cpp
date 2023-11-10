// |----------------------------------|
// |      AUTORES DO PROJETO:         |
// |----------------------------------|
// | - MARCO VINICIUS DA COSTA BUSATO |
// | - FELYPE MOLINARI                |
// | - LAURA FERRARI HECKMANN         |
// |----------------------------------|

#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declara��o de vari�veis (valida��o de CPF).
    long long CPF;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9; // N�meros individualizados do CPF do eleitor.
    bool volteAoInicio = true; // Vari�vel de controle.

    // Declara��o de vari�veis de contagem (finaliza��o da vota��o).
    int contEleitores = 0;

    int votoGov;
    int contGov1 = 0;
    int contGov2 = 0;
    int contGov3 = 0;
    int contGovBranco = 0;
    int contGovNulo = 0;


    int votoPres;
    int contPres1 = 0;
    int contPres2 = 0;
    int contPres3 = 0;
    int contPresBranco = 0;
    int contPresNulo = 0;

    cout <<

        " ______________________________________________________________________________________________ \n"
        "|     ___              _    _                  _____  _        _  _                        _   |\n"
        "|    |_  |            | |  (_)                |  ___|| |      (_)| |                      | |  |\n"
        "|      | | _   _  ___ | |_  _   ___   __ _    | |__  | |  ___  _ | |_   ___   _ __   __ _ | |  |\n"
        "|      | || | | |/ __|| __|| | / __| / _` |   |  __| | | / _ \\| || __| / _ \\ | '__| / _` || |  |\n"
        "|  /\\__/ /| |_| |\\__ \\| |_ | || (__ | (_| |   | |___ | ||  __/| || |_ | (_) || |   | (_| || |  |\n"
        "|  \\____/  \\__,_||___/ \\__||_| \\___| \\__,_|   \\____/ |_| \\___||_| \\__| \\___/ |_|    \\__,_||_|  |\n"
        "|______________________________________________________________________________________________|\n"

        << endl;

    // Do...while loop para controle de repeti��o do c�digo.
    do {
        cout << "Eleitor, insira seu CPF (apenas n�meros) ou 99999999999 (onze noves) para encerrar a vota��o. \n" << endl;
        cin >> CPF;
        cout << "" << endl;

        // Finaliza��o da vota��o
        if (CPF == 99999999999) {

            float totalGov = contGov1 + contGov2 + contGov3; // Total de votos para governador.
            if (totalGov == 0) { totalGov = 1; } // Controle para impedir divis�o por zero nos votos v�lidos.

            float totalPres = contPres1 + contPres2 + contPres3; // Total de votos para presidente.
            if (totalPres == 0) { totalPres = 1; } // Controle para impedir divis�o por zero nos votos v�lidos.

            // Votos v�lidos.
            float validosGov1 = (contGov1 * 100) / totalGov;
            float validosGov2 = (contGov2 * 100) / totalGov;
            float validosGov3 = (contGov3 * 100) / totalGov;

            float validosPres1 = (contPres1 * 100) / totalPres;
            float validosPres2 = (contPres2 * 100) / totalPres;
            float validosPres3 = (contPres3 * 100) / totalPres;

            // Desempate por idade.
            int idadeGov1 = 70;
            int idadeGov2 = 48;
            int idadeGov3 = 64;

            int idadePres1 = 70;
            int idadePres2 = 48;
            int idadePres3 = 64;

            // Candidatos ao segundo turno.
            string segTurnGov1;
            string segTurnGov2;

            string segTurnPres1;
            string segTurnPres2;

            system("CLS");
            cout << "------------------------------------------------------------------------------------------------ \n" << endl;
            cout << "VOTA��O FINALIZADA. \n" << endl;
            cout << "Total de eleitores: " << contEleitores << "\n" << endl;

            cout << "------------------------------------------------------------------------------------------------ \n" << endl;

            cout << "Total de votos para GOVERNADOR: \n" << endl;
            cout << "Jorge da Silva (20): " << contGov1 << " VOTOS (" << validosGov1 << "% dos votos v�lidos)" << endl;
            cout << "Caio C�sar Moreira (34): " << contGov2 << " VOTOS (" << validosGov2 << "% dos votos v�lidos)" << endl;
            cout << "Luana Hernandez (74): " << contGov3 << " VOTOS (" << validosGov3 << "% dos votos v�lidos)" << endl;
            cout << "Total de votos nulos: " << contGovNulo << " VOTOS" << endl;
            cout << "Total de votos brancos: " << contGovBranco << " VOTOS \n" << endl;

            cout << "------------------------------------------------------------------------------------------------ \n" << endl;

            cout << "Total de votos para PRESIDENTE: \n" << endl;
            cout << "Renato Junior (20): " << contPres1 << " VOTOS (" << validosPres1 << "% dos votos v�lidos)" << endl;
            cout << "Agenor Brasil (34): " << contPres2 << " VOTOS (" << validosPres2 << "% dos votos v�lidos)" << endl;
            cout << "Ednaldo Pereira (74): " << contPres3 << " VOTOS (" << validosPres3 << "% dos votos v�lidos)" << endl;
            cout << "Total de votos nulos: " << contPresNulo << " VOTOS" << endl;
            cout << "Total de votos brancos: " << contPresBranco << " VOTOS \n" << endl;

            cout << "------------------------------------------------------------------------------------------------ \n" << endl;

            // Condi��es para o primeiro turno (qualquer candidato com mais de 50% dos votos v�lidos).
            if (validosGov1 > 50 || validosGov2 > 50 || validosGov3 > 50) {
                string govEleito;

                cout << "RESULTADO - GOVERNADOR: \n" << endl;
                cout << "N�o haver� segundo turno - Candidato ELEITO: \n" << endl;

                if (validosGov1 > 50) { govEleito = "Jorge da Silva (20)"; }
                if (validosGov2 > 50) { govEleito = "Caio C�sar Moreira (34)"; }
                if (validosGov3 > 50) { govEleito = "Luana Hernandez (74)"; }

                cout << govEleito << endl;
                cout << " " << endl;
                cout << "------------------------------------------------------------------------------------------------ \n" << endl;
            }

            // Condi��es para o segundo turno (todos os candidatos com 50% ou menos de votos v�lidos).
            if (validosGov1 <= 50 && validosGov2 <= 50 && validosGov3 <= 50) {

                // Situa��o caso s� haja votos brancos e/ou nulos.
                if (validosGov1 == 0 && validosGov2 == 0 && validosGov3 == 0) {
                    cout << "RESULTADO - GOVERNADOR: \n" << endl;
                    cout << "Vota��o inconclusiva - N�o h� votos v�lidos. \n" << endl;
                    cout << "------------------------------------------------------------------------------------------------ \n" << endl;
                }

                // Segundo turno propriamente dito.
                else {
                    cout << "RESULTADO - GOVERNADOR: \n" << endl;
                    cout << "Haver� segundo turno - Os candidatos a GOVERNADOR que concorrer�o s�o: \n" << endl;

                    // Situa��o caso todos tenham a mesma quantidade de votos (valida��o por idade).
                    if (validosGov1 == validosGov2 && validosGov1 == validosGov3) {

                        if (idadeGov1 > idadeGov2 && idadeGov1 > idadeGov3) {
                            segTurnGov1 = "Jorge da Silva (20)";
                            if (idadeGov2 > idadeGov3) {
                                segTurnGov2 = "Caio C�sar Moreira (34)";
                            }
                            else {
                                segTurnGov2 = "Luana Hernandez (74)";
                            }
                        }

                        if (idadeGov2 > idadeGov1 && idadeGov2 > idadeGov3) {
                            segTurnGov1 = "Caio C�sar Moreira (34)";
                            if (idadeGov1 > idadeGov3) {
                                segTurnGov2 = "Jorge da Silva (20)";
                            }
                            else {
                                segTurnGov2 = "Luana Hernandez (74)";
                            }
                        }

                        if (idadeGov3 > idadeGov1 && idadeGov3 > idadeGov2) {
                            segTurnGov1 = "Luana Hernandez (74)";
                            if (idadeGov1 > idadeGov2) {
                                segTurnGov2 = "Jorge da Silva (20)";
                            }
                            else {
                                segTurnGov2 = "Caio C�sar Moreira (34)";
                            }
                        }
                    }

                    // Situa��o caso dois candidatos tenham a mesma quantidade de votos (maior que o terceiro).
                    if (validosGov1 == validosGov2 && validosGov1 > validosGov3) {

                        segTurnGov1 = "Jorge da Silva (20)";
                        segTurnGov2 = "Caio C�sar Moreira (34)";
                    }

                    if (validosGov1 == validosGov3 && validosGov1 > validosGov2) {

                        segTurnGov1 = "Jorge da Silva (20)";
                        segTurnGov2 = "Luana Hernandez (74)";
                    }

                    if (validosGov2 == validosGov3 && validosGov2 > validosGov1) {

                        segTurnGov1 = "Caio C�sar Moreira (34)";
                        segTurnGov2 = "Luana Hernandez (74)";
                    }

                    // Situa��o em que um candidato possui mais voto que os demais.
                    if (validosGov1 > validosGov2 && validosGov1 > validosGov3) {
                        segTurnGov1 = "Jorge da Silva (20)";

                        if (validosGov2 == validosGov3) {
                            if (idadeGov2 > idadeGov3) {
                                segTurnGov2 = "Caio C�sar Moreira (34)";
                            }
                            else {
                                segTurnGov2 = "Luana Hernandez (74)";
                            }
                        }

                        if (validosGov2 > validosGov3) {
                            segTurnGov2 = "Caio C�sar Moreira (34)";
                        }

                        if (validosGov3 > validosGov2) {
                            segTurnGov2 = "Luana Hernandez (74)";
                        }
                    }

                    if (validosGov2 > validosGov1 && validosGov2 > validosGov3) {
                        segTurnGov1 = "Caio C�sar Moreira (34)";

                        if (validosGov1 == validosGov3) {
                            if (idadeGov1 > idadeGov3) {
                                segTurnGov2 = "Jorge da Silva (20)";
                            }
                            else {
                                segTurnGov2 = "Luana Hernandez (74)";
                            }
                        }

                        if (validosGov1 > validosGov3) {
                            segTurnGov2 = "Jorge da Silva (20)";
                        }

                        if (validosGov3 > validosGov1) {
                            segTurnGov2 = "Luana Hernandez (74)";
                        }
                    }

                    if (validosGov3 > validosGov1 && validosGov3 > validosGov2) {
                        segTurnGov1 = "Luana Hernandez (74)";

                        if (validosGov1 == validosGov2) {
                            if (idadeGov1 > idadeGov2) {
                                segTurnGov2 = "Jorge da Silva (20)";
                            }
                            else {
                                segTurnGov2 = "Caio C�sar Moreira (34)";
                            }
                        }

                        if (validosGov1 > validosGov2) {
                            segTurnGov2 = "Jorge da Silva (20)";
                        }

                        if (validosGov2 > validosGov1) {
                            segTurnGov2 = "Caio C�sar Moreira (34)";
                        }
                    }

                    cout << segTurnGov1 << endl;
                    cout << segTurnGov2 << endl;
                    cout << " " << endl;
                    cout << "------------------------------------------------------------------------------------------------ \n" << endl;
                }
            }

            // Mesma valida��o, por�m agora para presidente.
            if (validosPres1 > 50 || validosPres2 > 50 || validosPres3 > 50) {
                string presEleito;

                cout << "RESULTADO - PRESIDENTE: \n" << endl;
                cout << "N�o haver� segundo turno - Candidato ELEITO: \n" << endl;

                if (validosPres1 > 50) { presEleito = "Renato Junior (20)"; }
                if (validosPres2 > 50) { presEleito = "Agenor Brasil (34)"; }
                if (validosPres3 > 50) { presEleito = "Ednaldo Pereira (74)"; }

                cout << presEleito << "\n" << endl;
                cout << "------------------------------------------------------------------------------------------------ \n" << endl;
            }

            if (validosPres1 <= 50 && validosPres2 <= 50 && validosPres3 <= 50) {

                if (validosPres1 == 0 && validosPres2 == 0 && validosPres3 == 0) {
                    cout << "RESULTADO - PRESIDENTE: \n" << endl;
                    cout << "Vota��o inconclusiva - N�o h� votos v�lidos. \n" << endl;
                    cout << "------------------------------------------------------------------------------------------------ \n" << endl;
                }

                else {
                    cout << "RESULTADO - PRESIDENTE: \n" << endl;
                    cout << "Haver� segundo turno - Os candidatos que concorrer�o a PRESIDENTE s�o: \n" << endl;

                    if (validosPres1 == validosPres2 && validosPres1 == validosPres3) {

                        if (idadePres1 > idadePres2 && idadePres1 > idadePres3) {
                            segTurnPres1 = "Renato Junior (20)";
                            if (idadePres2 > idadePres3) {
                                segTurnPres2 = "Agenor Brasil (34)";
                            }
                            else {
                                segTurnPres2 = "Ednaldo Pereira (74)";
                            }
                        }

                        if (idadePres2 > idadePres1 && idadePres2 > idadePres3) {
                            segTurnPres1 = "Agenor Brasil (34)";
                            if (idadePres1 > idadePres3) {
                                segTurnPres2 = "Renato Junior (20)";
                            }
                            else {
                                segTurnPres2 = "Ednaldo Pereira (74)";
                            }
                        }

                        if (idadePres3 > idadePres1 && idadePres3 > idadePres2) {
                            segTurnPres1 = "Ednaldo Pereira (74)";
                            if (idadePres1 > idadePres2) {
                                segTurnPres2 = "Renato Junior (20)";
                            }
                            else {
                                segTurnPres2 = "Agenor Brasil (34)";
                            }
                        }
                    }

                    if (validosPres1 == validosPres2 && validosPres1 > validosPres3) {

                        segTurnPres1 = "Renato Junior (20)";
                        segTurnPres2 = "Agenor Brasil (34)";
                    }

                    if (validosPres1 == validosPres3 && validosPres1 > validosPres2) {

                        segTurnPres1 = "Renato Junior (20)";
                        segTurnPres2 = "Ednaldo Pereira (74)";
                    }

                    if (validosPres2 == validosPres3 && validosPres2 > validosPres1) {

                        segTurnPres1 = "Agenor Brasil (34)";
                        segTurnPres2 = "Ednaldo Pereira (74)";
                    }

                    if (validosPres1 > validosPres2 && validosPres1 > validosPres3) {
                        segTurnPres1 = "Renato Junior (20)";

                        if (validosPres2 == validosPres3) {
                            if (idadePres2 > idadePres3) {
                                segTurnPres2 = "Agenor Brasil (34)";
                            }
                            else {
                                segTurnPres2 = "Ednaldo Pereira (74)";
                            }
                        }

                        if (validosPres2 > validosPres3) {
                            segTurnPres2 = "Agenor Brasil (34)";
                        }

                        if (validosPres3 > validosPres2) {
                            segTurnPres2 = "Ednaldo Pereira (74)";
                        }
                    }

                    if (validosPres2 > validosPres1 && validosPres2 > validosPres3) {
                        segTurnPres1 = "Agenor Brasil (34)";

                        if (validosPres1 == validosPres3) {
                            if (idadePres1 > idadePres3) {
                                segTurnPres2 = "Renato Junior (20)";
                            }
                            else {
                                segTurnPres2 = "Ednaldo Pereira (74)";
                            }
                        }

                        if (validosPres1 > validosPres3) {
                            segTurnPres2 = "Renato Junior (20)";
                        }

                        if (validosPres3 > validosPres1) {
                            segTurnPres2 = "Ednaldo Pereira (74)";
                        }
                    }

                    if (validosPres3 > validosPres1 && validosPres3 > validosPres2) {
                        segTurnPres1 = "Ednaldo Pereira (74)";

                        if (validosPres1 == validosPres2) {
                            if (idadePres1 > idadePres2) {
                                segTurnPres2 = "Renato Junior (20)";
                            }
                            else {
                                segTurnPres2 = "Agenor Brasil (34)";
                            }
                        }

                        if (validosPres1 > validosPres2) {
                            segTurnPres2 = "Renato Junior (20)";
                        }

                        if (validosPres2 > validosPres1) {
                            segTurnPres2 = "Agenor Brasil (34)";
                        }
                    }

                    cout << segTurnPres1 << endl;
                    cout << segTurnPres2 << endl;
                    cout << " " << endl;
                    cout << "------------------------------------------------------------------------------------------------ \n" << endl;
                }
            }

            cout <<
                " ______________________________________________________________________________________________ \n"
                "|     ___              _    _                  _____  _        _  _                        _   |\n"
                "|    |_  |            | |  (_)                |  ___|| |      (_)| |                      | |  |\n"
                "|      | | _   _  ___ | |_  _   ___   __ _    | |__  | |  ___  _ | |_   ___   _ __   __ _ | |  |\n"
                "|      | || | | |/ __|| __|| | / __| / _` |   |  __| | | / _ \\| || __| / _ \\ | '__| / _` || |  |\n"
                "|  /\\__/ /| |_| |\\__ \\| |_ | || (__ | (_| |   | |___ | ||  __/| || |_ | (_) || |   | (_| || |  |\n"
                "|  \\____/  \\__,_||___/ \\__||_| \\___| \\__,_|   \\____/ |_| \\___||_| \\__| \\___/ |_|    \\__,_||_|  |\n"
                "|______________________________________________________________________________________________|\n"


                << endl;
            cout << "________________________________________________________________________________________________" << endl;

            return 0;
        }

        int digito1; // Primeiro d�gito verificador gerado atrav�s da valida��o matem�tica.
        int digito2; // Segundo d�gito verificador gerado atrav�s da valida��o matem�tica.
        int digVerif = CPF % 100; // D�gito verificador do CPF.
        int digVerif1 = digVerif / 10; // Primeiro d�gito verificador do CPF inserido pelo eleitor.
        int digVerif2 = digVerif % 10; // Segundo d�gito verificador do CPF inserido pelo eleitor.
        long long novoCPF = CPF / 100; // CPF sem o d�gito verificador.

        // C�lculos para separa��o dos d�gitos do CPF.
        n1 = (novoCPF % 1000000000) / 100000000;
        n2 = (novoCPF % 100000000) / 10000000;
        n3 = (novoCPF % 10000000) / 1000000;
        n4 = (novoCPF % 1000000) / 100000;
        n5 = (novoCPF % 100000) / 10000;
        n6 = (novoCPF % 10000) / 1000;
        n7 = (novoCPF % 1000) / 100;
        n8 = (novoCPF % 100) / 10;
        n9 = novoCPF % 10;

        // C�lculo para valida��o do primeiro d�gito verificador do CPF.
        int somaDig1 = (n1 * 10) + (n2 * 9) + (n3 * 8) + (n4 * 7) + (n5 * 6) + (n6 * 5) + (n7 * 4) + (n8 * 3) + (n9 * 2); // Primeira parte do calculo do primeiro d�gito verificador.
        int restoDig1 = somaDig1 % 11;

        if (restoDig1 < 2) {
            digito1 = 0;
        }

        else {
            digito1 = 11 - restoDig1;
        }

        // C�lculo para valida��o do segundo d�gito verificador do CPF.
        int somaDig2 = (n1 * 11) + (n2 * 10) + (n3 * 9) + (n4 * 8) + (n5 * 7) + (n6 * 6) + (n7 * 5) + (n8 * 4) + (n9 * 3) + (digito1 * 2);
        int restoDig2 = somaDig2 % 11;

        if (restoDig2 < 2) {
            digito2 = 0;
        }

        else {
            digito2 = 11 - restoDig2;
        }

        // In�cio da vota��o (caso os d�gitos verificadores inseridos no CPF correspondam ao resultado da verifica��o matem�tica).
        if (digito1 == digVerif1 && digito2 == digVerif2) {

            system("CLS");

            cout << "VOTA��O INICIADA. \n" << endl;

            cout << "Escolha um candidato a GOVERNADOR: \n" << endl;
            cout << "Jorge da Silva (20)" << endl;
            cout << "Caio C�sar Moreira (34)" << endl;
            cout << "Luana Hernandez (74)" << endl;
            cout << "BRANCO (0)" << endl;
            cout << "NULO (qualquer n�mero n�o cadastrado) \n" << endl;
            cin >> votoGov;

            // Contagem dos votos (candidatos escolhidos).
            if (votoGov == 20) { contGov1++; }
            else if (votoGov == 34) { contGov2++; }
            else if (votoGov == 74) { contGov3++; }
            else if (votoGov == 0) { contGovBranco++; }
            else { contGovNulo++; }

            system("CLS");

            cout << "Escolha um candidato a PRESIDENTE: \n" << endl;
            cout << "Renato Junior (20)" << endl;
            cout << "Agenor Brasil (34)" << endl;
            cout << "Ednaldo Pereira (74)" << endl;
            cout << "BRANCO (0)" << endl;
            cout << "NULO (qualquer n�mero n�o cadastrado) \n" << endl;
            cin >> votoPres;

            // Contagem dos votos (candidatos escolhidos).
            if (votoPres == 20) { contPres1++; }
            else if (votoPres == 34) { contPres2++; }
            else if (votoPres == 74) { contPres3++; }
            else if (votoPres == 0) { contPresBranco++; }
            else { contPresNulo++; }

            // Contagem de eleitores.
            contEleitores++;

            system("CLS");
        }

        // Condi��o caso o CPF seja inv�lido.
        else {
            cout << "CPF inv�lido, insira novamente: \n" << endl;
        }

    } while (volteAoInicio == true);
}
