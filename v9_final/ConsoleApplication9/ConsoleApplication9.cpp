#include "List.h"
#include "array.h"
#include "Train.h"
#include "Sortirovky.h"




int main(){
	List<int>list;
	list.PushStart(5);
	list.PushEnd(4);
	list.PushEnd(2);
	list.PushEnd(3);
	list.PushEnd(1);
	list.PushEnd(23);
	//list.Delet(5);
	list.sort();
	cout << list;

}



/*int xin;
Arr<Train> vokzal;
ifstream in("Text1.txt");
ofstream out("Text2.txt");
in >> vokzal;
vokzal.sort(Train::compN);
out << vokzal;
cin >> xin;
Train t("", xin, 0);
cout << "\n"<<xin<<" " <<vokzal[vokzal.poisk(t)];
*/




/*int arr[5] = { 1, 2 ,3,4,5 };
Arr <int> myArr(arr, 5);
cout << myArr;
try {
	myArr[0] = 10;
	myArr[1] = 20;
	myArr[4] = 100;
	myArr[3] = -5;
	myArr[20] = 7;
}
catch (int n) {
	if (n == 1)
		cout << "bad index\n";
}
cout << myArr;
cout << "\n";
ifstream in("Text.txt");
in >> myArr;
myArr.sort();
cout << myArr,"\n";
*/