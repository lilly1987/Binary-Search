#include <iostream> //std
#include <string> //getline
#include <time.h>
#include "배열출력.h"
#include "배열회전.h"
#include "배열할당.h"
#include "정렬.h"
#include "검색.h"

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int c0, c1,n;//r:행,c:열

	do
	{


		// 입력 받기
		cout << "양의 정수만  입력." << endl;
		cout << "0 입력시 종료" << endl;
		cout << "배열1 갯수:";
		cin >> c0;
		if (c0 == 0)
		{
			break;
		}

		int *arr0 = new int[c0];//원본1
		int v ;//찿을값

		// 초기화
		arr_rnd(arr0, c0, c0 * 10);//랜덤값으로 초기화
		//arr_num(arr0, c0);// 0,1,2,3~ 등으로 초기화
		insertion_sort2(arr0, c0);// 정렬
		arr_out(arr0, c0);

		// 찿을값 입력 받기
		cout << "양의 정수만 입력." << endl;
		cout << "0 입력시 종료" << endl;
		cout << "찿을 값:";
		cin >> c1;
		if (c1 == 0)
		{
			break;
		}

		clock_t begin, end, t0, t1, t2, t3, t4, t5, t6, t7, t8;//시간 측정용

		begin = clock();
		n=f_find(arr0, c0, c1);//순위
		end = clock();          // 시간설정		
		t0 = end - begin;

		//arr_out(arr0, c0);


		cout << "4294967295 값인경우 못찿았다는 뜻"<< endl;
		cout << "찿은위치 : " << n << endl;
		cout << "수행시간 : " << t0 << endl;
		//cout << "수행시간 : " << t1 << endl;
		//cout << "수행시간 : " << t2 << endl;
		//cout << "수행시간 : " << t3 << endl;
		//cout << "수행시간 : " << t4 << endl;
		//cout << "수행시간 : " << t5 << endl;
		//cout << "수행시간 : " << t6 << endl;
		//cout << "수행시간 : " << t7 << endl;
		//cout << "수행시간 : " << t8 << endl;

		delete arr0;//, arr1, arr2, arr3;
		//delete arr0, arr1, arr2, arr3;

	} while (true);
}