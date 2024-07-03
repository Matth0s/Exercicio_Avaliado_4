#______________________________________//_______________________________________
SRC_DIR		=	./source \
				./source/atletas \
				./test
SRC			=	Menu.cpp \
				Sistema.cpp \
				Atleta.cpp \
				AtletaGinastica.cpp \
				AtletaNatacao.cpp \
				AtletaVolei.cpp \
				AtletaBasquete.cpp \
				AtletaJudo.cpp \
				AtletaFutebol.cpp
SRC_MAIN	=	main.cpp
SRC_TESTE	=	teste_main.cpp

OBJ_DIR		=	./build
OBJ			=	$(SRC:%.cpp=$(OBJ_DIR)/%.o)
OBJ_MAIN	=	$(SRC_MAIN:%.cpp=$(OBJ_DIR)/%.o)
OBJ_TESTE	=	$(SRC_TESTE:%.cpp=$(OBJ_DIR)/%.o)

INCD_DIR	=	-I ./include \
				-I ./include/atletas
INCD		=	Menu.h \
				No.h \
				Arvore.h \
				Sistema.h \
				Atleta.h \
				AtletaGinastica.h \
				AtletaNatacao.h \
				AtletaVolei.h \
				AtletaBasquete.h \
				AtletaJudo.h \
				AtletaFutebol.h

#______________________________________//_______________________________________
vpath %.cpp $(SRC_DIR)
vpath %.h $(INCD_DIR)
#______________________________________//_______________________________________
TARGET	=	main

TESTE	=	teste

CFLAGS	=	-Wall -Wextra -Werror -std=c++11 -fsanitize=address

CC		=	g++

RM		=	rm -rf
#______________________________________//_______________________________________
all:			$(TARGET)

$(TARGET):	$(OBJ) $(OBJ_MAIN)
	$(CC) $(CFLAGS) $(OBJ) $(OBJ_MAIN) -o $(TARGET)
	@echo "\033[1;32m"
	@echo "/ ************************************ \\"
	@echo "|          Executavel Criado           |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"

$(TESTE):	$(OBJ) $(OBJ_TESTE)
	$(CC) $(CFLAGS) $(OBJ) $(OBJ_TESTE) -o $(TESTE)
	@echo "\033[1;32m"
	@echo "/ ************************************ \\"
	@echo "|          Executavel Criado           |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"

$(OBJ_DIR)/%.o:	%.cpp $(INCD)
	mkdir -p $(OBJ_DIR)
	$(CC) $(INCD_DIR) $(CFLAGS) $< -c -o $@
#______________________________________//_______________________________________
clean:
	$(RM) $(OBJ_DIR)
	@echo "\033[1;31m"
	@echo "/ ************************************ \\"
	@echo "|        Arquivos .o Deletados         |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"

fclean:		clean
	$(RM) $(TARGET) $(TESTE)
	@echo "\033[1;31m"
	@echo "/ ************************************ \\"
	@echo "|         Executavel Deletado          |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"
#______________________________________//_______________________________________
re:			fclean all

ret:		fclean $(TESTE)
#______________________________________//_______________________________________
git:
	git add .
	git status
	git commit -m "$m"

.PHONY:		all clean fclean re ret git
