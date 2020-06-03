#include <iostream>
#include <future>
#include <thread>

int main(void){
  std::cout <<" paiza io" <<std::flush;
  
  std::future<int> r ;
  
  r.set( 1 );
  
  return (int)false?true:false;
  
  }