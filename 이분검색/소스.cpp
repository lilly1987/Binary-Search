#include <iostream> //std
#include <string> //getline
#include <time.h>
#include "�迭���.h"
#include "�迭ȸ��.h"
#include "�迭�Ҵ�.h"
#include "����.h"
#include "�˻�.h"

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int c0, c1,n;//r:��,c:��

	do
	{


		// �Է� �ޱ�
		cout << "���� ������  �Է�." << endl;
		cout << "0 �Է½� ����" << endl;
		cout << "�迭1 ����:";
		cin >> c0;
		if (c0 == 0)
		{
			break;
		}

		int *arr0 = new int[c0];//����1
		int v ;//�O����

		// �ʱ�ȭ
		arr_rnd(arr0, c0, c0 * 10);//���������� �ʱ�ȭ
		//arr_num(arr0, c0);// 0,1,2,3~ ������ �ʱ�ȭ
		insertion_sort2(arr0, c0);// ����
		arr_out(arr0, c0);

		// �O���� �Է� �ޱ�
		cout << "���� ������ �Է�." << endl;
		cout << "0 �Է½� ����" << endl;
		cout << "�O�� ��:";
		cin >> c1;
		if (c1 == 0)
		{
			break;
		}

		clock_t begin, end, t0, t1, t2, t3, t4, t5, t6, t7, t8;//�ð� ������

		begin = clock();
		n=f_find(arr0, c0, c1);//����
		end = clock();          // �ð�����		
		t0 = end - begin;

		//arr_out(arr0, c0);


		cout << "4294967295 ���ΰ�� ���O�Ҵٴ� ��"<< endl;
		cout << "�O����ġ : " << n << endl;
		cout << "����ð� : " << t0 << endl;
		//cout << "����ð� : " << t1 << endl;
		//cout << "����ð� : " << t2 << endl;
		//cout << "����ð� : " << t3 << endl;
		//cout << "����ð� : " << t4 << endl;
		//cout << "����ð� : " << t5 << endl;
		//cout << "����ð� : " << t6 << endl;
		//cout << "����ð� : " << t7 << endl;
		//cout << "����ð� : " << t8 << endl;

		delete arr0;//, arr1, arr2, arr3;
		//delete arr0, arr1, arr2, arr3;

	} while (true);
}