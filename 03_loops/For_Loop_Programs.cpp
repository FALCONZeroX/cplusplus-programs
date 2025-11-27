#include <iostream>
#include <cmath>
using namespace std;
/*
             ..:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::..          
           .:╔════════════════════════════════════════════════════════════════╗:.       
           :╔╩╗                                                              ╔╩╗:       
           :║▒║     ▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓ ▓▓      ▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓ ▓▓     ▓▓▓    ║▒║:      
          :║▒▒║     ▓▓      ▓▓    ▓▓ ▓▓      ▓▓      ▓▓     ▓▓ ▓▓   ▓▓ ▓▓    ║▒▒║:    
         :║▒▒▒║     ▓▓▓▓▓   ▓▓▓▓▓▓▓▓ ▓▓      ▓▓      ▓▓     ▓▓ ▓▓  ▓▓  ▓▓    ║▒▒▒║:    
        :║▒▒▒▒║     ▓▓      ▓▓    ▓▓ ▓▓      ▓▓      ▓▓     ▓▓ ▓▓ ▓▓   ▓▓    ║▒▒▒▒║:   
       :║▒▒▒▒▒║     ▓▓      ▓▓    ▓▓ ▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓▓▓ ▓▓▓▓    ▓▓    ║▒▒▒▒▒║:  
       :║▒▒▒▒▒║                                                              ║▒▒▒▒▒║:  
        :║▒▒▒▒║                  For Loop Exercise with c++                  ║▒▒▒▒║:  
         :║▒▒▒║                      ------------------                      ║▒▒▒║:    
          :║▒▒║                                                              ║▒▒║:     
           :║▒║               © Created BY FALCON • 2025 • Be PRO            ║▒║:      
           :╚╦╝                                                              ╚╦╝:     
            :╚════════════════════════════════════════════════════════════════╝:'      
           '':::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::''  
*/

//<========================================= For Exercises ==========================================> 
//#1 Write a c++ program that print numbers 1 - 10
void num_1_10()
{
  for(int i = 1; i <= 10; i++)
  {
    cout << i << " ";
  }
}
//#2 Write a c++ program thst print numbers 1 - 100
void num_1_100()
{
  for(int i = 1; i <= 100; i++)
  {
    cout << i << " ";
  }
}
//#3 Write a c++ program that print even numbers 1 - 20
void even_numbers()
{
  for(int i = 1; i <= 20; i++)
  {
    if(i % 2 == 0)
    {
      cout << i << " ";
    }
  }
}
//#4 Write a c++ program that print multiplication table to number 5
void multiplication_to_5()
{
  for(int i = 1; i <= 5; i++)
  {
    for(int j = 1; j <= 10; j++)
    {
      cout << i << " * " << j << " = " << i * j << endl;
    }
    cout << endl;
  }
} 
//#5 Write a c++ program that print odd number 1 - 20
void odd_numbers()
{
  for(int i = 1; i <= 20; i++)
  {
    if(i % 2 == 1)
    {
      cout << i << " ";
    }
  }
}
//#6 Write a c++ program that print multiplication of number 3 - 30
void multiplication_to_30()
{
  for(int i = 3; i <= 30; i = i +3)
  {
    cout << i << " ";
  }
}
//#7 Write a c++ program that print numbers 1-10 Descending
void descending_num()
{
  for(int i = 10; i >= 1; i--)
  {
    cout << i << " ";
  }
}
//#8 Write a c++ program that find repeated number in array
void repeated_numbers()
{
  int arr[6] = {5,8,3,2,5,3};
  for(int i = 0; i < 6; i++)
  {
    for(int j = i + 1; j < 6; j++)
    {
      if(arr[i] == arr[j])
      {
        cout << arr[i] << " ";
      }
    }
  }
}
//#9 Write a c++ program that  print numbers 1-100, but replace numbers that divded on 3 by 'faz'
void number_with_replace()
{
  for(int i = 1; i <= 100; i++)
  {
    if(i % 3 == 0)
    {
      cout << "FAZ" << " ";
    }
    else
    {
      cout << i << " ";
    }
  }
}
//#10 Write a c++ program that count the factorial for a positive integer number
void factorial_number()
{
  int n;
  cout << "Please Enter Factorial" << endl;
  cin >> n;
  int factorial = 1;
  for(int i = 1; i <= n; i++)
  {
    factorial = factorial * i;
  }
  cout << "!" << n << " = " << factorial << endl;
}
//#11 Write a c++ program that print 1-50 with marking the number that divded by 5
void number_divded_5()
{
  for(int i = 1; i <= 50; i++)
  {
     if(i % 5 == 0)
    {
     cout << i << "*" << " ";
    }
    else
    {
     cout << i << " ";
    }
  }
}
//#12 Write a c++ program that print 1-30 with replace number that devided by 5 with "Bai" word
void number_1_30_bai()
{
  for(int i = 1; i <= 30; i++)
  {
    if(i % 5 == 0)
    {
      cout << "Bai" << " ";
    }
    else
    {
      cout << i << " ";
    }
  }
}
//#13 Write a c++ program that numbers that form full square from 1-100
void full_square()
{
  for(int i = 1; i <= 100; i++)
  {
    float square = sqrt(i);
    int num = int(square);
    if(num == square)
    {
      cout << i << " ";
    }
  }
}
//#14 Write a c++ program that print number 1-100 with replace number that devided by 15 with "Play" word
void number_to_100()
{
  for(int i = 1; i <= 100; i++)
  {
    if(i % 15 == 0)
    {
      cout << "Play" << " ";
    }
    else
    {
      cout << i << " ";
    }
  }
}
//#15 Write a c++ program that count sum of odd number from 1 to 100
void odd_count()
{
  int odd = 0;
  for(int i = 1; i <= 100; i++)
  {
    if(i % 2 == 1)
    {
      odd = odd + i;
    }
  }
  cout << "odd sum: " << odd << endl;
}
//#16 Write a c++ program that print 1-50 with point the primary number
void primary_number()
{
  for(int i = 1; i <= 50; i++)
  {
    cout << i << " ";
    if(i > 1)
    {
      bool p = true;
      for(int j = 2; j * j <= i ; j++)
      {
        if(i % j == 0)
        {
          p = false;
          break;
        }
      }
      if(p) cout << "p" ;
    };
  }


}
//#17 Write a c++ program that print 1-100 with replace numbers that devided by 4 with "Happy" word
void devided_4()
{
  for(int i = 1; i <= 100; i++)
  {
    if(i % 4 == 0)
    {
      cout << "Happy" << " ";
    }
    else
    {
      cout << i << " ";
    }
  }
}
//#18 Write a c++ Program that print 1-20 then print sum of these numbers
void sum_numbers()
{
  int sum = 0;
  for(int i = 1; i <= 20; i++)
  {
    sum = sum + i;
  }
  cout << "Sum of numbers 1-20: " << sum << endl;
}


