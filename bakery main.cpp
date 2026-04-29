#include<stdio.h>
#include<string.h>
#define ADMIN_PASSWORD "hiruu**"
#define BAKER_PASSWORD "bakii"
void admin_power();
void baker_power();
void customer_power();
void initialize_menu();
void display_menu();
void add_item();
void place_order();
void generate_sales_report();
void generate_receipt();
void count_orders();
void initialize_cake_recipes();
void display_cake_recipes();
void add_cake_recipe();
void initialize_coffee_recipes();
void display_coffee_recipes();
void add_coffee_recipe();
void initialize_shake_recipes();
void display_shake_recipes();
void add_shake_recipe();
void initialize_pie_recipes();
void display_pie_recipes();
void add_pie_recipe();

int main(){
	int choice;
	printf("Hello beautiful people\n\n");
	printf("\t\t\t\tWelcome to my BAKERY MANAGEMENT SYSYTEM <3\t\t\t\n\n");
	printf("\t\t\t It is my brand new Bakery shop, which is also a Coffee shop :)\n\n");
	printf("\t\t\t Are you a bakery owner looking to simplify your operations?\n\n");
    printf("\t\t\t Are you a young mom at home looking for delicious new recipes?\n\n");
    printf("\t\t\t Or perhaps you want to create the perfect bakery to delight children?\n");
    printf("\n");
    printf("\t\t\t Our Bakery Management System is designed to meet all these needs and more!\n");
    printf("\n");
    printf("\tWith our system, you can:\n");
    printf(">Manage your bakery’s inventory and customer orders easily\n");
    printf("> Process sales and generate reports effortlessly\n");
    printf("> Share and learn new mouth-watering recipes, perfect for busy moms at home\n");
    printf("> Create a fun and delightful environment to attract children and keep them coming back for more\n");
    printf("\n");
    printf("Lets dive in and discover how this system can help your bakery grow, inspire young moms, and become a children’s favorite spot!\n");
   printf("\t\t\t\t\t:)-----------------:)");
   printf("\n\nNow tell me who you are??\n");
   printf("Are you an intruder '-'\n");
   printf("just kidding :)\n");
   printf("1. Admin\n");
   printf("2. Customer\n");
   printf("3. Baker\n");
   printf("4. Exit\n");
   printf("Enter your choice:\n");
   scanf("%d",&choice);
   switch(choice){
   	case 1:
   		printf("\nhi, i am the admin, yipppyy\n");
   		admin_power();
   		break;
   		case 2:
   			printf("\n hi, i am the costumer, yum me cake khaye gaaaa\n");
   			customer_power();
   			break;
   			case 3:
   				printf("Hello! i am the Baker\n");
   				printf("I hope you people enjoyed your snacks\n");
   				printf("I will share <<< MY SPECIAL GRANNY S RECIPIES >>>\n");
   				printf("And if my customers want me to improve them, I am here :) ");
   				baker_power();
   				break;
   			case 4:
   				printf("bye bye:)\n");
   				break;
   				default:
   					printf("wrong data entry\n");
   					printf("you are an intruder\n");
   					break;

   }



return 0;
}
void admin_power(){
	int choice;
	char password[20];
	printf("enter your admin password\n");
	scanf("%s",password);
	if(strcmp(password,ADMIN_PASSWORD)==0){
	do{
	printf("\n\nnow i have the powers of admin\n");
	printf("Choose the superpowers i want\n");
	printf("\t\t1. initialize menu\n");
	printf("\t\t2. Display menu\n");
	printf("\t\t3. Add items if you wish to spoil your beloved customers\n");
	printf("\t\t4. Generate sales report\n");
	printf("\t\t5. Generate Receipt\n");
	printf("\t\t6. Count the number of orders\n");
	printf("\t\t7. Logging out\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			initialize_menu();
			break;
			case 2:
				display_menu();
				break;
				case 3:
					add_item();
					break;
					case 4:
						generate_sales_report();
						break;
						case 5:
							generate_receipt();
							break;
							case 6:
								count_orders();
								break;
								case 7:
								    printf("Logging out\n");
					             	return;
					             	default:
					             	printf("invalid choice, try again\n");
							}
	}
    while(1);
             }
            else{
	             printf("incorrect password\n");
        }
}

