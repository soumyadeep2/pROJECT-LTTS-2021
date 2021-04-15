PROJ_name = maincpp

SRC =src\input_year.c \
src\isLeapYear.c\
src\leapYears.c\
src\todayOf.c \

src\long days.c\
src\ calendar.c\
src\getDayNumber.c\
src\getName.c \



SRC = src
INC = inc

$(PROJ_NAME): $(SRC)
       	gcc $(SRC)  -I$(INC) -o maincpp
  
  run:
        $(PROJ_NAME)
