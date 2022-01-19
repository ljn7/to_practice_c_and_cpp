#include <iostream>
int add(int a, int b) {
    return a+b;
}
int prod(int a, int b) {
    return a*b;
}
int quot(int a, int b) {
    return a/b;
}
int diff(int a, int b) {
    return a-b;

}
class sum{
    public:
    int student;
    char *studentID;
    int sum1(int a, int b) {
        int result = a + b;
        std::cout<<result<<std::endl;
    }
};
int main(){
   /* int x, y, c;
    std::cin>>x>>y>>c;
    int (*choose[4]) (int, int) = {add, prod, quot, diff};
    int result=choose[c] (x, y);
    std::cout<<result;*/
    int c = 10, d = 20;
    int f = 30, g = 20;
    sum students;
    students.studentID = "Testing";
    sum stu2;
    stu2.studentID = "Testing2";
    std::cout<<students.studentID<<"\n"<<stu2.studentID<<std::endl;
    sum fun1, fun2;
    fun1.sum1(c, d);

    fun2.sum1(f, g);

}