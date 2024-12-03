#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Tree {
    char name[50];
    double seedPrice;
    char season[100];
    char category[20];
};

const int numTrees = 50;
struct Tree trees[] = {
    {"Mango", 50.0, "Monsoon (June to August)", "Fruit Plant"},
    {"Banana", 10.0, "Year-round (Best in rainy season)", "Fruit Plant"},
    {"Papaya", 5.0, "Rainy Season", "Fruit Plant"},
    {"Guava", 10.0, "Monsoon Season", "Fruit Plant"},
    {"Jackfruit", 20.0, "Rainy Season", "Fruit Plant"},
    {"Litchi", 50.0, "Winter (November to February)", "Fruit Plant"},
    {"Pineapple", 20.0, "Rainy Season", "Fruit Plant"},
    {"Lemon", 10.0, "Monsoon Season", "Fruit Plant"},
    {"Pomegranate", 30.0, "Rainy Season", "Fruit Plant"},
    {"Sapodilla", 20.0, "Monsoon Season", "Fruit Plant"},
    {"Olive", 100.0, "Rainy Season", "Fruit Plant"},
    {"Custard Apple", 10.0, "Rainy Season", "Fruit Plant"},
    {"Coconut", 30.0, "Monsoon Season", "Fruit Plant"},
    {"Starfruit", 10.0, "Rainy Season", "Fruit Plant"},
    {"Cashew", 30.0, "Monsoon Season", "Fruit Plant"},
    {"Krishnachura", 20.0, "Spring (March to April)", "Flower Plant"},
    {"Sheuli", 10.0, "Year-round", "Flower Plant"},
    {"Radhachura", 15.0, "Spring (February to April)", "Flower Plant"},
    {"Kanchan", 20.0, "Spring (March to April)", "Flower Plant"},
    {"Jarul", 10.0, "Spring (March to April)", "Flower Plant"},
    {"Kadam", 10.0, "Spring (March to April)", "Flower Plant"},
    {"Shimul", 15.0, "Spring (March to April)", "Flower Plant"},
    {"Palash", 10.0, "Spring (March to April)", "Flower Plant"},
    {"Guloncho", 10.0, "Year-round", "Flower Plant"},
    {"Bokul", 10.0, "Year-round", "Flower Plant"},
    {"Ratnagiri", 10.0, "Spring (March to April)", "Flower Plant"},
    {"Sada-Chapa", 20.0, "Spring (March to April)", "Flower Plant"},
    {"Chandni", 20.0, "Spring (March to April)", "Flower Plant"},
    {"Akondo", 10.0, "Year-round", "Flower Plant"},
    {"Champa", 10.0, "Year-round", "Flower Plant"},
    {"Kodom", 10.0, "Spring (March to April)", "Flower Plant"},
    {"Madhabilata", 20.0, "Spring (March to April)", "Flower Plant"},
    {"Brinjal", 20.0, "Late winter to early spring (December to February)", "Vegetable Plant"},
    {"Tomato", 30.0, "Late winter to early spring (December to February)", "Vegetable Plant"},
    {"Cauliflower", 70.0, "Late summer to early autumn (July to September)", "Vegetable Plant"},
    {"Cabbage", 70.0, "Late summer to early autumn (July to September)", "Vegetable Plant"},
    {"Carrot", 40.0, "Late summer to early autumn (July to September)", "Vegetable Plant"},
    {"Radish", 30.0, "Late summer to early autumn (July to September)", "Vegetable Plant"},
    {"Spinach", 25.0, "Late winter to early spring (December to February)", "Vegetable Plant"},
    {"Okra", 30.0, "Late spring to early summer (March to May)", "Vegetable Plant"},
    {"Bitter Gourd", 25.0, "Late spring to early summer (March to May)", "Vegetable Plant"},
    {"Snake Gourd", 25.0, "Late spring to early summer (March to May)", "Vegetable Plant"},
    {"Bean", 30.0, "Late spring to early summer (March to May)", "Vegetable Plant"},
    {"Pumpkin", 30.0, "Late spring to early summer (March to May)", "Vegetable Plant"},
    {"Cucumber", 30.0, "Late spring to early summer (March to May)", "Vegetable Plant"},
    {"Bell Pepper", 40.0, "Late winter to early spring (December to February)", "Vegetable Plant"},
    {"Chili Pepper", 25.0, "Late winter to early spring (December to February)", "Vegetable Plant"},
    {"Lenol", 40.0, "Late autumn to early winter (October to November)", "Vegetable Plant"},
    {"Spinach", 25.0, "Late summer to early autumn (July to September)", "Vegetable Plant"}};

void displayWelcome() {
    printf("==============================\n");
    printf("  Welcome to Tree_Info_Hub\n");
    printf("==============================\n");
}

void displayTreeNames(int category) {
    char *categoryName;
    if (category == 1)
        categoryName = "Flower Plants";
    else if (category == 2)
        categoryName = "Fruit Plants";
    else
        categoryName = "Vegetable Plants";

    printf("==============================\n");
    printf("    %s\n", categoryName);
    printf("==============================\n");

    for (int i = 0; i < numTrees; ++i) {
        if ((category == 1 && strcmp(trees[i].category, "Flower Plant") == 0) ||
            (category == 2 && strcmp(trees[i].category, "Fruit Plant") == 0) ||
            (category == 3 && strcmp(trees[i].category, "Vegetable Plant") == 0)) {
            printf("%s\n", trees[i].name);
        }
    }

    printf("==============================\n");
    printf("Enter the tree name for more details: ");
    char selectedTree[50];
    fgets(selectedTree, 50, stdin);
    selectedTree[strcspn(selectedTree, "\n")] = '\0';
    displayTreeInfo(selectedTree);
}

void displayTreeInfo(const char *treeName) {
    printf("==============================\n");
    printf("      Tree Information\n");
    printf("==============================\n");

    int found = 0;
    for (int i = 0; i < numTrees; ++i) {
        if (strcmp(trees[i].name, treeName) == 0) {
            printf("Name: %s.\n", trees[i].name);
            printf("Seed Price: %.2f BDT.\n", trees[i].seedPrice);
            printf("Season: %s.\n", trees[i].season);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Sorry! Tree not found.\n");
    }

    printf("==============================\n");
}

int main() {
    displayWelcome();

    while (1) {
        printf("Enter the searching option type:\n");
        printf("Option 1. Search tree by Category\n");
        printf("Option 2. Search tree by Name\n");
        printf("Option 3. Exit\n");
        printf("Enter your choice: ");

        int option;
        scanf("%d", &option);
        getchar();

        if (option == 1) {
            printf("Choose an option:\n");
            printf("1. Flower Plants\n");
            printf("2. Fruit Plants\n");
            printf("3. Vegetable Plants\n");
            printf("Enter your choice (1-3): ");

            int choice;
            scanf("%d", &choice);
            getchar();

            if (choice >= 1 && choice <= 3) {
                displayTreeNames(choice);
            } else {
                printf("Invalid choice. Please try again.\n");
            }
        } else if (option == 2) {
            printf("Enter the tree name to search: ");
            char searchTerm[50];
            fgets(searchTerm, 50, stdin);
            searchTerm[strcspn(searchTerm, "\n")] = '\0';
            displayTreeInfo(searchTerm);
        } else if (option == 3) {
            printf("Thank you for using Tree_Info_Hub!\n");
            break;
        } else {
            printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}
