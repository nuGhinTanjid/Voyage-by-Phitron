#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int uid;
    char name[101];
    char sec;
    int tmarks;

    
    
};

int main(){

    int testcase;
    cin>>testcase;
    while(testcase--){

        Student students[3];
        for(int i=0; i<3; i++){
            cin>>students[i].uid;
            cin>>students[i].name;
            cin>>students[i].sec;
            cin>>students[i].tmarks;
        }

        Student flag= students[0]; 
                for (int i = 1; i < 3; ++i)
        {
            if (students[i].tmarks > flag.tmarks || (students[i].tmarks == flag.tmarks && students[i].uid < flag.uid))
            {
                flag = students[i];
            }
        }
         cout << flag.uid << " " << flag.name << " " << flag.sec << " " << flag.tmarks << endl;


    }

return 0;
}


/*#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int uid;
    char name[101];
    char sec;
    int tmarks;
};

int main() {

    int testcase;
    cin >> testcase;
    while (testcase--) {

        Student students[3];
        for (int i = 0; i < 3; i++) {
            cin >> students[i].uid;
            cin >> students[i].name;
            cin >> students[i].sec;
            cin >> students[i].tmarks;
        }

        Student flag = students[0];
        for (int i = 1; i < 3; ++i) {
            if (students[i].tmarks > flag.tmarks || (students[i].tmarks == flag.tmarks && students[i].uid < flag.uid)) {
                flag = students[i];
            }
        }
        cout << flag.uid << " " << flag.name << " " << flag.sec << " " << flag.tmarks << endl;
    }

    return 0;
}
*/
