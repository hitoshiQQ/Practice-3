#include "Source.h"

int main() {
    setlocale(LC_ALL, "ru");

    cout << "\t\t���� ������-�����\n";

    int weekDay;

    cout << "������� ���� ������ (�� 1 �� 7): ";
    cin >> weekDay;


    switch (weekDay) {

       case 1:
           cout << "\n\t���� �������(�����������) :\n";
           cout << "��������� ���\n";
           cout << "����� �������� � ����������\n";
           cout << "������� ����� � ����\n";
           cout << "����\n";
           break;

       case 2:
           cout << "\n\t���� �������(�������) :\n";
           cout << "�����\n";
           cout << "����� �������\n";
           cout << "��������� �������� � ��������\n";
           cout << "����\n";
           break;
       case 3:
           cout << "\n\t���� �������(�����) :\n";
           cout << "������� ���\n";
           cout << "����� ����������\n";
           cout << "������ ������� � �������\n";
           cout << "���\n";
           break;
       case 4:
           cout << "\n\t���� �������(�������) :\n";
           cout << "��� � ��������\n";
           cout << "����� ���������\n";
           cout << "����� ����������\n";
           cout << "���\n";
           break;
       case 5:
           cout << "\n\t���� �������(�������) :\n";
           cout << "��� � �������������\n";
           cout << "����� �������\n";
           cout << "�������� ���-������� \n";
           cout << "���\n";
           break;
       case 6:
           cout << "\n\t���� �������(�������) :\n";
           cout << "����������\n";
           cout << "����� ����������\n";
           cout << "������������ ��������� \n";
           cout << "����\n";
           break;
       case 7:
           cout << "\n\t���� �������(�����������) :\n";
           cout << "�������\n";
           cout << "����� �����������\n";
           cout << "���� � ������� \n";
           cout << "���\n";
           break;

       default:
           cout << "Error!\n";
              
    }

}