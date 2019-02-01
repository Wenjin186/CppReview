//
//  main.cpp
//  CppReview
//
//  Created by Wenjin Zhang on 2019/1/31.
//  Copyright © 2019年 Wenjin Zhang. All rights reserved.
//

#include <iostream>
#include <SDL.h>

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, const char * argv[]) {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0){
        std::cout<<"SDL could not initialize!"<<std::endl;
    }
    
    SDL_Window *window = SDL_CreateWindow("Hello", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    
    if (window == NULL){
        std::cout<<"shenmegui"<<std::endl;
        return -1;
    }
    
    SDL_Event windowEvent;
    
    while(true){
        if (SDL_PollEvent(&windowEvent)){
            if (windowEvent.type == SDL_QUIT){
                break;
            }
        }
    }
    
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return EXIT_SUCCESS;
}