int main()
{
    int choice;
    do
    {
    cout << endl;
    cout << "+--------------------------------------------------------------------------------------------+" << endl;
    cout << "|                               >>> For Loop Exercises by C++ <<<                            |" << endl;
    cout << "+--------------------------------------------------------------------------------------------+" << endl;
    cout << " 1. program that print numbers 1 - 10                                                         " << endl;
    cout << " 2. program thst print numbers 1 - 100                                                        " << endl;
    cout << " 3. program that print even numbers 1 - 20                                                    " << endl;
    cout << " 4. program that print multiplication table to number 5                                       " << endl;
    cout << " 5. program that print odd number 1 - 20                                                      " << endl;
    cout << " 6. program that print multiplication of number 3 - 30                                        " << endl;
    cout << " 7. program that print numbers 1-10 Descending                                                " << endl;
    cout << " 8. program that find repeated number in array                                                " << endl;
    cout << " 9. program that  print numbers 1-100, but replace numbers that divded on 3 by 'faz'          " << endl;
    cout << " 10. program that count the factorial for a positive integer number                           " << endl;
    cout << " 11. program that print 1-50 with marking the number that divded by 5                         " << endl;
    cout << " 12. program that print 1-30 with replace number that devided by 5 with 'Bai' word            " << endl;
    cout << " 13. program that numbers that form full square from 1-100                                    " << endl;
    cout << " 14. program that print number 1-100 with replace number that devided by 15 with 'Play' word  " << endl;
    cout << " 15. program that count sum of odd number from 1 to 100                                       " << endl;
    cout << " 16. program that print 1-50 with point the primary number                                    " << endl;
    cout << " 17. program that print 1-100 with replace numbers that devided by 4 with 'Happy' word        " << endl;
    cout << " 18. Program that print 1-20 then print sum of these numbers                                  " << endl;
    cout << " 19. Clear CMD Screen" << endl;

    cout << "Choose one of the following programs (1-19):>> " ;
    cin >> choice;
    system("cls");

    switch(choice)
    {
      case 1: num_1_10(); break;
      case 2: num_1_100(); break;
      case 3: even_numbers(); break;
      case 4: multiplication_to_5(); break;
      case 5: odd_numbers(); break;
      case 6: multiplication_to_30(); break;
      case 7: descending_num(); break;
      case 8: repeated_numbers(); break;
      case 9: number_with_replace(); break;
      case 10: factorial_number(); break;
      case 11: number_divded_5(); break;
      case 12: number_1_30_bai(); break;
      case 13: full_square(); break;
      case 14: number_to_100(); break;
      case 15: odd_count(); break;
      case 16: primary_number(); break;
      case 17: devided_4(); break;
      case 18: sum_numbers(); break;
      case 19: system("cls"); break;
      default: cout << "Invalid Choice" << endl;
    }
    }while(choice != 0);

    return 0;
}
