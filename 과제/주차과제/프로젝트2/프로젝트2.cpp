#include<iostream>
#include<stdlib.h>
#include<string>
#pragma warning(disable:4996)

using namespace std;

#define BOOK 10 // BOOK 상수를 10으로 선언
#define MEMBER 5 // MEMBER 상수를 5으로 선언
#define MAX 500 // 배열의 크기를 늘려줄 MAX 상수를 500으로 선언

struct book { // 구조체 book 선언
	int id;
	char name[30];
};
book books[BOOK] = {0}; //book 자료형 배열 선언

struct member { // 구조체 member 선언
	int id;
	char name[30];
};
member members[MEMBER] = { 0 }; //member 자료형 배열 선언

struct borrow { // 구조체 borrow 선언
	int mid;
	char mname[30];
	int bid;
	char bname[30];
};
borrow borrows[MEMBER] = { 0 }; //borrows 자료형 배열 선언

book books_f[BOOK + MAX] = { 0 }; //book 자료형 배열 선언
member members_f[MEMBER + MAX] = { 0 }; //member 자료형 배열 선언
borrow borrows_f[MEMBER + MAX] = { 0 }; //borrows 자료형 배열 선언

int main()
{
	FILE* fbook = NULL; // 책 id와 이름을 저장할 fbook 파일 생성
	int b_id, m_id; // case문에서 책 id와 회원 id를 입력받을 때 이용할 변수 선언
	int now_b = BOOK, now_m = MEMBER; // 현재 등록된 책, 회원 수를 선언 후, 상수 BOOK과 MEMBER를 대입
	int index_b, index_m; // 대출, 반납 시 책과 회원의 인덱스에 이용할 변수 선언

	// book.txt에 파일 입력
	fopen_s(&fbook, "book.txt", "w"); // book.txt 파일을 읽기 모드로 엶
	if (fbook == NULL) // fbook이 NULL이면 파일이 제대로 열리지 않은 것이므로 error 메시지 발생
	{
		fprintf(stderr, "can not open the %s file.\n", "book.txt");
		exit(1);
	}
	for (int i = 0; i < BOOK; i++) // 처음에 입력받을 책의 개수는 10권이므로 for문의 범위를 i=0부터 BOOK보다 작을 때까지로 설정
	{
		int num = 0; // 책 id를 입력받을 num을 선언
		while (num <= 0)
		{
			cout << "책 번호를 입력하세요" << endl;
			cin >> num; // 책 번호 num을 입력 받음
			if (num <= 0) // num이 0 이하의 수가 나오면 error메시지 발생 후 다시 입력 받도록 함.
			{
				cout << "잘못된 번호를 입력했습니다. 다시 입력해주세요" << endl;
			}
			for (int j = 0; j < BOOK; j++)
			{
				if (((books_f + j)->id) == num) // books 각 index 값과 num가 동일한지 확인하는 코드 동일하다면 중첩 id가 발생하는 것이므로 error 메시지 발생 후 다시 입력 받도록 함.
				{
					cout << "이미 존재하는 책 번호입니다. 다시 입력해주세요." << endl;
					num = 0;
					break;
				}
			}
		}
		(books_f + i)->id = num; // while문을 빠져나오면 각 책의 id에 문제가 없는 것이므로 각 배열의 인덱스 값의 id 멤버함수에 접근해 num을 대입
		cout << "책 이름을 입력하세요" << endl;
		cin >> (books_f + i)->name; // 이후 책 이름을 입력 받아 각 배열의 인덱스 값의 name 멤버함수에 접근해 name을 입력받음
		fprintf(fbook, "%d %s\n", (books_f + i)->id, (books_f + i)->name); // 이후 book.txt 파일에 책의 번호 및 이름을 쓰기
	}
	fclose(fbook); // fbook 파일 close


	FILE* fmem = NULL;

	fopen_s(&fmem, "member.txt", "w"); // member.txt 파일을 읽기 모드로 엶
	if (fmem == NULL) // fmem이 NULL이면 파일이 제대로 열리지 않은 것이므로 error 메시지 발생
	{
		fprintf(stderr, "can not open the %s file.\n", "member.txt");
		exit(1);
	}
	for (int i = 0; i < MEMBER; i++) // 처음에 입력받을 회원의 수는 5명이므로 for문의 범위를 i=0부터 MEMBER보다 작을 때까지로 설정
	{
		int num = 0; // 책 id를 입력받을 num을 선언
		while (num <= 0) // num이 0 이하의 수가 나오면 error메시지 발생 후 다시 입력 받도록 함.
		{
			cout << "회원 번호를 입력하세요" << endl;
			cin >> num; // 회원 번호 num을 입력 받음
			if (num <= 0) // num이 0 이하의 수가 나오면 error메시지 발생 후 다시 입력 받도록 함.
			{
				cout << "잘못된 번호를 입력했습니다. 다시 입력해주세요" << endl;
			}
			for (int j = 0; j < MEMBER; j++)
			{
				if (((members_f + j)->id) == num) // members의 각 index 값과 num가 동일한지 확인하는 코드 동일하다면 중첩 id가 발생하는 것이므로 error 메시지 발생 후 다시 입력 받도록 함.
				{
					cout << "이미 존재하는 회원 번호입니다. 다시 입력해주세요." << endl;
					num = 0;
					break;
				}
			}
		}
		(members_f + i)->id = num; // while문을 빠져나오면 각 회원의 id에 문제가 없는 것이므로 각 배열의 인덱스 값의 id 멤버함수에 접근해 num을 대입
		cout << "회원 이름을 입력하세요" << endl;
		cin >> (members_f + i)->name; // 이후 회원 이름을 입력 받아 각 배열의 인덱스 값의 name 멤버함수에 접근해 name을 입력받음
		fprintf(fmem, "%d %s\n", (members_f + i)->id, (members_f + i)->name); // 이후 member.txt 파일에 책의 번호 및 이름을 쓰기
	}
	fclose(fmem); // fmem 파일 close

	FILE* fman = NULL; // manage.txt 파일의 주소를 불러올 FILE*형 변수 fman 선언

	while (1)
	{
		int menu; // 각 메뉴를 분류하기 위해 이용할 menu 변수 선언
		int c = 0; // 각 case문에서 에러 발생 상황을 막기위해 이용하는 변수 c 선언 후 0으로 초기화
		cout << "메뉴를 입력하세요" << endl;
		cout << "1.quit\n2.book show\n3.book modify\n4.book remove\n5.add a book\n6.member show\n7.member modify\n8.member remove\n9.add a member\n10.borrow\n11.return\n";
		cin >> menu; // 전자 도서 시스템의 각 메뉴에 들어가기 위한 menu 입력
		switch (menu) // 전자 도서 시스템을 분류해줄 switch문 입력
		{
		// quit
		case 1:
			fopen_s(&fbook, "book.txt", "w"); // book 텍스트 파일을 쓰기모드로 불러오기
			if (fbook == NULL) // fbbok이 NULL이면 파일이 제대로 불러와지지 않은 것이므로 error 메시지 발생
			{
				fprintf(stderr, "can not open the %s file.\n", "book.txt");
				exit(1);
			}

			fopen_s(&fmem, "member.txt", "w"); // member 텍스트 파일을 쓰기모드로 불러오기
			if (fmem == NULL) // fmem이 NULL이면 파일이 제대로 불러와지지 않은 것이므로 error 메시지 발생
			{
				fprintf(stderr, "can not open the %s file.\n", "book.txt");
				exit(1);
			}

			for (int i = 0; i < now_b; i++) // for문의 범위를 i가 0일 때부터 현재 책의 개수인 now_b까지 설정
			{
				if (((books_f + i)->id) == 0) // 만약에 books 배열의 각 인덱스의 id 멤버변수에 0값이 들어가 있으면 삭제된 책이므로 파일에 입력하지 말아야하므로 continue.
				{
					continue;
				}
				fprintf(fbook, "%d %s\n", (books_f + i)->id, (books_f + i)->name); // if문에 접근하지 않은 id 변수들, 즉 NULL값이 아닌 변수들에 대해서만 id와 name을 파일에 입력
			}

			for (int i = 0; i < now_m; i++) // for문의 범위를 i가 0일 때부터 현재 회원의 수인 now_m까지 설정
			{
				if (((members_f + i)->id) == 0) // 만약에 members 배열의 각 인덱스의 id 멤버변수에 0값이 들어가 있으면 삭제된 회원이므로 파일에 입력하지 말아야하므로 continue.
				{
					continue;
				}
				fprintf(fmem, "%d %s\n", (members_f + i)->id, (members_f + i)->name); // if문에 접근하지 않은 id 변수들, 즉 NULL값이 아닌 변수들에 대해서만 id와 name을 파일에 입력
			}

			fclose(fbook); // book.txt파일을 모두 이용했으므로 close
			fclose(fmem); // book.txt파일을 모두 이용했으므로 close
			cout << "프로그램을 종료합니다. 이용해주셔서 감사합니다." << endl;

			exit(1); // quit시스템이므로 프로그램을 종료
			break;


		// book show
		case 2:
			cout << "책 목록을 출력합니다" << endl;
			for (int i = 0; i < now_b; i++) // 
			{
				if (((books_f + i)->id) == 0) // id가 0 이면 삭제된 책이므로 continue를 이용해 출력을 막음
				{
					continue;
				}
				cout << (books_f + i)->id << "-" << (books_f + i)->name << endl; // 책의 번호와 이름 출력
			}
			break;


		// book modify
		case 3:
			fopen_s(&fbook, "book.txt", "w+");// book.txt파일을 쓰기모드로 불러옴
			if (fbook == NULL)
			{
				fprintf(stderr, "can not open the %s file.\n", "book.txt");
				exit(1);
			}

			while (c<=0) // c가 0보다 작으면 책의 번호가 제대로 입력이 안 된 것이므로 번호를 다시 입력받도록 함
			{
				cout << "수정할 책의 번호를 입력하세요" << endl;
				cin >> b_id; // 수정할 책번호 입력
				for (int i = 0; i < now_b; i++) // for문을 돌아 b_id와 동일한 책 번호가 있는지 확인
				{
					if (((books_f + i)->id) == b_id) // 동일한 책번호가 있으면 책 번호를 입력받고 while문을 빠져나오기 위해 c++를 해줌
					{
						cout << "수정할 책 이름을 입력하세요" << endl;
						cin >> (books_f + i)->name;
						c++;
						break;
					}
				}
				if (c<=0) // c가 0보다 작으면 동일한 책 번호가 없는 것이므로 책 번호를 다시 입력 받음
				{
					cout << "잘못된 책 번호를 입력하셨습니다. 다시 입력해주세요." << endl;
				}
			}
			for (int i = 0; i < now_b; i++) 
			{
				fprintf(fbook, "%d %s\n", (books_f + i)->id, (books_f + i)->name); // 파일에 원래의 책 번호와, 수정된 책 이름을 써줌
			}
			fclose(fbook);
			break;


		// book remove
		case 4:
			fopen_s(&fbook, "book.txt", "w+"); // book.txt 파일을 읽기 및 쓰기 기능으로 불러옴
			if (fbook == NULL)
			{
				fprintf(stderr, "can not open the %s file.\n", "book.txt");
				exit(1);
			}

			while (c <= 0) // c가 0보다 작으면 책의 번호가 제대로 입력이 안 된 것이므로 번호를 다시 입력받도록 함
			{
				cout << "삭제할 책의 번호를 입력하세요" << endl;
				cin >> b_id;
				for (int i = 0; i < now_b; i++)
				{
					if (((books_f + i)->id) == b_id) // 입력한 삭제할 번호와, 기존에 존재하는 책의 id와 일치하면
					{
						c++; // while문을 빠져 나오기 위해 c++를 해줌
						(books_f + i)->id = 0; // 삭제를 해줄 것이므로 id에 0을 입력
						strcpy((books_f + i)->name, " "); // 삭제해줄 것이므로 name에 공백 입력
						break;
					}
				}
				if (c <= 0) // 만약 c가 0보다 작거나 같으면 책 번호가 제대로 입력이 되지 않은 것이므로 
				{
					cout << "잘못된 책 번호를 입력하셨습니다. 다시 입력해주세요." << endl;
				}
			}

			for (int i = 0; i < now_b; i++) 
			{
				if (((books_f + i)->id) == 0) // 만약 id값이 0이면 삭제된 id이므로 continue
				{
					continue;
				}
				fprintf(fbook, "%d %s\n", (books_f + i)->id, (books_f + i)->name); // continue가 되지 않은 id에 대해서는 번호와 책 이름을 파일에 쓰기
			}
			cout << "삭제 완료 됐습니다." << endl; // 삭제 완료 문구 출력

			fclose(fbook);
			break;


		// add a book
		case 5:
			fopen_s(&fbook, "book.txt", "w+"); // txt파일을 읽기/쓰기 모드로 엶
			if (fbook == NULL)
			{
				fprintf(stderr, "can not open the %s file.\n", "book.txt"); 
				exit(1);
			}

			while (1)
			{
				cout << "추가할 책의 번호를 입력하세요" << endl;
				cin >> b_id; // 추가할 책 번호를 입력
				for (int i = 0; i < now_b; i++)
				{
					if (b_id <= 0 || ((books_f + i)->id) == b_id) // 만약 추가할 책 id가 음수거나, 이미 존재하면 다시 입력 받음
					{
						cout << "잘못됐거나 이미 존재하는 책 번호입니다. 다시 입력해주세요." << endl;
						break;
					}
					c++; // if문에 위배되지 않으면 아무런 문제가 없는 책 id이므로 c를 증가시킴
				}

				if (c==now_b) // c와 현재 책의 수가 동일하면, 입력받은 b_id에 대해 문제가 없는 것이므로 while문을 break 통해 빠져나감
				{
					break;
				}
			}

			now_b++; // add를 했으므로 책이 한 권 추가됨, 그러므로 now_b를 1 증가시킴
			cout << "추가할 책 이름을 입력하세요" << endl;
			(books_f + (now_b-1))->id = b_id; // 이후 now_b-1 인덱스의 id에 이전에 입력받은 추가할 id의 값을 입력해줌.
			cin >> (books_f + (now_b - 1))->name; // 새로 추가할 책 이름을 입력받음
			for (int i = 0; i < now_b; i++)
			{
				fprintf(fbook, "%d %s\n", (books_f + i)->id, (books_f + i)->name); // for문을 이용해 배열에 입력된 id와 name을 파일에 입력함
			}
			cout << "추가 완료 됐습니다." << endl; // 추가 완료 문구 출력

			fclose(fbook);
			break;


		// member show
		case 6: // case 2와 설명 동일
			cout << "회원 목록을 출력합니다" << endl;
			for (int i = 0; i < now_m; i++)
			{
				if (((members_f + i)->id) == 0)
				{
					continue;
				}
				cout << (members_f + i)->id << "-" << (members_f + i)->name << endl;
			}
			break;


		// member modify
		case 7: // case 3과 설명 동일
			fopen_s(&fmem, "member.txt", "w+");
			if (fmem == NULL)
			{
				fprintf(stderr, "can not open the %s file.\n", "member.txt");
				exit(1);
			}

			while (c <= 0)
			{
				cout << "수정할 회원의 번호를 입력하세요" << endl;
				cin >> m_id;
				for (int i = 0; i < now_m; i++)
				{
					if (((members_f + i)->id) == m_id)
					{
						c++;
						break;
					}
				}
				if (c <= 0)
				{
					cout << "잘못된 회원 번호를 입력하셨습니다. 다시 입력해주세요." << endl;
				}
			}
			for (int i = 0; i < now_m; i++)
			{
				if (((members_f + i)->id) == m_id)
				{
					cout << "수정할 회원 이름을 입력하세요" << endl;
					cin >> (members_f + i)->name;
				}
			}
			for (int i = 0; i < now_m; i++)
			{
				fprintf(fmem, "%d %s\n", (members_f + i)->id, (members_f + i)->name);
			}

			fclose(fmem);
			break;


		// member remove
		case 8: // case 4와 설명 동일
			fopen_s(&fmem, "member.txt", "w+");
			if (fmem == NULL)
			{
				fprintf(stderr, "can not open the %s file.\n", "member.txt");
				exit(1);
			}

			while (c <= 0)
			{
				cout << "삭제할 회원의 번호를 입력하세요" << endl;
				cin >> m_id;
				for (int i = 0; i < now_m; i++)
				{
					if (((members_f + i)->id) == m_id)
					{
						c++;
						(members_f + i)->id = 0;
						strcpy((members_f + i)->name, " ");
						break;
					}
				}
				if (c <= 0)
				{
					cout << "잘못된 회원 번호를 입력하셨습니다. 다시 입력해주세요." << endl;
				}
			}

			for (int i = 0; i < now_b; i++)
			{
				if (((members_f + i)->id) == 0)
				{
					continue;
				}
				fprintf(fmem, "%d %s\n", (members_f + i)->id, (members_f + i)->name);
			}
			cout << "삭제 완료 됐습니다." << endl;

			fclose(fmem);
			break;


		// add a member
		case 9: // case 5와 설명 동일
			fopen_s(&fmem, "member.txt", "w+");
			if (fmem == NULL)
			{
				fprintf(stderr, "can not open the %s file.\n", "member.txt");
				exit(1);
			}

			while (1)
			{
				cout << "추가할 회원의 번호를 입력하세요" << endl;
				cin >> m_id;
				for (int i = 0; i < now_m; i++)
				{
					if (m_id <= 0 || ((books_f + i)->id) == m_id)
					{
						cout << "잘못됐거나 이미 존재하는 책 번호입니다. 다시 입력해주세요." << endl;
						break;
					}
					c++;
				}

				if (c == now_m)
				{
					break;
				}
			}

			now_m++;
			cout << "추가할 회원 이름을 입력하세요" << endl;
			(members_f + (now_m - 1))->id = m_id;
			cin >> (members_f + (now_m - 1))->name;
			for (int i = 0; i < now_m; i++)
			{
				fprintf(fmem, "%d %s\n", (members_f + i)->id, (members_f + i)->name);
			}
			cout << "추가 완료 됐습니다." << endl;

			fclose(fmem);
			break;


		// borrow
		case 10:
			fopen_s(&fman, "manage.txt", "a+"); // 파일을 추가 쓰기 모드로 엶
			if (fmem == NULL) // 파일 열기 실패시 파일 열람 실패 문구 출력
			{
				fprintf(stderr, "can not open the %s file.\n", "manage.txt");
				exit(1);
			}

			int borrow_m, borrow_b; // 빌릴 회원과 책의 id를 입력할 변수 선언
			while (c <= 0) // c가 0이하이면 입력받은 id에 대해 문제가 있는 것이므로 다시 입력 받음
			{
				cout << "대출할 회원의 번호를 입력하세요" << endl;
				cin >> borrow_m; // 대출할 회원의 번호 입력
				for (int i = 0; i < now_m; i++)  // for문을 이용해 위에서 입력받은 id와 기존 회원 id가 일치하는지를 확인
				{
					if (((members_f + i)->id) == borrow_m) // 위에서 입력받은 아이디와 기존의 회원 id와 동일하면
					{
						if ((borrows_f + i)->mid != 0) // 만약 borrows_f의 mid값에 0이 들어가 있지 않으면 이미 대출 중인 회원이므로 
						{
							cout << "이미 대출 중입니다. 반납 후 다시 이용해주세요." << endl; // 반납 후 다시 이용해달라는 메시지 출력
							break;
						}
						index_m = i; // 만약에 대출중인 회원이 아니면
						c++; // 입력받은 id에 문제가 없으므로 while문을 벗어나기 위해 c++을 해줌
						(borrows_f + i)->mid = (members_f + i)->id; // 이후 위에서 입력한 id의 값을 동일한 index의 borrows_f 배열의 mid 멤버 변수에 넣어줌
						strcpy((borrows_f + i)->mname, (members_f + i)->name); // 이후 대출한 사람의 이름을 동일한 index의 borrows_f 배열의 mname 멤버 변수넣어줌
						break;
					}
				}
				if (c <= 0) // 만약 c가 0이하이면 잘못된 id를 입력받은 것이므로 에러 메시지 출력
				{
					cout << "잘못된 회원 번호를 입력하셨습니다. 다시 입력해주세요." << endl;
				}
			}

			c = 0;
			while (c <= 0) 
			{
				cout << "대출할 책의 번호를 입력하세요" << endl;
				cin >> borrow_b; // 대출할 책의 번호를 입력
				for (int j = 0; j < now_m; j++)
				{
					if (((borrows_f + j)->bid == borrow_b)) // 만약에 borrows_f의 멤버함수인 bid에 borrow_b가 존재하면 이미 빌리고 있는 책임
					{
						cout << "이미 대출 중인 책입니다. 다른 책을 입력해주세요" << endl; // 이미 대출중인 책은 빌릴 수 없으므로 다시 입력해달라는 문구 입력
						c--; // c--를 안 해주면 아래 for문에서 c++이 되어 다시 while문이 실행되지 않으므로 해줘야함
						break;
					}
				}
				for (int i = 0; i < now_b; i++) // 입력한 책 번호가 기존에 존재하는 책 번호인지 for문을 통해 확인
				{
					if (((books_f + i)->id) == borrow_b) // 만약 책 번호가 동일하다면 기존에 존재하는 책이므로 문제가 없음
					{
						index_b = i; // i는 for문에서만 사용 가능한 지역변수 이므로 for문 밖에서 사용하기 위해 index_b 값에 따로 저장
						(borrows_f + i)->bid = borrow_b; // 책 id를 borrow_f의 동일한 인덱스의 bid 멤버 변수에 입력
						strcpy((borrows_f + i)->bname, (books_f + i)->name); // 책 id를 borrow_f의 동일한 인덱스의 bname 멤버 변수에 입력
						c++; // while문을 빠져 나오기 위해 c++을 해줌
						break;
					}
				}
				if (c <= 0) // 만약에 c가 0 이하면 기존에 존재하는 책이 아니므로, 다시 입력하라는 문구를 출력
				{
					cout << "잘못된 책 번호를 입력하셨습니다. 다시 입력해주세요." << endl;
				}
			}


			fprintf(fman, "책 번호/이름 : %d/%s, 대출자 번호/이름 : %d/%s\n", (borrows_f + index_b)->bid, (borrows_f + index_b)->bname, (borrows_f + index_b)->mid, (borrows_f + index_b)->mname);
			// 이후 while문을 빠져나오면, 문제가 없으므로, 위에서 입력받은 대출한 책 id, 이름, 대출자 id, 이름을 파일에 입력함

			cout << "대출 완료했습니다. 이용해주셔서 감사합니다.\n"; // 대출 완료 메시지 출력

			fclose(fman);
			break;


		// return
		case 11:
			fopen_s(&fman, "manage.txt", "a+"); // manage.txt 파일을 추가쓰기 모드로 엶
			if (fmem == NULL)
			{
				fprintf(stderr, "can not open the %s file.\n", "manage.txt");
				exit(1);
			}

			int return_m; // 반납할 회원의 id 및 반납할 책의 id를 입력받기 위한 변수 선언
			while (c <= 0) // c가 0이하면 입력한 id에 대해 오류가 있는 것이므로 반복문을 통해 id를 다시 입력 받게 함
			{
				cout << "반납할 회원의 번호를 입력하세요" << endl;
				cin >> return_m; // 반납할 회원의 번호를 입력받음 
				for (int i = 0; i < now_m; i++)
				{
					if (((borrows_f + i)->bid) != 0 && ((members_f + i)->id) == return_m) // 만약 회원의 번호가 기존에 borrows_f에 있는 mid 값과 일치하면 기존에 대출한 적이 있는 것임
					{
						index_m = i; // i는 for문에서만 사용 가능한 지역변수 이므로 for문 밖에서 사용하기 위해 index_m 값에 따로 저장
						c++; // if문을 통과하면 입력된 회원 번호에 대해 에러가 없는 것이므로 c++을 하여 while문을 빠져나오도록 함
						break;
					}
				}
				if (c <= 0)
				{
					cout << "잘못된 회원 번호를 입력하셨습니다. 다시 입력해주세요." << endl;
				}
			}

			fprintf(fman, "책 번호/이름 : %d/%s, 반납자 번호/이름 : %d/%s  (반납)\n", (borrows_f + index_m)->bid, (borrows_f + index_m)->bname, (borrows_f + index_m)->mid, (borrows_f + index_m)->mname);
			// 앞에서 반납한 책과 반납자의 이름을 파일에 입력해줌

			(borrows_f + index_m)->mid = 0; // 반납한 책에 대한 인덱스에 해당하는 회원의 번호를 0을 넣어줌
			strcpy((borrows_f + index_m)->mname, " "); // 반납한 책에 대한 인덱스에 해당하는 회원의 이름를 공백을 넣어줌
			(borrows_f + index_m)->bid = 0; // 반납한 책에 대한 인덱스에 해당하는 책의 번호를 0을 넣어줌
			strcpy((borrows_f + index_m)->bname, " "); // 반납한 책에 대한 인덱스에 해당하는 책의 이름를 공백을 넣어줌

			cout << "반납 완료했습니다. 이용해주셔서 감사합니다.\n"; // 반납 완료 문구 출력

			fclose(fman);
			break;

		default:
			cout << "잘못된 메뉴를 선택했습니다. 다시 입력해주세요" << endl; // menu에 1~11이 아닌 다른 값을 입력하면, 없는 시스템이므로 오류 문구 출력
			break;
		}
	}

	return 0;
}