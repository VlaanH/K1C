#include <stdlib.h>
#include <iostream>
#include <cstdlib>



using namespace std;
//VlanH

void sleh()
{
    cout << "-----------------------------------------------" << endl;



}

void x()
{
    cout << "+ Для выхода введите \"777\" +" << endl;
}





void min()
{
     
    
    setlocale(LC_ALL, "ru");

    cout << "+------------------------------------+" << endl;
    cout << "|            Program:K1c V1.3.1      |" << endl;
    cout << "|1 - подсчет стоимости комплектующих |" << endl;
    cout << "|2 - калькулятор доли                |" << endl;
    cout << "|2< -exit                            |" << endl;
    cout << "+------------------------------------+" << endl;

}

void prs()
{
    setlocale(LC_ALL, "ru");
    cout << "Стоимость комплектующих на данный момент: ";


}

int main(int argc,char** argv) 
{



    setlocale(LC_ALL, "ru");
    int a=0;
    int k;
    int ciin=0;
    string S="0";
    int ks;
    int pp = 0;//выхлд для hdd
    int pp2 = 0;//выхлд для ssd
    
    min();
  
   
   
   
   while (ciin==0)
   {
        cin >> S;
        ciin = atoi(S.c_str());
    if (ciin==0)
    {
        cout<<"int Error"<<endl;
    }
    
   }
    a=ciin;ciin=0;S="0";
    
    
    

    while (a < 3)
    {


        switch (a)
        {

        case 2:
            cout << "+----------------+" << endl;
            cout << "|Калькулятор доли|" << endl;
            cout << "+----------------+" << endl;
            
            
            
            double h, b,a;
            cout << "Стоимость сборки: " << endl;
            while (ciin==0)
            {//
                cin >> S;
                ciin = atoi(S.c_str());
                if (ciin==0)
                {
                    cout<<"int Error"<<endl;
                }
            
            }
            b=ciin;ciin=0;S="0";

            cout << "Стоимость сборки НА Avito:  " << endl;
            
            while (ciin==0)
            {//
                cin >> S;
                ciin = atoi(S.c_str());
                if (ciin==0)
                {
                    cout<<"int Error"<<endl;
                }
            
            }
            h=ciin;ciin=0;S="0";
            
            
           

            cout << "Твоя Доля в русиан рубл: " << endl;
             while (ciin==0)
            {//
                cin >> S;
                ciin = atoi(S.c_str());
                if (ciin==0)
                {
                    cout<<"int Error"<<endl;
                }
            
            }
            a=ciin;ciin=0;S="0";

            cout << "Доля: " << a / b * 100 << "%" << endl;

            cout << "Профит: " << (h / b) * a << "р" << endl;


            break;
        case 1:
            cout << "+-------------------------------+" << endl;
            cout << "|Подсчет стоимости комплектующих|" << endl;
            cout << "+-------------------------------+" << endl;
            int cpu, mat, kor, cpufan, ram, bp, gpu;

            const int si1 = 5;
            int arr1[si1]{};
            const int si = 5;
            int arr[si]{};
            int XHDD = 0;//
            int xssd = 0;//
            x();
            cout << "Стоимость процессора: " << endl;
            
            


            while (ciin==0)
            {
                cin >> S;
                ciin = atoi(S.c_str());
                if (ciin==0)
                {
                    cout<<"int Error"<<endl;
                }
            
            }
            cpu=ciin;ciin=0;S="0";


            if (cpu == 777)
            {
                int y, y2;
                cout << "Вы уверены что хотите выйти? ДА(1)/НЕТ(2):";
                while (ciin==0)
                {//
                    cin >> S;
                    ciin = atoi(S.c_str());
                    if (ciin==0)
                    {
                        cout<<"int Error"<<endl;
                    }
                
                }
                y=ciin;ciin=0;S="0";
                
                
                
                if (y == 1)
                {
                    break;
                }
                if (y > 1)
                {

                    cout << "Процессор стоит: " << cpu << " ? ДА(1)/НЕТ(2):";
                        while (ciin==0)
                        {//
                            cin >> S;
                            ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                                cout<<"int Error"<<endl;
                            }
                        
                        }
                        y2=ciin;ciin=0;S="0";
                    
                    
                    if (y2 > 1)
                    {
                        cout << "Стоимость процессора: " << endl;
                        while (ciin==0)
                        {//
                            cin >> S;
                            ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                                cout<<"int Error"<<endl;
                            }
                        
                            }
                            cpu=ciin;ciin=0;S="0";
                        }
                }

            }
            //1
            sleh();
            x();
            prs();
            cout << cpu << endl;
            //1

            cout << "Мать: " << endl;

                 while (ciin==0)
                {//
                    cin >> S;
                     ciin = atoi(S.c_str());
                    if (ciin==0)
                     {
                    cout<<"int Error"<<endl;
     
                      }
                        
                }
              mat=ciin;ciin=0;S="0";

            if (mat == 777)
            {
                int y, y2;
                cout << "Вы уверены что хотите выйти? ДА(1)/НЕТ(2):";
                while (ciin==0)
                {//
                    cin >> S;
                    ciin = atoi(S.c_str());
                    if (ciin==0)
                    {
                        cout<<"int Error"<<endl;
                    }
                
                }
                y=ciin;ciin=0;S="0";
                
                if (y == 1)
                {
                    break;
                }
                if (y > 1)
                {

                    cout << "Мать стоит: " << mat << " ? ДА(1)/НЕТ(2):";
                    
                        while (ciin==0)
                        {//
                            cin >> S;
                            ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                                cout<<"int Error"<<endl;
                            }
                        
                        }
                        y2=ciin;ciin=0;S="0";


                    if (y2 > 1)
                    {
                        cout << "Мать: " << endl;
                    while (ciin==0)
                    {//
                        cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                        
                    }
                     mat=ciin;ciin=0;S="0";

                    }
                }
            }
            //2
            sleh();
            x();
            prs();
            cout << cpu + mat << endl;
            //2

            cout << "Видеокарта: " << endl;
            
            
            
            
            
                    while (ciin==0)
                    {//
                        cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                        
                    }
                     gpu=ciin;ciin=0;S="0";







            if (gpu == 777)
            {
                int y, y2;


                cout << "Вы уверены что хотите выйти? ДА(1)/НЕТ(2):";
                   while (ciin==0)
                    {//
                        cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                        
                    }
                     y=ciin;ciin=0;S="0";

                if (y == 1)
                {
                    break;
                }
                if (y > 1)
                {

                    cout << "Видеокарта стоит: " << gpu << " ? ДА(1)/НЕТ(2):";
                       while (ciin==0)
                    {//
                        cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                        
                    }
                     y2=ciin;ciin=0;S="0";

                    if (y2 > 1)
                    {
                        cout << "Видеокарта: " << endl;
                        while (ciin==0)
                        {//
                            cin >> S;
                            ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                            cout<<"int Error"<<endl;
                            }
                            
                        }
                        gpu=ciin;ciin=0;S="0";

                    }
                }
            }
            //
            sleh();
            x();
            prs();
            cout << cpu + mat + gpu << endl;
            //

            cout << "КулерCPU: " << endl;
            
            while (ciin==0)
           {//
            cin >> S;
            ciin = atoi(S.c_str());
            if (ciin==0)
             {
             cout<<"int Error"<<endl;
             }
                            
           }
            cpufan=ciin;ciin=0;S="0";
          



            if (cpufan == 777)
            {
                int y, y2;


                cout << "Вы уверены что хотите выйти? ДА(1)/НЕТ(2):";
                
                
                  while (ciin==0)
                {//
                    cin >> S;
                    ciin = atoi(S.c_str());
                    if (ciin==0)
                    {
                    cout<<"int Error"<<endl;
                    }
                                    
                }
                y=ciin;ciin=0;S="0";






                if (y == 1)
                {
                    break;
                }
                if (y > 1)
                {

                    cout << "КулерCPU стоит: " << cpufan << " ? ДА(1)/НЕТ(2):";
                    while (ciin==0)
                    {//
                    cin >> S;
                    ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                                    
                    }
                    y2=ciin;ciin=0;S="0";

                    if (y2 > 1)
                    {
                        cout << "КулерCPU: " << endl;
                        

                        while (ciin==0)
                        {//
                            cin >> S;
                            ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                            cout<<"int Error"<<endl;
                            }
                                            
                        }
                         cpufan=ciin;ciin=0;S="0";


                    }
                }
            }
            //
            sleh();
            x();
            prs();
            cout << cpu + mat + gpu + cpufan << endl;
            //

            cout << "ОЗУ: " << endl;
            
            while (ciin==0)
            {//
                cin >> S;
                ciin = atoi(S.c_str());
                if (ciin==0)
                {
                cout<<"int Error"<<endl;
                }
                                
            }
            ram=ciin;ciin=0;S="0";
            
            
            
            
            if (ram == 777)
            {
                int y, y2;


                cout << "Вы уверены что хотите выйти? ДА(1)/НЕТ(2):";
                
                while (ciin==0)
                {//
                    cin >> S;
                    ciin = atoi(S.c_str());
                    if (ciin==0)
                    {
                    cout<<"int Error"<<endl;
                    }
                                    
                }
                y=ciin;ciin=0;S="0";

                if (y == 1)
                {
                    break;
                }
                if (y > 1)
                {

                    cout << "ОЗУ стоит: " << ram << " ? ДА(1)/НЕТ(2):";
                    
                    while (ciin==0)
                    {//
                        cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                                        
                    }
                     y2=ciin;ciin=0;S="0";


                    if (y2 > 1)
                    {
                        cout << "ОЗУ: " << endl;
                      
                    while (ciin==0)
                    {//
                        cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                                        
                    }
                     ram=ciin;ciin=0;S="0";
                    
                    
                    }
                }
            }
            //    
            sleh();
            x();
            prs();
            cout << cpu + mat + gpu + cpufan + ram << endl;
            //

            cout << "Корпус: " << endl;
            
            
            
          
                    while (ciin==0)
                    {//
                        cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                                        
                    }
                     kor=ciin;ciin=0;S="0";
            
            
            
            
            if (kor == 777)
            {
                int y, y2;


                cout << "Вы уверены что хотите выйти? ДА(1)/НЕТ(2):";
                
                
                while (ciin==0)
                    {//
                        cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                                        
                    }
                 y=ciin;ciin=0;S="0";
                
                
                
                
                
                if (y == 1)
                {
                    break;
                }
                if (y > 1)
                {

                    cout << "Корпус стоит: " << kor << " ? ДА(1)/НЕТ(2):";
                    
                    while (ciin==0)
                    {//
                        cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                        cout<<"int Error"<<endl;
                        }
                                        
                    }
                    y2=ciin;ciin=0;S="0";
                    
                    
                    
                    
                    
                    
                    if (y2 > 1)
                    {
                        cout << "Корпус: " << endl;
                       while (ciin==0)
                        {//
                            cin >> S;
                            ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                            cout<<"int Error"<<endl;
                            }
                                            
                        }
                        kor=ciin;ciin=0;S="0";
                    }
                }
            }
            //
            sleh();
            x();
            prs();
            cout << cpu + mat + gpu + cpufan + ram + kor << endl;
            //



            for (int i = 0; i == 0;)
            {
                int y;

                cout << "Количество HDD" << endl;
                
                
             
                while (ciin==0)
                        {//
                            cin >> S;
                            ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                            cout<<"int Error"<<endl;
                            }
                                            
                        }
                 k=ciin;ciin=0;S="0";
                


                if (k == 777)
                {



                    cout << "Вы уверены что хотите выйти? ДА(1)/НЕТ(2):";
                   
                   
                        while (ciin==0)
                        {//
                            cin >> S;
                            ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                            cout<<"int Error"<<endl;
                            }
                                            
                        }
                        y=ciin;ciin=0;S="0";
                    

                    if (y == 1)
                    {
                        pp += y;
                        break;
                    }
                    if (y > 1)
                    {
                        for (int i = 0; i == 0;)
                        {
                            cout << "Количество HDD" << endl;
                            
                            while (ciin==0)
                            {//
                            cin >> S;
                            ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                            cout<<"int Error"<<endl;
                            }
                                            
                            }
                             k=ciin;ciin=0;S="0";







                            if (k < 6)
                            {


                                for (int i = 0; k > i; i++)//Количество
                                {
                                    cout << "Стоймость HDD " << i + 1 << endl;
                                   
                                
                                            while (ciin==0)
                                            {//
                                            cin >> S;
                                            ciin = atoi(S.c_str());
                                                if (ciin==0)
                                                {
                                                cout<<"int Error"<<endl;
                                                }
                                                            
                                            }
                                            arr[i]=ciin;ciin=0;S="0";
                                
                                
                                
                                
                                
                                
                                
                                }
                                for (int i = 0; i < k; i++)
                                {
                                    XHDD += arr[i];
                                }

                                break;
                            }
                            else
                            {
                                cout << "не более 5" << endl;
                            }
                        }
                    }
                    break;
                }



                if (k < 6)
                {


                    for (int i = 0; k > i; i++)//Количество
                    {
                        cout << "Стоймость HDD " << i + 1 << endl;
                        while (ciin==0)
                         {//
                         cin >> S;
                         ciin = atoi(S.c_str());
                            if (ciin==0)
                            {
                            cout<<"int Error"<<endl;
                            }
                                                            
                        }
                          arr[i]=ciin;ciin=0;S="0";
                    }
                    for (int i = 0; i < k; i++)
                    {
                        XHDD += arr[i];
                    }

                    break;
                }
                else
                {
                    cout << "не более 5" << endl;
                }
            }
            if (pp == 1)
            {
                pp = 0;
                break;
            }
            sleh();
            x();
            prs();
            cout << cpu + mat + gpu + cpufan + ram + kor + XHDD << endl;
            //

            for (int i = 0; i == 0;)
            {
                int y;
                cout << "Количество ssd" << endl;
                
                
                
                   while (ciin==0)
                {//
                   cin >> S;
                     ciin = atoi(S.c_str());
                       if (ciin==0)
                       {
                         cout<<"int Error"<<endl;
                       }
                                                            
                 }
                  ks=ciin;ciin=0;S="0";

                if (ks == 777)
                {



                    cout << "Вы уверены что хотите выйти? ДА(1)/НЕТ(2):";
                    
                    
                    
                       while (ciin==0)
                    {//
                     cin >> S;
                        ciin = atoi(S.c_str());
                        if (ciin==0)
                        {
                            cout<<"int Error"<<endl;
                        }
                                                                
                    }
                     y=ciin;ciin=0;S="0";
                    
                    
                    
                    
                    
                    
                    if (y == 1)
                    {
                        pp2 += y;
                        break;
                    }
                    if (y > 1)
                    {
                        for (int i = 0; i == 0;)
                        {
                            cout << "Количество ssd" << endl;
                            
                            
                               while (ciin==0)
                                {//
                                cin >> S;
                                    ciin = atoi(S.c_str());
                                    if (ciin==0)
                                    {
                                        cout<<"int Error"<<endl;
                                    }
                                                                            
                                }
                                ks=ciin;ciin=0;S="0";





                            if (ks < 6)
                            {


                                for (int i = 0; ks > i; i++)//Количество
                                {
                                    cout << "Стоймость ssd " << i + 1 << endl;
                                    
                                   while (ciin==0)
                                    {//
                                    cin >> S;
                                        ciin = atoi(S.c_str());
                                        if (ciin==0)
                                        {
                                            cout<<"int Error"<<endl;
                                        }
                                                                                
                                    }
                                    arr1[i]=ciin;ciin=0;S="0";
                                
                                
                                
                                
                                
                                }
                                for (int i = 0; i < ks; i++)
                                {
                                    xssd += arr[i];
                                }

                                break;
                            }
                            else
                            {
                                cout << "не более 5" << endl;
                            }
                        }

                    }
                    break;
                }
                if (ks < 6)
                {


                    for (int i = 0; ks > i; i++)//Количество
                    {
                        cout << "Стоймость ssd " << i + 1 << endl;
                        while (ciin==0)
                        {//
                        
                         cin >> S;
                         ciin = atoi(S.c_str());
                          if (ciin==0)
                          {
                               cout<<"int Error"<<endl;
                          }
                                                                                
                         }
                      arr1[i]=ciin;ciin=0;S="0";
                    }
                    for (int i = 0; i < ks; i++)
                    {
                        xssd += arr[i];
                    }

                    break;
                }
                else
                {
                    cout << "не более 5" << endl;
                }
            }
            if (pp2 == 1)
            {
                pp2 = 0;
                break;
            }
            sleh();
            prs();
            cout << cpu + mat + gpu + cpufan + ram + kor + XHDD + xssd << endl;
            //

            cout << "БП: " << endl;
           while (ciin==0)
           {//
                        
            cin >> S;
            ciin = atoi(S.c_str());
            if (ciin==0)
            {
            cout<<"int Error"<<endl;
            }
                                                                                    
        }
         bp=ciin;ciin=0;S="0";

            cout << "Стоимость ПК: " << cpu + mat + kor + cpufan + ram + XHDD + bp + gpu + xssd << "р" << endl;


            break;



        }

        
        
            
            //VlanH
            min();
        
        
                while (ciin==0)
            {//
                                
                cin >> S;
                ciin = atoi(S.c_str());
                if (ciin==0)
                    {
                    cout<<"int Error"<<endl;
                    }
                                                                                        
              }
                a=ciin;ciin=0;S="0";
    
    }
    
}




    //VlanH
    


