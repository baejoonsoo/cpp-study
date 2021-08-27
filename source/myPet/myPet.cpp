#include <iostream>

class Animal {
    private:
        int food;
        int weight;
    public:
        void setAnimal(int _food, int _weight){
            food=_food;
            weight=_weight;
        }
        void increaseFood(int inc){
            food+=inc;
            weight+=(inc/3);
        }
        void viewAnimal(){
            std::cout << "이 동물의 food   : " << food << std::endl;
            std::cout << "이 동물의 weight : " << weight << std::endl;
        }
};

int main(){

    while(true){
        std::cout<<"1. 동물 추가하기"<<std::endl;
        std::cout<<"2. 놀기"<<std::endl;
        std::cout<<"3. 상태보기"<<std::endl;

        int input;
        std::cin>>input;

        switch (input)
        {
            case 1:
                
            break;
        
        default:
            break;
        }
        
    }    
}