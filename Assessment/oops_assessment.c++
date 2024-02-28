/*----------Simple Food Ordering Project----------*/


#include<iostream>
using namespace std;

class food_order{
    public:
        food_order(){
            string n;

            cout<<"\n----------Gems Fast Food----------\n";
            cout<<"\nPlease enter your name:";
            cin>>n;
            cout<<"Hello "<<n;

        }

        void pizza(){
            int like,count,bill;

            cout<<"\n1. Margherita Rs.110\n";
            cout<<"2. Double Cheese Margherita Rs.130\n";
            cout<<"3. Farmhouse Rs.170\n";
            cout<<"4. Corn Cheese Paratha Rs.220\n";
            cout<<"5. Mexican Green Wave Rs.210\n";

            cout<<"\nPlease enter which pizza you would like to have? :";
            cin>>like;

            cout<<"\nPlease enter quantity: ";
            cin>>count;

            switch(like){
                case 1:
                    bill=110*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n1. Margherita\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 40 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 2:
                    bill=130*count;

                    
                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n2. Double Cheese Margherita\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 40 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 3:
                    bill=170*count;
                    
                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n3. Farmhouse\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 40 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 4:
                    bill=220*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n4. Corn Cheese Paratha\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 40 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 5:
                    bill=210*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n5. Mexican Green Wave\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 40 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                default:
                    cout<<"Choice correct.";
                    break;
            }

        }

        void burgers(){
            int like,count,bill;

            cout<<"\n1. Crispy veg burger Rs.70\n";
            cout<<"2. Crispy veg double patty burger Rs.90\n";
            cout<<"3. Veg makhani burst burger Rs.80\n";
            cout<<"4. Veggie burger with cheese Rs.110\n";
            cout<<"5. Aloo tikki burger Rs.60\n";

            cout<<"\nPlease enter which Burger you would like to have? :";
            cin>>like;

            cout<<"\nPlease enter quantity: ";
            cin>>count;    

            switch(like){
                case 1:
                    bill=70*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n1. Crispy veg burger\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 20 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 2:
                    bill=90*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n2. Crispy veg double patty burger\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 20 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 3:
                    bill=80*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n3. Veg makhani burst burger\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 20 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 4:
                    bill=110*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n4. Veggie burger with cheese\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 20 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 5:
                    bill=60*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n5. Aloo tikki burger\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 20 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                default:
                    cout<<"Choice correct.";
                    break;
            }
        }

        void sandwich(){
            int like,count,bill;

            cout<<"\n1. Cheese garlic sandwich Rs.100\n";
            cout<<"2. Amdavadi touch sandwich Rs.130\n";
            cout<<"3. Mexican sandwich Rs.110\n";
            cout<<"4. Rassian sandwich Rs.120\n";
            cout<<"5. Paneer schezwan sandwich Rs.120\n";

            cout<<"\nPlease enter which Sandwich you would like to have? :";
            cin>>like;

            cout<<"\nPlease enter quantity: ";
            cin>>count;    

            switch(like){
                case 1:
                    bill=100*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n1. Cheese garlic sandwich\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 25 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 2:
                    bill=130*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n2. Amdavadi touch sandwich\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 25 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 3:
                    bill=110*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n3. Mexican sandwich\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 25 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 4:
                    bill=120*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n4. Rassian sandwich\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 25 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 5:
                    bill=120*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n5. Paneer schezwan sandwich\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 25 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                default:
                    cout<<"Choice correct.";
                    break;
            }
        }

        void rolls(){
            int like,count,bill;

            cout<<"\n1. Aloo fry roll Rs.50\n";
            cout<<"2. Aloo cheese roll Rs.70\n";
            cout<<"3. Noodles roll Rs.60\n";

            cout<<"\nPlease enter which Rolls you would like to have? :";
            cin>>like;

            cout<<"\nPlease enter quantity: ";
            cin>>count;    

            switch(like){
                case 1:
                    bill=50*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n1. Aloo fry roll\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 20 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 2:
                    bill=70*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n2. Aloo cheese roll\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 20 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 3:
                    bill=60*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n3. Noodles roll\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 20 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                default:
                    cout<<"Choice correct.";
                    break;
            }
        }

        void biryani(){
            int like,count,bill;

            cout<<"\n1. Veg biryani Rs.120\n";
            cout<<"2. Steam rice Rs.100\n";
            cout<<"3. Jeera rice Rs.150\n";

            cout<<"\nPlease enter which Biryani you would like to have? :";
            cin>>like;

            cout<<"\nPlease enter quantity: ";
            cin>>count;    

            switch(like){
                case 1:
                    bill=120*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n1. Veg biryani\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 35 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 2:
                    bill=100*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n2. Steam rice\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 35 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                case 3:
                    bill=150*count;

                    cout<<"\n----------Your Order----------\n";
                    cout<<"\n3. Jeera rice\n";
                    cout<<"Your total bill :"<<bill<<"\n";
                    cout<<"Your order will be deliverd in 35 minutes.\n";
                    cout<<"\n-----Thank you for ordering from Gems Fast Food-----\n\n";
                    break;

                default:
                    cout<<"Choice correct.";
                    break;
            }
        }
            
};

int main(){    
    food_order o1;
    int choice;
    char yn;

    start:

    cout<<"\n\n----------Menu----------\n\n";
    cout<<"1)Pizza.\n";
    cout<<"2)Burgers.\n";
    cout<<"3)Sandwich.\n";
    cout<<"4)Rolls.\n";
    cout<<"5)Biryani.\n";

    cout<<"\nPlease enter your choice:";
    cin>>choice;

    
    switch(choice){
        case 1:
            o1.pizza();
            break;

        case 2:
            o1.burgers();
            break;

        case 3:
            o1.sandwich();
            break;

        case 4:
            o1.rolls();
            break;

        case 5:
            o1.biryani();
            break;

        default:
            cout<<"Choice correct.";
            break;
    }

    cout<<"Would you like to order anything else? Y / N :";
    cin>>yn;

    if(yn == 'y' || yn == 'Y'){
        goto start;
    }

    return 0;
}