void baker_power() {
	int choice;
	char password[20];
	printf("Enter your baker password:\n");
	scanf("%s", password);
	if (strcmp(password, BAKER_PASSWORD) == 0) {
    do {
        printf("\n=== Baker Power ===\n");
        printf("\t\t1. Initialize Cake Recipes\n");
        printf("\t\t2. Display Cake Recipes\n");
        printf("\t\t3. Add a Cake Recipe\n");
        printf("\t\t4. Initialize Coffee Recipes\n");
        printf("\t\t5. Display Coffee Recipes\n");
        printf("\t\t6. Add a Coffee Recipe\n");
        printf("\t\t7. Initialize Shake Recipes\n");
        printf("\t\t8. Display Shake Recipes\n");
        printf("\t\t9. Add a Shake Recipe\n");
        printf("\t\t10. Initialize Pie Recipes\n");
        printf("\t\t11. Display Pie Recipes\n");
        printf("\t\t12. Add a Pie Recipe\n");
        printf("\t\t13. Exit Baker Power\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                initialize_cake_recipes();
                break;
            case 2:
                display_cake_recipes();
                break;
            case 3:
                add_cake_recipe();
                break;
            case 4:
                initialize_coffee_recipes();
                break;
            case 5:
                display_coffee_recipes();
                break;
            case 6:
                add_coffee_recipe();
                break;
            case 7:
                initialize_shake_recipes();
                break;
            case 8:
                display_shake_recipes();
                break;
            case 9:
                add_shake_recipe();
                break;
            case 10:
                initialize_pie_recipes();
                break;
            case 11:
                display_pie_recipes();
                break;
            case 12:
                add_pie_recipe();
                break;
            case 13:
                printf("Exiting Baker Power...\n");
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }while (1);
}
 else {
		printf("Incorrect password.\n");
	}
}


void customer_power(){
	int choice;
	do{

	printf("\n\nI have customer powers now\n");
	printf("Choose the superpowers i want\n");
	printf("\t\t 1. veiw menu\n");
	printf("\t\t 2. place order\n");
	printf("\t\t 3. exit\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			display_menu();
			break;
			case 2:
				place_order();
				break;
				case 3:
					printf("exit\n");
					return;
					default:
						printf("Invalid option, try again\n");

	}
}while(1);
}


void initialize_menu(){
	FILE *file = fopen("menu.txt", "w");
    if (file == NULL) {
        printf("Error: Could not initialize menu file.\n");
        return;
    }
    fprintf(file, "1 Cake Chocolate 500.00 10\n");
    fprintf(file, "2 Cake Vanilla 450.00 8\n");
    fprintf(file, "3 Shake Mango 250.00 15\n");
    fprintf(file, "4 Shake Strawberry 300.00 12\n");
    fprintf(file, "5 Coffee Cappuccino 150.00 20\n");
    fprintf(file, "6 Coffee Espresso 200.00 18\n");
    fprintf(file, "7 Delight Brownie 120.00 25\n");
    fprintf(file, "8 Delight Donut 80.00 30\n");
    fprintf(file, "9 Cake RedVelvet 600.00 5\n");
    fprintf(file, "10 Cake BlackForest 550.00 7\n");
    fprintf(file, "11 Shake Banana 200.00 10\n");
    fprintf(file, "12 Shake Blueberry 320.00 8\n");
    fprintf(file, "13 Coffee Latte 180.00 15\n");
    fprintf(file, "14 Coffee Mocha 220.00 12\n");
    fprintf(file, "15 Delight Cheesecake 300.00 10\n");
    fprintf(file, "16 Delight Muffin 90.00 20\n");
    fprintf(file, "17 Bread GarlicBread 120.00 25\n");
    fprintf(file, "18 Bread Baguette 150.00 18\n");
    fprintf(file, "19 Pastry Danish 200.00 15\n");
    fprintf(file, "20 Pastry Croissant 180.00 20\n");
    fprintf(file, "21 Pie ApplePie 350.00 10\n");
    fprintf(file, "22 Pie CherryPie 370.00 8\n");

    fclose(file);
    printf("Menu initialized successfully.\n");
}

void display_menu(){
	int id;
	int stock;
	float price;
	char name[30];
	char category[50];
	FILE*file;
	file=fopen("menu.txt","r");
	if(file==NULL){
		printf("error opening the menu\n");
	}
	printf("Now i am displaying the menue\n");
	printf("Now you people are gona want each and everything in this menu\n");
	printf("And then hit the gym\n");
	printf("\n ID \t\t CATEGORY \t\t NAME \t\t  PRICE \t\t STOCK\n\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
	while(fscanf(file,"%d%s%s%f%d",&id,category,name,&price,&stock)!=EOF){
		printf("%d \t\t %-20s %-10s\t%.2f\t\t\t%d\n",id,category,name,price,stock);
	}
	fclose(file);
}
void add_item(){
	int id;
	char name[20];
	char category[30];
	float price;
	int stock;
	FILE*file;
	file=fopen("menu.txt","a");
	if(file==NULL){
		printf("the file is not opening\n");

	}
	printf("enter the information of item you want to add\n");

	printf("Enter the id of the item\n");
	scanf("%d",&id);
	printf("Enter the category of the item\n");
	scanf("%s",category);
	printf("Enter the name of the item\n");
	scanf("%s",name);
	printf("Enter the price of the item\n");
	scanf("%f",&price);
	printf("Enter the stock of the item\n");
	scanf("%d",&stock);
	fprintf(file,"%d %s %s %f %d",id,category,name,price,stock);
	fclose(file);
	printf("Item added successfully\n");

}
void place_order() {
    int order_id, found, place_more_orders, desired_quantity;
    float total_price = 0;  
    char customer_name[20];
    FILE *menu_file = fopen("menu.txt", "r");
    FILE *temp_file = fopen("temp_menu.txt", "w");
    FILE *order_file = fopen("order.txt", "a");

    if (menu_file == NULL || temp_file == NULL || order_file == NULL) {
        printf("Error opening files\n");
        return;
    }

    printf("Enter the name of the customer:\n");
    scanf(" %[^\n]s", customer_name); 

    do {
        found = 0;
        printf("Enter the ID of the desired item:\n");
        scanf("%d", &order_id);

        int menu_id, stock;
        float price;
        char item_name[20], category[30];

        while (fscanf(menu_file, "%d %s %s %f %d", &menu_id, category, item_name, &price, &stock) == 5) {
            if (menu_id == order_id && !found) {
                found = 1;
                printf("Item found\n");
                printf("Item: %s %s\t\t Price= %.2f\t\t Available Stock= %d\n", category, item_name, price, stock);

                printf("Enter the quantity of the desired item:\n");
                scanf("%d", &desired_quantity);

                if (desired_quantity > stock) {
                    printf("Sorry, quantity not available\n");
                } else {
                    stock -= desired_quantity;
                    total_price += price * desired_quantity;

                    fprintf(order_file, " %s %d %s %s %.2f %d\n", customer_name, order_id, item_name, category, price, desired_quantity);
                    printf("Added to order: %s %s (x%d)\n", category, item_name, desired_quantity);
                }
            }

            
            fprintf(temp_file, "%d %s %s %.2f %d\n", menu_id, category, item_name, price, stock);
        }


        rewind(menu_file);

        if (!found) {
            printf("The desired id %d is not available in the menu\n", order_id);
        }

        printf("Would you like to place another order? (1 for Yes, 0 for No)\n");
        scanf("%d", &place_more_orders);

    } while (place_more_orders);

    fclose(menu_file);
    fclose(temp_file);
    fclose(order_file);

    remove("menu.txt");
    rename("temp_menu.txt", "menu.txt");

    printf("Thank you for your order, %s! Your total price is %.2f\n", customer_name, total_price);
}

void generate_sales_report() {
    FILE *order_file = fopen("order.txt", "r");
    if (order_file == NULL) {
        printf("Error opening order file\n");
        return;
    }

    int order_id, quantity, items_sold = 0;
    char customer_name[20], category[30], item_name[20];
    float price, total_earnings = 0, earnings;

    printf("......................................................\n");
    printf("--------------------------------------------------------\n");
    printf("\n\t\t\t>>>>......SALES REPORT......<<<<\t\t\t\n");
    printf("......................................................\n");
    printf("--------------------------------------------------------\n");
    printf("ITEM NAME\t\tCATEGORY\t\tQUANTITY SOLD\t\tEARNING\n\n");

    while (fscanf(order_file, "%s %d %s %s %f %d", customer_name, &order_id, item_name, category, &price, &quantity) == 6) {
        earnings = price * quantity;
        items_sold += quantity;
        total_earnings += earnings;
        printf("%-15s\t%-20s\t%d\t\t\t%.2f\n", item_name, category, quantity, earnings);
    }

    printf("-------------------------------------------------------------\n");
    printf("Total Items Sold: %d\n", items_sold);
    printf("Total Earnings: %.2f\n", total_earnings);

    fclose(order_file);
}
void generate_receipt(){
	char customer_name[20];
	char order_customer[20];
	char category[30];
	int order_id;
	char item_name[20];
	int quantity;
	int found=0;
	float price;
	FILE*order_file;
	order_file=fopen("order.txt","r");
	if(order_file==NULL){
		printf("Error opening the orders file\n");
		return;
	}
	printf("Enter the name of the customer whose receipt you want\n");
	scanf(" %[^\n]",customer_name);
	printf("\n================= Receipt =================\n");
    printf("Customer: %s\n", customer_name);
    printf("-------------------------------------------\n");
    printf("ID  | Item Name      | Category  | Price   | Quantity\n");
    printf("-------------------------------------------\n");
    while (fscanf(order_file,"%s%d%s%s%f%d",order_customer,&order_id,item_name,category,&price,&quantity)!= EOF){
    	if(strcmp(customer_name,order_customer)==0){
    		found=1;
    		printf("%-4d| %-13s | %-8s | %-7.2f | %-3d\n", order_id, item_name, category, price, quantity);
		}
	}
	if(!found){
		printf("No orders found for %s.\n", customer_name);
	}
	printf("===============================================\n");
	fclose(order_file);

}
void count_orders() {
    char customer_name[20];
	char order_customer[20];
    int order_count =0;

    FILE *order_file = fopen("order.txt","r");
    if(order_file==NULL) {
        printf("Error: Could not open order file.\n");
        return;
    }

    printf("Enter the name of the customer to count their orders:\n");
    scanf(" %[^\n]s", customer_name);

    while (fscanf(order_file, "%s", order_customer) == 1) {
        if (strcmp(customer_name, order_customer) == 0) {
            order_count++;
        }
        fscanf(order_file, "%*[^\n]");
    }
     printf("%s has placed a total of %d orders.\n", customer_name, order_count);
    fclose(order_file);
}

void initialize_cake_recipes(){
    FILE *file;
	file= fopen("cake_recipes.txt", "w");
    if(file == NULL){
        printf("Error in opening cake recipe file\n");
        return;
    }
    fprintf(file, "1 ChocolateCake Flour,Cocoa,Eggs,Sugar,Butter\n");
    fprintf(file, "2 RedVelvetCake Flour,Cocoa,Buttermilk,RedFoodColoring\n");
    fprintf(file, "3 VanillaCake Flour,Eggs,Sugar,Butter,VanillaEssence\n");
    fclose(file);
    printf("Cake recipes initialized successfully\n");
}

void display_cake_recipes() {
    int cake_id;
    char cake_name[30];
	char cake_ingredients[200];
    FILE *file;
	file=fopen("cake_recipes.txt", "r");
    if(file == NULL){
        printf("Error in opening cake recipe file\n");
        return;
    }
    printf("\n\t\t>>>>>>>>> CAKE RECIPES <<<<<<<<<\n\n");
    printf("ID\tNAME\t\tINGREDIENTS\n");
    printf("=====================================================\n");
    while (fscanf(file, "%d %s %[^\n]", &cake_id, cake_name, cake_ingredients) != EOF) {
        printf("%d\t%-15s %s\n", cake_id, cake_name, cake_ingredients);
    }
    fclose(file);
}

void add_cake_recipe() {
    int cake_id;
    char cake_name[30];
	char cake_ingredients[200];
    FILE *file;
	file= fopen("cake_recipes.txt", "a");
    if(file==NULL){
        printf("Error: Could not open cake recipes file for appending.\n");
        return;
    }
    printf("\nEnter the ID of the cake recipe: ");
    scanf("%d", &cake_id);
    printf("Enter the name of the cake recipe: ");
    scanf("%s", cake_name);
    printf("Enter the ingredients: ");
    scanf(" %[^\n]", cake_ingredients);
    fprintf(file, "%d %s %s\n", cake_id, cake_name, cake_ingredients);
    fclose(file);
    printf("Cake recipe added successfully.\n");
}


void initialize_coffee_recipes() {
    FILE *file;
	file=fopen("coffee_recipes.txt", "w");
    if (file==NULL){
        printf("Error in opening coffee recipe file\n");
        return;
    }
    fprintf(file, "1 Cappuccino Espresso,SteamedMilk,Foam\n");
    fprintf(file, "2 Latte Espresso,SteamedMilk\n");
    fprintf(file, "3 Mocha Espresso,ChocolateSyrup,SteamedMilk\n");
    fclose(file);
    printf("Coffee recipes initialized successfully.\n");
}

void display_coffee_recipes(){
    int coffee_id;
    char coffee_name[30];
	char coffee_ingredients[200];
    FILE *file;
	file=fopen("coffee_recipes.txt", "r");
    if(file==NULL){
        printf("Error in opening coffee recipe file\n");
        return;
    }
    printf("\n\t\t>>>>>>>>> COFFEE RECIPES <<<<<<<<<\n\n");
    printf("ID\tNAME\t\tINGREDIENTS\n");
    printf("=====================================================\n");
    while (fscanf(file, "%d %s %[^\n]", &coffee_id, coffee_name, coffee_ingredients) != EOF) {
        printf("%d\t%-15s %s\n", coffee_id, coffee_name, coffee_ingredients);
    }
    fclose(file);
}

void add_coffee_recipe() {
    int coffee_id;
    char coffee_name[30], coffee_ingredients[200];
    FILE *file = fopen("coffee_recipes.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open coffee recipes file for appending.\n");
        return;
    }
    printf("\nEnter the ID of the coffee recipe: ");
    scanf("%d", &coffee_id);
    printf("Enter the name of the coffee recipe: ");
    scanf("%s", coffee_name);
    printf("Enter the ingredients: ");
    scanf(" %[^\n]", coffee_ingredients);
    fprintf(file, "%d %s %s\n", coffee_id, coffee_name, coffee_ingredients);
    fclose(file);
    printf("Coffee recipe added successfully.\n");
}


void initialize_shake_recipes() {
    FILE *file = fopen("shake_recipes.txt", "w");
    if (file == NULL) {
        printf("Error in opening shake recipe file\n");
        return;
    }
    fprintf(file, "1 MangoShake Mango,Milk,Sugar\n");
    fprintf(file, "2 BananaShake Banana,Milk,Sugar\n");
    fprintf(file, "3 StrawberryShake Strawberry,Milk,Sugar\n");
    fclose(file);
    printf("Shake recipes initialized successfully.\n");
}

void display_shake_recipes() {
    int shake_id;
    char shake_name[30], shake_ingredients[200];
    FILE *file = fopen("shake_recipes.txt", "r");
    if (file == NULL) {
        printf("Error in opening shake recipe file\n");
        return;
    }
    printf("\n\t\t>>>>>>>>> SHAKE RECIPES <<<<<<<<<\n\n");
    printf("ID\tNAME\t\tINGREDIENTS\n");
    printf("=====================================================\n");
    while (fscanf(file, "%d %s %[^\n]", &shake_id, shake_name, shake_ingredients) != EOF) {
        printf("%d\t%-15s %s\n", shake_id, shake_name, shake_ingredients);
    }
    fclose(file);
}

void add_shake_recipe() {
    int shake_id;
    char shake_name[30], shake_ingredients[200];
    FILE *file = fopen("shake_recipes.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open shake recipes file for appending.\n");
        return;
    }
    printf("\nEnter the ID of the shake recipe: ");
    scanf("%d", &shake_id);
    printf("Enter the name of the shake recipe: ");
    scanf("%s", shake_name);
    printf("Enter the ingredients: ");
    scanf(" %[^\n]", shake_ingredients);
    fprintf(file, "%d %s %s\n", shake_id, shake_name, shake_ingredients);
    fclose(file);
    printf("Shake recipe added successfully.\n");
}


