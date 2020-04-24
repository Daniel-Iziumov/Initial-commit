/**
 * @file lib.c
 * @brief Файл з реалізацією функцій оперування тваринами
 *
 * @author Davydov V.
 * @date 14-apr-2020
 * @version 1.3
 */

#include "lib.h"

char *get_animal_type_name(enum animal_type type)
{
	char *result;
	switch (type) {
	case CAT:
		result = "Кіт";
		break;
	case DOG:
		result = "Собака";
		break;
	case COW:
		result = "Корова";
		break;
	case PIG:
		result = "Свиня";
		break;
	default:
		result = "N/A";
	}
	return result;
}

struct animal generate_animal()
{
	struct animal result;
	result.height = rand() % INT8_MAX;
	result.weight = rand() % INT8_MAX;
	result.type = rand() % ANIMAL_TYPE_COUNT;
	return result;
}

void show_animals(struct animal animals[], unsigned int count)
{
	for (unsigned int i = 0; i < count; i++) {
		printf("Інформація про тварину №%02d: ", i + 1);
		printf("%s: зріст = %d см, маса = %d гр. \n",
		       get_animal_type_name(animals[i].type), animals[i].height,
		       animals[i].weight);
	}
}