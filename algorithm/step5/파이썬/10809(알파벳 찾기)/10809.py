s = list(input())

abd ='abcdefghijklmnopqrstuvwxyz'

for i in abd:
    if i in s: #현재 알파벳 'i가 입력된 문자열 's'에 등장하는지 확인
        print(s.index(i), end=' ') #알파벳 'i'가 등장한 경우 's.index(i)를 상용하여
                                    # 해당 알파벳의 첫 등장 인덱스를 출력합니다.
                                    #'end= ' ''를 사용하여 출력 결과를 공백으로 구분
    else:
        print(-1,end=' ')