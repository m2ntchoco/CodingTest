# Makefile

CXX = g++             # 컴파일러 설정
CXXFLAGS = -std=c++11  # C++11 표준 사용
SRC = Main.cpp GraphicEditor.cpp  # 소스 파일 목록
OBJ = $(SRC:.cpp=.o)  # 오브젝트 파일 목록
EXEC = Main            # 실행 파일 이름

# 디폴트 타겟
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)  # 오브젝트 파일을 링크하여 실행 파일 생성

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@  # 소스 파일을 오브젝트 파일로 컴파일

clean:
	rm -f $(OBJ) $(EXEC)  # 생성된 오브젝트 파일 및 실행 파일 삭제
