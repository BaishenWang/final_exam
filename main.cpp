#include <iostream>

using namespace std;
unsigned int number_of_items;
unsigned int number_of_trucks;
unsigned int number_of_pallets;
unsigned int number_of_boxes;
unsigned int leftover_number_of_items;
unsigned int leftover_number_of_pallets;
unsigned int leftover_number_of_boxes;
int main() {
    cout << "How many items does the factory produce?" << endl;
    cout << "To ship ";
    cin >> number_of_items;
    number_of_boxes = number_of_items / 16;
    number_of_pallets = number_of_items / 16 / 12;
    number_of_trucks = number_of_items / 16 / 12 / 8;






    cout << " items, we need:" << endl;
    cout << "Number of trucks: " << number_of_trucks << endl;
    cout << "Number of pallets: " << number_of_pallets << endl;
    cout << "Number of boxes " << number_of_boxes << endl << endl;
    if(number_of_items >= 16){
        leftover_number_of_items = number_of_items % 16;
    }else leftover_number_of_items = number_of_items;


    if(number_of_items >= (16*12)) {
        leftover_number_of_boxes = number_of_items % (16 * 12);
        if (leftover_number_of_boxes >= (16)) {
            leftover_number_of_boxes = leftover_number_of_boxes % 16;
        }
    }   else leftover_number_of_boxes = 0;
    if(number_of_items >= (16*12*8)){
        leftover_number_of_pallets = number_of_items % (16 * 12 * 8);
        if (leftover_number_of_pallets >= (16*12)){
            leftover_number_of_pallets = leftover_number_of_pallets % (16*12);
            if(leftover_number_of_pallets >= 16){
                leftover_number_of_pallets = leftover_number_of_pallets % 16;
            }
        }
    } else leftover_number_of_pallets = 0;


    cout << "Number of leftover items: " << leftover_number_of_items << endl;
    cout << "Number of leftover boxes: " << leftover_number_of_boxes << endl;
    cout << "Number of leftover pallets: " << leftover_number_of_pallets << endl;

    return 0;
}
