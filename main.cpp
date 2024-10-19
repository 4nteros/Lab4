#include <iostream>



// int main ()
// {
//     int A;
//     int B;
//     int C;
//     std::cout <<"Enter A: ";
//     std::cin >> A;
//     std::cout <<"Enter B: ";
//     std::cin >> B;
//     std::cout <<"Enter C: ";
//     std::cin >> C;

//     if ((A <= 0) || (B <= 0) || (C <= 0)) 
//     {
//         std::cout << "Error: All numbers must be natural" << std::endl;
//         return 1;
//     }
//     if ((A % B == 0) && (B > C))
//     {
//         std::cout << "A/B + C = " << A / B + C << std::endl;
//         return 0;
//     }
//     else if ((A % B == 0) && (B < C)) 
//     {
//         std::cout << "A/B - C = " << A / B - C << std::endl;
//         return 0;
//     }
//     else 
//     {
//         std::cout << "(A + B) * C = " << (A + B) * C << std::endl;
//         return 0;
//     }

// }







// int main()
// {
//     double N;
//     std::cout << "Enter number of month: ";
//     std::cin >> N;
//     int b = (int)N;
//     if (N != b)
//     {
//         std::cout << "Erorr: number is not natural";
//         return 1;
//     } 
//     if ((N > 12) || (N < 1))
//     {
//         std::cout << "Error: number must be natural, between 1 and 12";
//         return 1;
//     }

//     switch(b)
//     {
//         case 1: std::cout << "January" << std::endl;
//                 break;
//         case 2: std::cout << "February" << std::endl;
//                 break;
//         case 3: std::cout << "March" << std::endl;
//                 break;
//         case 4: std::cout << "April" << std::endl;
//                 break;
//         case 5: std::cout << "May" << std::endl;
//                 break;
//         case 6: std::cout << "June" << std::endl;
//                 break;
//         case 7: std::cout << "July" << std::endl;
//                 break;
//         case 8: std::cout << "August" << std::endl;
//                 break;
//         case 9: std::cout << "September" << std::endl;
//                 break;
//         case 10: std::cout << "October" << std::endl;
//                 break;
//         case 11: std::cout << "November" << std::endl;
//                 break;
//         case 12: std::cout << "December" << std::endl;
//                 break;
//         default: std::cout << "Error" << std::endl;
//                 break;
//     }
// }









int main() 
{
    float x;
    std::cout << "Enter x (-1 or 1): ";
    std::cin >> x;
    if (x + 1 == 0) 
    {
        std::cout << "Negative number" << std::endl;
    } 
    else if (x - 1 == 0) 
    {
        std::cout << "Positive number" << std::endl;
    } 
    else 
    {
        std::cout << "Error: x must be -1 or 1." << std::endl;
        return 1;
    }
    
    return 0;
}
