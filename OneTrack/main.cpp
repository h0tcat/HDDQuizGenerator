#include <iostream>
#include <string>
#include <random>

int main(int argc,char** argv){

    if(argc != 2){
        std::cerr << "Usage: OneTrack quizAmount" << std::endl;
    }else{

        //乱数の生成に必要なものを用意する       
        std::mt19937 engine;
        std::uniform_int_distribution<> dist(0, 512);

        int amountQuiz = std::stoi(argv[1]);

        std::string text;

        for(int i = 0; i < amountQuiz; i++){
            std::cout << "\n\n問題: " << i+1 << "\n\n" << "1件: " << dist(engine) << "バイトのブロックか因数: 10 で10万件のデータを\n記録するのに必要なシリンダ数は？" << std::endl;
        }
    }

    return 0;
}