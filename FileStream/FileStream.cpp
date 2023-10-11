#include<stdio.h>
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std; // std 사용

struct stTest
{
	string m_name=" "; //문자 " "
	int m_math = 0;
	int m_eng = 0;
	int m_lang = 0;
	stTest(string name, int math, int eng, int lang) : //초기화
		m_name(name), m_math(math), m_eng(eng), m_lang(lang) {

	}
		void printTest()
	{
		printf("name=%s,math=%d, eng=%d,lang=%d\n", m_name.c_str(), m_math, m_eng, m_lang); //스트링은  .c_str()
	}
};

void pushStTest(vector<stTest>&vecTest, string& str) //함수를 만들어서 메인 함수 안의 변수를 가져온다.
{
	stringstream ssTest(str); // s 스트림 을 이용해서 변수를 만들고
	string line; //변수를 담을 다른 변수를 선언
		string aaN="";
		int bb=0, cc=0, dd=0;
	while (getline(ssTest, line, ',')) // ','를  기준으로 줄바꿈
	{
		line.erase(remove(line.begin(), line.end(), ' '), line.end()); // 띄어쓰기를 제거해준다.
		//printf("[%s]\n", line.c_str());

		int aaL=line.find('=')+1;
		string dline = line.substr(0, aaL-1);
		string cline = line.substr(aaL, line.length() - aaL);

		if (dline == "name")
		{
			aaN = cline;
		}
		else if (dline == "math")
		{
			size_t index = 0;
			int result = stoi(cline, &index);
			bb = result;
		}
		else if (dline == "eng")
		{
			size_t index = 0;
			int result = stoi(cline, &index);
			cc = result;
		}
		else if (dline == "lang")
		{
			size_t index = 0;
			int result = stoi(cline, &index);
			dd = result;
		}


	}
		printf("name=%s,math=%d, eng=%d,lang=%d\n", aaN.c_str(), bb,cc,dd); 

}

int main()
{

	//파일 쓰기 ==========================================
	//std::ofstream writeFile;
	//writeFile.open("test.txt");  // "test.txt" 파일을 연다(파일이 없다면 생선한다.)
	//std::string strTest = "test 1234 abcd 입니다.\n";
	//writeFile.write(strTest.c_str(), strTest.size());
	//writeFile.write(strTest.c_str(), strTest.size());

	//writeFile.close();		 // 파일을 열었으면 반드시 닫기 실행


	
	
	//파일 읽기===================================================
	std::ifstream readFile;
	readFile.open("test.txt");

	vector<stTest> vecTest;


	//stTest aaa("aaa", 80, 60, 70);
	//vecTest.push_back(aaa);
	//stTest bbb("bbb", 90, 30, 40);
	//vecTest.push_back(bbb);
	//stTest ccc("ccc", 20, 90, 80);
	//vecTest.push_back(ccc);

	if (readFile.is_open())
	{
		while (!readFile.eof())
		{

			std::string str; //문자열 str
			std::getline(readFile, str); // readFile 의 텍스트를 한 줄 읽어서 str 에 넣는다.
			//printf("str=%s\n", str.c_str()); //출력
			
			pushStTest(vecTest, str); //함수를 만들어서 메인 함수의 문자를 가져간다.
		
			//int pointF = str.find('=')+1; // = 까지의 길이를 포인트 f에 넣는다. 
			//std::string aaa=str.substr(pointF, str.length() - pointF); //포인트 f에서부터 전체길이에서 포인트 에프를 뺀 길이. 즉 포인트 에프제외 문자
			//size_t index = 0; //인덱스 선언
			////숫자로 바꾸기
			//int result = stoi(aaa, &index); //리절트값에 스트링 투 인트 값을 넣는다. 
			//std::string bbb = str.substr(0, pointF-1); //bbb 에는 차별을 둘 문자 정보를 구한다.

			//if (bbb == "a")
			//{
			//	test.a = result;
			//}
			//if (bbb == "b")
			//{
			//	test.b = result;
			//}
		/*	int inputName = str.find('=');
			int endName = str.find(',');
			string Namename = str.substr(inputName + 1, endName-1-inputName);


			string MathL = str.substr(inputName+1, str.length()-inputName);
			int inputMath = MathL.find('=');
			string EngL = MathL.substr(inputMath, MathL.length() - inputMath);
			*/
			//=======================================================================
			
			//=======================================================================
		}
		readFile.close();
	}
			

	for (stTest& test : vecTest)
	{
		test.printTest();
	}



			
	
}