void initialize_pie_recipes() {
    FILE *file = fopen("pie_recipes.txt", "w");
    if (file == NULL) {
        printf("Error in opening pie recipe file\n");
        return;
    }
    fprintf(file, "1 ApplePie Apples,PieCrust,Cinnamon\n");
    fprintf(file, "2 CherryPie Cherries,PieCrust,Sugar\n");
    fclose(file);
    printf("Pie recipes initialized successfully.\n");
}

void display_pie_recipes() {
    int pie_id;
    char pie_name[30], pie_ingredients[200];
    FILE *file = fopen("pie_recipes.txt", "r");
    if (file == NULL) {
        printf("Error in opening pie recipe file\n");
        return;
    }
    printf("\n\t\t>>>>>>>>> PIE RECIPES <<<<<<<<<\n\n");
    printf("ID\tNAME\t\tINGREDIENTS\n");
    printf("=====================================================\n");
    while (fscanf(file, "%d %s %[^\n]", &pie_id, pie_name, pie_ingredients) == EOF) {
        printf("%d\t%-15s %s\n", pie_id, pie_name, pie_ingredients);
    }
    fclose(file);
}

void add_pie_recipe() {
    int pie_id;
    char pie_name[30], pie_ingredients[200];
    FILE *file = fopen("pie_recipes.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open pie recipes file for appending.\n");
        return;
    }
    printf("\nEnter the ID of the pie recipe: ");
    scanf("%d", &pie_id);
    printf("Enter the name of the pie recipe: ");
    scanf("%s", pie_name);
    printf("Enter the ingredients: ");
    scanf(" %[^\n]", pie_ingredients);
    fprintf(file, "%d %s %s\n", pie_id, pie_name, pie_ingredients);
    fclose(file);
    printf("Pie recipe added successfully.\n");
}
