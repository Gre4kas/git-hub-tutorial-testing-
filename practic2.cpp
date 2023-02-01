// #include <fstream>
// using namespace std;

// int main() {
//     ifstream input("INPUT.TXT");
//     int a;
//     input >> a;
//     input.close();

//     int sum = 0;
//     while (a != 0) {
//         sum += a % 10;
//         a /= 10;
//     }

//     ofstream output("OUT.TXT");
//     output << sum;
//     output.close();
//     return 0;
// }

// #include <iostream>

// int main() {
//     int month, day;
//     std::cout << "Enter your birth month (in numerical form): " ;
//     std::cin >> month;
//     std::cout << "Enter your birth day: " ;   
//     std::cin >> day;

//     if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
//         std::cout << "Your zodiac sign is Aries." << std::endl;
//     } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
//         std::cout << "Your zodiac sign is Taurus." << std::endl;
//     } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
//         std::cout << "Your zodiac sign is Gemini." << std::endl;
//     } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
//         std::cout << "Your zodiac sign is Cancer." << std::endl;
//     } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
//         std::cout << "Your zodiac sign is Leo." << std::endl;
//     } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
//         std::cout << "Your zodiac sign is Virgo." << std::endl;
//     } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
//         std::cout << "Your zodiac sign is Libra." << std::endl;
//     } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
//         std::cout << "Your zodiac sign is Scorpio." << std::endl;
//     } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
//         std::cout << "Your zodiac sign is Sagittarius." << std::endl;
//     } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
//         std::cout << "Your zodiac sign is Capricorn." << std::endl;
//     } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
//         std::cout << "Your zodiac sign is Aquarius." << std::endl;
//     } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
//         std::cout << "Your zodiac sign is Pisces." << std::endl;
//     } else {
//         std::cout << "Invalid date of birth." << std::endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// const int M = 3;
// const int N = 4;

// int main() {
//     int matrix[M][N] = {
//         {1, 2, 3, 4},
//         {5, 6, 6, 8},
//         {9, 10, 11, 12}
//     };
//     int match_number = 6;
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             if (matrix[i][j] == match_number) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int ReverseDigitsBin(int A) {
  int result = 0;
  int power = 1;

  while (A > 0) {
    result += (A % 2) * power;
    power *= 10;
    A /= 2;
  }

  return result;
}

int main() {
    int A;

    cout << "Enter a non-negative integer: ";
    cin >> A;
    cout << "The reversed binary of " << A << " is " << ReverseDigitsBin(A) << endl;

    return 0;
}






