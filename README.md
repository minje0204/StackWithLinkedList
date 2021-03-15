## Implement the stack with the list_head.h
linux커널에 있는 **list_head.h**를 이용해서 **stack linked list**로 구현해보기

### Problem Specification


- `stack.c`에서 정의된 `stack` instance와 `struct entry`를 이용해서 stack을 구현한다.
  - What is [Stack](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))?
  - `stack.c`에 정의한 `entry` 구조체 변경하지 말고 구현해야한다.
- `stack.c`에서 `push_stack()`, `pop_stack()`, `dump_stack()` 3개 함수를 완성한다.
  - `dump_stack()`은 `stack`에 저장되어 있는 모든 contents를 print하는 함수이다. `list_for_`이 붙은 함수 중 하나를 이용해서 구현한다.
- `struct entry`(stack에 저장되는 컨텐츠를 담고있는 틀)를 array를 할당하거나 정의해서 저장해 놓으면 안된다. 대신, 각 entry는 `malloc`과 `free`를 이용해서 자유롭게 할당 해제 가능하다.
- `list_head`타입의 `prev`나 `next`에 직접 **access 하지 않는다**. 모든 entry들의 수정은 list_head 라이브러리 구현된 함수를 이용한다.


- Linux list_head.h에 대한 설명들
  - Introduction: https://kernelnewbies.org/FAQ/LinkedLists
  - Kernel API manual: https://www.kernel.org/doc/html/v4.15/core-api/kernel-api.html
  - Advanced explanation: https://medium.com/@414apache/kernel-data-structures-linkedlist-b13e4f8de4bf


### 출처

