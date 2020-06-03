#include <iostream>
#include <future>
#include <thread>

int main(void){
  std::cout <<" paiza io" <<std::flush;
  
  std::future<int> r ;
  
  int a = r.get();
  
  return (int)false?true:false;
  
  }