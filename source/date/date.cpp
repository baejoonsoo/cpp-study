#include <iostream>

class Date {
    private:
        int year;
        int month;  // 1 부터 12 까지.
        int day;    // 1 부터 31 까지.

    public:
        void AddYear(int inc){
            year+=inc;
        }
        void AddMonth(int inc){
            month+=inc;

            if(month>12){
                month-=12;
                AddYear(1);
            }

            // if(month>12) AddMonth(0);
        }
        void AddDay(int inc){
            day+=inc;

            int firstHalf=0;
            int multipleOfTwo=0;
            int maxDay=0;

            if(month<8) firstHalf=1;
            if(month%2==1) multipleOfTwo=1;

            if(month==2){
                maxDay=28;
                if(day>28) {
                    day-=28;
                    AddMonth(1);
                }
            }
            else{
                if((firstHalf&&!multipleOfTwo)||(!firstHalf&&multipleOfTwo)){
                    maxDay=31;
                    if(day>31) {
                        day-=31;
                        AddMonth(1);
                    }
                }
                else{
                    maxDay=30;
                    if(day>30) {
                        day-=30;
                        AddMonth(1);
                    }
                }

            }
            // if(day>maxDay) AddDay(0);
        }

        void SetDate(int _year, int _month, int _date){
            year=_year;
            month=_month;
            day=_date;
        }
        void ShowDate(){
            std::cout<<"\n"<<year<<"."<<month<<"."<<day<<std::endl;
        }
};

int main(){
    Date date;

    while (true)
    {
        std::cout<<"\n\n";
        std::cout<<"1. 날짜 설정\n";
        std::cout<<"2. 년도 증감\n";
        std::cout<<"3.   월 증감\n";
        std::cout<<"4. 날짜 증감\n";
        std::cout<<"5. 날짜 보기\n";
        std::cout<<"입력 >> ";

        int input;
        std::cin>>input;

        switch (input) {
            int y,m,d;

            case 1:
                std::cout<<"년도 입력 >> ";
                std::cin>>y;
                std::cout<<"  월 입력 >> ";
                std::cin>>m;
                std::cout<<"날짜 입력 >> ";
                std::cin>>d;
                
                date.SetDate(y,m,d);
                break;
            case 2:
                std::cout<<"[년도]\n";
                std::cout<<"얼마나 증감시킬건가요? >>";
                std::cin>>y;

                date.AddYear(y);
                break;
            case 3:
                std::cout<<"[월]\n";
                std::cout<<"얼마나 증감시킬건가요? >>";
                std::cin>>y;

                date.AddMonth(m);
                break;
            case 4:
                std::cout<<"[일]\n";
                std::cout<<"얼마나 증감시킬건가요? >>";
                std::cin>>d;

                date.AddDay(d);
                break;
            case 5:
                date.ShowDate();
                
                break;


        
        }
        
    }
    

}