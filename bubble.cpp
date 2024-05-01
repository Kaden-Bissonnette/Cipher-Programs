#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &vec) {
  int size = vec.size();
  for (int i = 0; i < size; i++) {
    cout << vec[i] << ", ";
  }
  cout << endl;
}

// need the & before vec to include the actual vector instead of a copy of hte
// vector
void bubbleSort(vector<int> &vec) {
  int size = vec.size();
  while (true) {
    int swap = 0;
    for (int i = 0; i < size - 1; i++) {
      if (vec[i] > vec[i + 1]) {
        int firstVal = vec[i];
        int nextVal = vec[i + 1];
        vec[i] = nextVal;
        vec[i + 1] = firstVal;
        swap++;
      }
    }
    if (swap == 0) {
      break;
    }
  }
}

int main() {
  vector<int> data = {5, 1, 4, 2, 8};

  cout << "Beginning Vector: ";
  printVector(data);

  bubbleSort(data);

  cout << "Sorted Vector in Ascending Order: ";
  printVector(data);
}
