# 2027 Return Preparation

2027년 1학기 컴퓨터공학과 복학 전 CS / Security 학습 기록.

## 학습 기록

현재 저장된 기록은 C 기초 실습이다. 아래 날짜는 기존 파일명을 기준으로 하며, 기록이 있다는 사실이 전체 주제의 학습 완료를 의미하지는 않는다.

| 기록 | 내용 | 실행 예제 |
| --- | --- | --- |
| [11/04](November/11_04/README.md) | 세 정수의 최댓값: 독립 조건문, 분기, 삼항 연산자 | [C 기초 실습](November/11_04/max.c) |
| [11/07](November/11_07/README.md) | 11/06 변수·주소·포인터와 11/08 배열 실습을 함께 정리 | [C 기초 실습](November/11_07/pointers_and_arrays.c) |
| [11/09](November/11_09/README.md) | 값 전달, 포인터를 통한 변경, swap | [C 기초 실습](November/11_09/value_and_swap.c) |
| [11/11](November/11_11/README.md) | 배열과 포인터, `sizeof`, 배열 길이 전달 | [배열과 포인터](November/11_11/array_pointers.c) |
| [11/13](November/11_13/README.md) | 문자열 함수와 표준 입력 | [문자열 함수](November/11_13/string_functions.c), [이름 입력](November/11_13/read_name.c), [이름 비교](November/11_13/compare_names.c) |
| [11/25](November/11_25/README.md) | 포인터, 부분 배열, 배열 범위 확인 | [부분 배열의 합](November/11_25/array.c) |

## C 실습 실행

GCC가 설치된 환경에서 저장소 루트를 기준으로 실행한다. C11 표준 라이브러리만 사용한다.

날짜별 C 파일은 각각 별도로 컴파일한다. 다음은 11/25 예제의 실행 방법이다.

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic -Werror November/11_25/array.c -o array
```

- Linux/macOS에서는 `./array`를 실행한다.
- Windows PowerShell에서는 `.\array.exe`를 실행한다.

11/04·11/07·11/09 예제는 검증이 끝나면 `All checks passed.`를 출력한다. 검증에 `assert`를 사용하므로 `-DNDEBUG` 옵션은 지정하지 않는다.

## 학습 예정 분야

기존 관심 분야를 유지한다. 아래 목록은 완료 목록이 아니다.

- C / C++
- Data Structures
- Discrete Mathematics
- Linux
- System Programming
- Networking
- Web
- Security

## 기록 작성 방식

월별 폴더 아래에 `MM_DD/`를 만들고, 그 안에 `README.md`와 해당 날짜의 C 파일을 함께 둔다.
날짜별 README에서 같은 폴더의 코드를 링크한다.
새 기록을 추가할 때 README의 표에도 링크를 추가한다.

```markdown
# MM/DD — 학습 주제

## 학습 내용
- 개념과 짧은 예제

## 확인한 결과
- 실행 명령, 예상 결과와 실제 결과
- 오류가 있었다면 원인과 수정 내용

## 남은 질문
- 다음에 확인할 내용
```
