//
//  Created by Macbook  on 8/19/17.
//  Copyright © 2017 Macbook . All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;
class ClassName{
    // Khai báo thuộc tính: giống khai báo biến
    // Khai báo phương thức: Giống khai báo hàm
    // private, protected, public
    // private: Chỉ sử dụng trong class
    // public: Bên ngoài có thể sử dụng được.
    
private:
    string name;
    void output();
public:
    string address;
    void input();
};
int main(int argc, const char * argv[]) {
    
    ClassName cl; // Cách khơi tạo 1 đối tượng
    cl.address; // Cách truy xuất đến 1 thuộc tính của 1 class
    cl.input(); // Cách truye xuất đến 1 phương thức của 1 class
    system("exit");
    return 0;
}