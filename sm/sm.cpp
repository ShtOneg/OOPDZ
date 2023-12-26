#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> list, int first, int last);

int main()
{
    setlocale(LC_ALL, "");
    vector<int> nums{ 78, 65, 3, 2, 1, 8 };
    vector<int> nums1;

    cout << "Вектор до сортировки: ";
    for (auto i : nums) {
        cout << i << " ";
    }
    cout << endl;

    nums1 = quickSort(nums, 0, nums.size() - 1);

    cout << "Вектор после сортировки: ";
    for (auto i : nums1) {
        cout << i << " ";
    }
    cout << endl;

}

vector<int> quickSort(vector<int> list, int first, int last) {
    if (first < last) {
        int i = first;
        int pivot = last;

        while (i < pivot) {
            if (list[i] > list[pivot]) {
                if (i != pivot - 1) {
                    swap(list[pivot - 1], list[pivot]);
                }
                swap(list[i], list[pivot]);
                pivot--;
            }
            else i++;
        }
        quickSort(list, first, pivot - 1);
        quickSort(list, pivot + 1, last);
    }
    return list;
}

