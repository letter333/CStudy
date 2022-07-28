#include <stdio.h>
struct Character2D
{
	int x;
	int y;
} typedef Character2D;

struct Character3D
{
	int x;
	int y;
	int z;
} typedef Character3D;

struct Animal
{
	char type[20];
	int age;

} typedef Animal;

struct Person
{
	char name[20];
	int age;
} typedef Person;

void printStruct(Person p) {
	printf("이름 : %s, 나이 : %d\n", p.name, p.age);
}

Person returnStruct() {
	Person person;
	strcpy(person.name, "홍길동");
	person.age = 25;

	return person;
}

int main() {
	// 1 ~ 7
	Character2D character1 = { 15, 33 };
	Character2D character2 = { .x = 21, .y = 32 };

	printf("character1의 x, y값 : %d %d\n", character1.x, character1.y);
	printf("character2의 x, y값 : %d %d\n", character2.x, character2.y);
	
	Character3D character3;
	character3.x = 38;
	character3.y = 54;
	character3.z = 12;
	Character3D character4;
	printf("character4의 x, y, z좌표 입력 : ");
	scanf_s("%d %d %d", &character4.x, &character4.y, &character4.z);

	printf("character3의 x, y, z값 : %d %d %d\n", character3.x, character3.y, character3.z);
	printf("character4의 x, y, z값 : %d %d %d\n", character4.x, character4.y, character4.z);


	Animal animal1;
	Animal animal2 = { .type = "강아지", .age = 3};

	printf("animal1의 type입력 : ");
	rewind(stdin);
	gets(animal1.type);
	printf("animal1의 age입력 : ");
	scanf_s("%d", &animal1.age);

	printf("animal1의 타입 : %s, 나이 : %d\n", animal1.type, animal1.age);
	printf("animal2의 타입 : %s, 나이 : %d\n", animal2.type, animal2.age);

	Person person1;
	Person person2;

	printf("person1의 이름 입력 : ");
	rewind(stdin);
	gets(person1.name);
	printf("person1의 나이 입력 : ");
	scanf_s("%d", &person1.age);
	
	printf("person2의 이름 입력 : ");
	rewind(stdin);
	gets(person2.name);
	printf("person2의 나이 입력 : ");
	scanf_s("%d", &person2.age);

	printf("person1의 이름 : %s, 나이 : %d\n", person1.name, person1.age);
	printf("person2의 이름 : %s, 나이 : %d\n", person2.name, person2.age);

	Person person3;
	printf("person3의 이름 입력 : ");
	rewind(stdin);
	gets(person3.name);
	printf("person3의 나이 입력 : ");
	scanf_s("%d", &person3.age);
	printStruct(person3);

	Person person4 = returnStruct();
	printf("person4 이름 : %s, 나이 : %d\n", person4.name, person4.age);

	return 0;
}