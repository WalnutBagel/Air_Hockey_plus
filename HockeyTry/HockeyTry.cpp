#include <iostream>
#include <windows.h>
using namespace std;



int main()
{
    int b = 0, c = 7, g = 0, u = 0, k = 0, q = 0, p = 0, l = 0, test = 0, desna = 1, leva = 0, test1 = 0, p11 = 0, p12 = 0, cas = 1, menu = 1, na = 0, igra = 0, im = 0, ti = 0, c1 = 0;
    char a[42][9], player1[100], player2[100];
    //double c1=3;




    while (u < 9)//polje za igro
    {
        b = 0;
        while (b < 39)
        {
            if (u > 0 && u < 8)
            {


                if (b == 0 || b == 38)
                {

                    a[b][u] = 35;
                }
                else if (b > 0 || b < 37)
                {
                    a[b][u] = 32;
                }

            }
            else
            {
                a[b][u] = 35;
            }
            b++;
        }
        u++;
    }
    //gotovo polje za igro
    while (p < 7)//oblika odbojne kocke leva stran
    {
        a[1][p + 1] = 32;
        q = 4;
        a[1][q] = 178;
        p++;
    }
    //koncana oblika desna stran

    p = 0;
    while (p < 7) //oblika odbojne kocke desna stran
    {
        a[37][p + 1] = 32;
        l = 4;
        a[37][1] = 178;
        p++;
    }
    //koncana oblika kocke desna stran



    p = 0;
    while (p < 7) //glavno delovanje
    {
        //system ("cls");


        if (na == 1)//navodila
        {
            system("cls");
            cout << "HOW TO CONTROL PLAYER1:" << endl;
            cout << "W,S" << endl;
            cout << "HOW TO CONTROL PLAYER2:" << endl;
            cout << "---->BACK" << endl;
            Sleep(200);
            if (GetAsyncKeyState(0x0D) && na == 1)
            {
                Sleep(200);
                na = 0;
                menu = l;
            }
            //system (cls);
        }
        if (menu == 1)
        {
            system("cls");
            cout << "Menu" << endl;
            if (GetAsyncKeyState(0x26))
            {
                Sleep(200);
                ti--;
            }
            if (GetAsyncKeyState(0x28))
            {
                ti++;
                Sleep(200);
            }
            if (ti > 3)
            {
                ti = 3;
            }
            if (ti < 0)
                ti = 3;
        }
        if (ti < 0)
        {
            ti = 0;
        }
        if (ti == 0)
        {
            cout << endl;
            cout << "-->PLAY" << endl;
        }

        if (ti == 1)
        {
            cout << endl;
            cout << "-->Instructions" << endl;
        }
        else
        {
            cout << endl;
            cout << "Instructions" << endl;
        }
        if (ti == 2)
        {
            cout << endl;
            cout << "-->RESET Status" << endl;
        }
        else
        {
            cout << endl;
            cout << "RESET Status" << endl;



            if (GetAsyncKeyState(0x0d) && ti == 0)
            {
                igra = 1;
                menu = 0;
                na = 0;
                system("cls");
            }
            if (GetAsyncKeyState(0x0d) && ti == 1)
            {
                igra = 0;
                menu = 0;
                na = 1;
                system("cls");
            }
            if (GetAsyncKeyState(0x0d) && ti == 2)
            {
                a[c][h] = 32;
                if (c > 2)
                {
                    a[c - 1][h] = 32;
                }
                p11 = 0;
                p12 = 0;
                cas = 1;
                menu = 0;
                igra = 1;
                na = 0;
                im = 1;
                c1 = 30;
                c = 17;
                h = 5;
                //system ("cls");
            }
            if (GetAsyncKeyState(0x0d) && ti == 3)
            {
                p = 7;
                menu = 0;
            }





            //system ("cls");
        }




        if (igra == 1 && im == 0)
        {
            cout << "enter name 1 player";
            cin >> player1;
            cout << "enter name 2 player";
            cin >> player2;
            im = 1;
            system("cls");
        }


        if (igra == 1)
        {


            k = c - 2;
            system("cls");
            cout << "ANOTHER  PONG" << endl;
            cout << endl;
            g = 0;
            if (GetAsyncKeyState(0x53))
            {
                q++;
                if (q > 7)
                {
                    q = 7;
                    a[1][q] = 178;
                    a[1][q - 1] = 32;
                }


                if (q < 8)
                {
                    a[1][q] = 178;
                    a[1][q - 1] = 32;
                }
            }
            if (GetAsyncKeyState(0x57))
            {
                q--;
                if (q < 1)
                {
                    q = 1;
                    a[1][q] = 178;
                    a[1][q + 1] = 32;
                }
                if (q > 0)
                {
                    a[1][q] = 178;
                    a[1][q + 1] = 32;
                }
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                l++;
                if (l > 7)
                {
                    l = 7;
                    a[37][1] = 178;
                    a[37][l - 1] = 32;
                }


                if (l < 8)
                {
                    a[37][l] = 178;
                    a[37][l - 1] = 32;
                }
                l = 8;
                a[37][1] = 178;
                a[37][l - 1] = 32;
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            l--;
            if (l < 1)
            {
                l = 1;
                a[37][1] = 178;
                a[37][l + 1] = 32;
            }
            if (l > 0)
            {
                a[37][1] = 178;
                a[37][l + 1] = 32;
            }
        }


        if (cas == 1)
        {
            c1 = c1 - 2;
        }
        if (c1 == 0)
        {
            cas = 0;


            if (c < 3)
            {
                if (h == q)
                {
                    if (test1 == 2)
                    {
                        test = 2;
                    }
                    if (test1 == 1)
                    {
                        test = 1;
                    }
                    c++;
                    k++;
                    desna = 1;
                    leva = 0;
                }
                else if (q != h)
                {
                    p12++;
                    a[c][h] = 32;
                    desna = 1;
                    leva = 0;
                    h = 4;
                    c = 14;
                    cas = 1;
                    c1 = 20;


                }
            }


            if (c > 36)
            {
                if (l == h)
                {
                    if (test == 2)
                    {
                        test1 = 2;
                    }
                    if (test == 1)
                    {
                        test1 = 1;
                    }
                    c--;
                    k--;
                    desna = 0;
                    leva = 1;
                }

                else if (h != 1)
                {
                    a[c - 1][h] = 32;
                    p11++;
                    h = 4;
                    c = 17;
                    leva = 1;
                    desna = 0;
                    cas = 1;
                    c1 = 20;
                }


            }


            if (desna == 1)
            {
                test1 = 0;


                if (h == 1 && c > 37 || h == 1 && c < 37)
                {
                    test = 1;
                }
                if (c < 35 && h == 7 || test == 2)
                {
                    test = 2;
                }
                else
                {
                    test = 1;
                }




                if (test == 2)
                {


                    k = c - 2;
                    if (h == 7)
                    {
                        a[c - 1][h] = 32;

                        h--;
                    }
                    if (k == 5 || k == 11 || k == 15 || k == 20 || k == 24 || k == 28 || k == 33)
                    {
                        h--;


                    }


                    a[c][h] = 254;
                    if (c > 2 && c < 37)
                    {
                        a[c - 1][h] = 32;
                    }
                    if (h < 7 && c>2 && c < 37)
                    {
                        a[c - 1][h + 1] = 32;
                    }

                }



                if (test == 1)
                {


                    if (k == 5 || k == 11 || k == 15 || k == 20 || k == 24 || k == 28 || k == 33)
                    {
                        h++;


                    }
                    if (h == 1)
                    {
                        h++;
                    }


                    a[c][h] = 254;

                    if (c > 2 && c < 37)
                    {
                        a[c - 1][h] = 32;
                    }
                    if (h > 1 && c > 2 && c < 37)
                    {
                        a[c - 1][h - 1] = 32;
                    }


                }
                k++;
                c++;
            }




            if (leva = 1)
            {

                k--;
                c--;
                if (h < 7 && c == 36)
                {
                    test1 = 1;
                }
                if (h == 7 && c > 1)
                {
                    test1 = 2;
                    a[c + 2][h - 1] = 32;
                }
                if (h == 1 && c > 3 || test1 == 1)
                {
                    test1 = 1;
                }
                else
                {
                    test = 2;
                }
            }
            if (test1 == 1)
            {
                if (h == 1)
                {
                    h++;
                }
                if (k == 5 || k == 11 || k == 15 || k == 20 || k == 24 || k == 28 || k == 33)
                {
                    h++;
                }
                a[c][h] = 254;
                if (c < 35 && c>1)
                {
                    a[c + 1][h] = 32;
                }
                if (h < 7 && c < 36 && c>1)
                {
                    a[c + 1][h - 1] = 32;
                }
            }
            if (test1 == 2)
            {
                if (h == 7)
                {
                    h--;
                }
                if (k == 5 || k == 11 || k == 15 || k == 20 || k == 24 || k == 28 || k == 33)
                {
                    h--;

                }


                a[c][h] = 254;
                if (c < 36)
                {
                    a[c + 1][h] = 32;
                }
                if (h < 7 && c < 36)
                {
                    a[c + 1][h + 1] = 32;
                }



            }



        }



    }
    u = 0;
    b = 0;

    while (u < 10)
    {
        b = 0;
        while (b < 39)
        {
            if (u < 9)
            {
                b = 0;
                while (b < 39)
                {
                    if (u < 9)
                    {
                        cout << a[b][u];
                    }
                    if (u == 9 && b == 38)
                    {
                        cout << "points player1(" << player1 << "):" << p11 << " points player1(" << player1 << "):" << p12 <<;
                            cout << endl;
                        cout << "ball" << lenght:c"<<c<<", height : h"<<h<<", p11"s heigt of the game pad: q"<<q<<endl;
                            cout << reset time : "<<c1<<endl;
                            cout << "###############################################################################endl";
                            cout << "ball" << lenght : c"<<c<<", height : h"<<h<<", p11"s heigt of the game pad: q"<<q<<endl;
                            cout << "reset time:" << c1 << endl;
                        cout << "##############################################################################endl";
                            cout << endl;
                        cout << "PRESS ESC to escape to menu" << endl;
                    }
                    b++;
                }
                u++;
                cout << endl;
            }
            Sleep(50);


        }
        if (GetAsyncKeyState(0x1B))
        {
            Sleep(200);
            menu = 1;
            igra = 0;
            na = 0;
            im = 1;
            ti = 5;
        }
    }



    system("pause");
}