#include <bits/stdc++.h>

using namespace std;
ifstream fin("Start.txt");
ofstream gout("End.txt",ifstream::app);

/*List construction for the game classes:*/
std::list<char*>::iterator list_itr;
std::list<char*> warrior_class_abilitys;
std::list<char*> archmage_class_abilitys;
std::list<char*> cleric_class_abilitys;

void creating_warrior_class_abilitys()
{
    warrior_class_abilitys.push_back((char*)"Battle Cry");
    warrior_class_abilitys.push_back((char*)"Vengeful Spirit");
    warrior_class_abilitys.push_back((char*)"God of War");
}

void creating_archmage_class_abilitys()
{
    archmage_class_abilitys.push_back((char*)"Fire Ball");
    archmage_class_abilitys.push_back((char*)"Ice Joints");
    archmage_class_abilitys.push_back((char*)"Iron Maiden");
}

void creating_cleric_class_abilitys()
{
    cleric_class_abilitys.push_back((char*)"Revitalize");
    cleric_class_abilitys.push_back((char*)"Revive");
    cleric_class_abilitys.push_back((char*)"Guardian Angel");
}

/*Set construction for the game classes:*/
std::set<char*>::iterator itr;
std::set<char*> game_classes;

void creating_game_classes()
{
    game_classes.insert((char*)"Warrior");
    game_classes.insert((char*)"Apprentice Mage");
    game_classes.insert((char*)"Cleric");
}

/*Interfaces zone:*/


template <class X,class Y,class Z,class W>
class Menu_Interface
{
    public:
        virtual void command_1(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual void command_2(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual void command_3(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual void command_4(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual void command_5(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual void command_6(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual void command_7(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual void command_8(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual void command_9(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_10(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_11(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_12(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_13(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_14(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_15(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_16(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_17(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_18(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_19(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_20(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_21(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
        virtual int command_22(X &obj, Y &obj2, Z &obj3, W &obj4)=0;
};


template <class T>
class Objects
{
    protected:
        int added_power_to_creature;
        int added_hp_to_creature;
        char *name=(char*)malloc(256*sizeof(char));
        float gradient_of_value;
        int power_to_player;
        int inteligence_for_player;
        int faith_for_player;
        int durability;

    public:

//setter and getter zone:

        virtual int get_power_offered_to_creature()=0;
        virtual int get_hp_for_creature()=0;
        virtual int get_card_rarity()=0;
        virtual char* get_name()=0;

//constructor zone:
/*
        Objects()
        {
            this->added_hp_to_creature=10;
            this->added_power_to_creature=5;
            this->name=(char*)"Basic buff";
            this->gradient_of_value=(float)(max(this->added_hp_to_creature+this->added_power_to_creature,1)*13/100);
        }

        Objects(const int chosen_power)
        {
            this->added_hp_to_creature=chosen_power;
            this->added_power_to_creature=5;
            this->name=(char*)"Basic buff";
            this->gradient_of_value=(float)(max(this->added_hp_to_creature+this->added_power_to_creature,1)*13/100);
        }

        Objects(const int chosen_power,int chosen_hp)
        {
            this->added_hp_to_creature=chosen_power;
            this->added_power_to_creature=chosen_hp;
            this->name=(char*)"Basic buff";
            this->gradient_of_value=(float)(max(this->added_hp_to_creature+this->added_power_to_creature,1)*13/100);
        }

        virtual ~Objects()
        {
            cout<<"The buff has been used.\n";
            free(name);
        }
*/
//ovelodings:
        virtual void operator [](int index)=0;

        virtual void operator ++()=0;

        virtual void operator --()=0;

        virtual void operator =(T &obj)=0;

        virtual void operator +(T &obj)=0;

        virtual void operator -(int lose)=0;

        virtual void operator ==(T &obj)=0;

        virtual void operator >(T &obj)=0;

        virtual void operator <(T &obj)=0;

//function zone:


//friend zone:


 //       friend ostream & operator << (ostream &out, T &obj);
 //       friend istream & operator >> (istream &in, T &obj);

};

class BuffCard: public Objects<BuffCard>
{
    public:

//setter and getter zone:

        int get_power_offered_to_creature()
        {
            return this->added_power_to_creature;
        }
        int get_hp_for_creature()
        {
            return this->added_hp_to_creature ;
        }
        int get_card_rarity()
        {
            return this->gradient_of_value;
        }
        char* get_name()
        {
            return this->name;
        }
//constructor zone:
/*
            BuffCard():Objects(){}

            BuffCard(const int chosen_power):Objects(const int chosen_power) {}

            BuffCard(const int chosen_power,int chosen_hp):Objects(const int chosen_power,int chosen_hp){}

            ~BuffCard():~Objects(){}
*/
        BuffCard()
        {
            this->added_hp_to_creature=10;
            this->added_power_to_creature=5;
            this->name=(char*)"Basic buff";
            this->gradient_of_value=(float)(max(this->added_hp_to_creature+this->added_power_to_creature,1)*13/100);
        }

        BuffCard(const int chosen_power)
        {
            this->added_hp_to_creature=chosen_power;
            this->added_power_to_creature=5;
            this->name=(char*)"Basic buff";
            this->gradient_of_value=(float)(max(this->added_hp_to_creature+this->added_power_to_creature,1)*13/100);
        }

        BuffCard(const int chosen_power,int chosen_hp)
        {
            this->added_hp_to_creature=chosen_power;
            this->added_power_to_creature=chosen_hp;
            this->name=(char*)"Basic buff";
            this->gradient_of_value=(float)(max(this->added_hp_to_creature+this->added_power_to_creature,1)*13/100);
        }

        ~BuffCard()
        {
            gout<<"The buff has been used.\n";
            free(name);
        }

//ovelodings:
        void operator [](int index)
        {
            if(index==1)
                cout<<this->name<<" is giving "<<this->added_hp_to_creature<<" health to your creature;\n";
            if(index==2)
                cout<<this->name<<" is giving "<<this->added_hp_to_creature<<" power to your creature;\n";
            if(index==3)
                cout<<this->name<<" has this much value:"<<this->gradient_of_value<<";\n";
        }


        void operator ++()
        {
            cout<<"The card has been upgraded, you feel it's new found power\n";
            this->added_hp_to_creature+=5;
            this->added_power_to_creature+=5;
        }

        void operator --()
        {
            cout<<"Unsatisfied with the result, you destroy the card in anger, and the you get a basic buff insted.\n";
            this->added_hp_to_creature=10;
            this->added_power_to_creature=5;
            this->name[strlen(this->name)-4]='\0';
        }

        void operator =(BuffCard &buffcard_to_coppy)
        {
            cout<<"You have transmuted your card in a perfect copy of the "<<buffcard_to_coppy.get_name()<<'\n';;
            this->added_hp_to_creature=buffcard_to_coppy.get_hp_for_creature();
            this->added_power_to_creature=buffcard_to_coppy.get_power_offered_to_creature();
            this->name=buffcard_to_coppy.get_name();

        }

        void operator +(BuffCard &buffcard_to_add)
        {
            cout<<"You have created a better buff with the help of "<<buffcard_to_add.get_name()<<'\n';
            this->added_hp_to_creature+=buffcard_to_add.get_hp_for_creature();
            this->added_power_to_creature+=buffcard_to_add.get_power_offered_to_creature();
            this->name=(char*)"The Buffer";
        }

        void operator -(int lose)
        {
            cout<<"Your stress level is to high, you can't focus on the cast of the buff.\n";
            this->added_hp_to_creature-=lose;
            this->added_power_to_creature-=lose;
        }

        void operator ==(BuffCard &buffcard_to_compare)
        {
            if(this->gradient_of_value==buffcard_to_compare.get_card_rarity())
                cout<<this->name<<"The buffs are equal in value.\n";
        }

        void operator >(BuffCard &buffcard_to_compare)
        {
            if(this->gradient_of_value>buffcard_to_compare.get_card_rarity())
                cout<<this->name<<"This buff is superior in value.\n";
        }

        void operator <(BuffCard &buffcard_to_compare)
        {
            if(this->gradient_of_value<buffcard_to_compare.get_card_rarity())
                cout<<this->name<<"This buff is inferior in value.\n";

        }

//function zone:

        void afisare_bonusuri_relicva(BuffCard &buffcard)
        {
            cout<<"The buff "<<this->name<<" is giving to you:\n";
            for(int i=0;i<=6;i++)
                buffcard[i];
        }

//friend zone:


        friend ostream & operator << (ostream &out, BuffCard &buff);
        friend istream & operator >> (istream &in, BuffCard &buff);

};


class Relic: public Objects <Relic>
{
    public:

//setter and getter zone:

        int get_power_offered_to_creature()
        {
            return this->added_power_to_creature;
        }
        int get_power_offered_to_player()
        {
            return this->power_to_player;
        }
        int get_faith_offered_to_player()
        {
            return this->faith_for_player;
        }
        int get_intelligence_offered_to_player()
        {
            return this->inteligence_for_player;
        }
        int get_hp_for_creature()
        {
            return this->added_hp_to_creature ;
        }
        int get_card_rarity()
        {
            return this->gradient_of_value;
        }
        int get_durability()
        {
            return this->durability;
        }
        char* get_name()
        {
            return this->name;
        }
//constructor zone:

        Relic()
        {
            this->added_hp_to_creature=10;
            this->added_power_to_creature=5;
            this->name=(char*)"Basic relic";
            this->power_to_player=0;
            this->inteligence_for_player=0;
            this->faith_for_player=0;
            this->durability=3;
            this->gradient_of_value=(float)((max(this->added_hp_to_creature+this->added_power_to_creature,1)*max(max(max(this->faith_for_player,this->inteligence_for_player),this->power_to_player),1))^this->durability)/100;
        }

        Relic(const int hp_for_creature)
        {
            this->added_hp_to_creature=hp_for_creature;
            this->added_power_to_creature=5;
            this->name=(char*)"Basic relic";
            this->power_to_player=0;
            this->inteligence_for_player=0;
            this->faith_for_player=0;
            this->durability=3;
            this->gradient_of_value=(float)((max(this->added_hp_to_creature+this->added_power_to_creature,1)*max(max(max(this->faith_for_player,this->inteligence_for_player),this->power_to_player),1))^this->durability)/100;
        }

        Relic(const int hp_for_creature,int power_for_creature)
        {
            this->added_hp_to_creature=hp_for_creature;
            this->added_power_to_creature=power_for_creature;
            this->name=(char*)"Basic relic";
            this->power_to_player=0;
            this->inteligence_for_player=0;
            this->faith_for_player=0;
            this->durability=3;
            this->gradient_of_value=(float)((max(this->added_hp_to_creature+this->added_power_to_creature,1)*max(max(max(this->faith_for_player,this->inteligence_for_player),this->power_to_player),1))^this->durability)/100;
        }

        ~Relic()
        {
            gout<<"The relic "<<this->name<<" has been removed from your bag.\n";
            free(this->name);
        }

//ovelodings:
        void operator [](int index)
        {
            if(index==0)
                cout<<this->name<<" has this much durability:"<<this->durability<<";\n";
            if(index==1)
                cout<<this->name<<" is giving "<<this->added_hp_to_creature<<" health to your creature;\n";
            if(index==2)
                cout<<this->name<<" is giving "<<this->added_power_to_creature<<" power to your creature;\n";
            if(index==3)
                cout<<this->name<<" is giving "<<this->inteligence_for_player<<" inteligence to you;\n";
            if(index==4)
                cout<<this->name<<" is giving "<<this->faith_for_player<<" faith to you;\n";
            if(index==5)
                cout<<this->name<<" is giving "<<this->power_to_player<<" power to you;\n";
            if(index==6)
                cout<<this->name<<" has this much value:"<<this->gradient_of_value<<";\n";
        }


        void operator ++()
        {
            cout<<"The relic has been upgraded, you feel it's new found power\n";
            this->added_hp_to_creature+=20;
            this->added_power_to_creature+=9;
            this->faith_for_player+=5;
            this->inteligence_for_player+=5;
            this->power_to_player+=5;
        }

        void operator --()
        {
            cout<<"Unsatisfied with the result, you destroy the relic in anger, only to be met with it's lesser version. You added it to your bag until later.\n";
            this->added_hp_to_creature-=20;
            this->added_power_to_creature-=9;
            this->faith_for_player-=5;
            this->inteligence_for_player-=5;
            this->power_to_player-=5;
            this->name[strlen(this->name)-4]='\0';
        }

        void operator =(Relic &relic_to_be_copied)
        {
            cout<<"You have transmuted your relic in a perfect copy of the "<<relic_to_be_copied.get_name()<<'\n';
            this->added_hp_to_creature=relic_to_be_copied.get_hp_for_creature();
            this->added_power_to_creature=relic_to_be_copied.get_power_offered_to_creature();
            this->faith_for_player=relic_to_be_copied.get_faith_offered_to_player();
            this->inteligence_for_player=relic_to_be_copied.get_intelligence_offered_to_player();
            this->power_to_player=relic_to_be_copied.get_power_offered_to_player();
            this->name=relic_to_be_copied.get_name();

        }

        void operator +(Relic &relic_to_combine)
        {
            cout<<"You have created a better relic with the help of "<<relic_to_combine.get_name()<<'\n';
            this->added_hp_to_creature+=relic_to_combine.get_hp_for_creature();
            this->added_power_to_creature+=relic_to_combine.get_power_offered_to_creature();
            this->faith_for_player+=relic_to_combine.get_faith_offered_to_player();
            this->inteligence_for_player+=relic_to_combine.get_intelligence_offered_to_player();
            this->power_to_player+=relic_to_combine.get_power_offered_to_player();
            this->name=(char*)"The Amalgam";
        }

        void operator -(int lose)
        {
            cout<<"Your relic has taken massive damage";
            this->durability-=lose;
        }

        void operator ==(Relic &relic_to_compare)
        {
            if(this->gradient_of_value==relic_to_compare.get_card_rarity())
                cout<<this->name<<"The relics are equal in value.\n";
        }

        void operator >(Relic &relic_to_compare)
        {
            if(this->gradient_of_value>relic_to_compare.get_card_rarity())
                cout<<this->name<<"Your relic is superior in value.\n";
        }

        void operator <(Relic &relic_to_compare)
        {
            if(this->gradient_of_value<relic_to_compare.get_card_rarity())
                cout<<this->name<<"Your relic is inferior in value.\n";

        }

//function zone:

        void afisare_bonusuri_relicva(Relic &relic)
        {
            cout<<"The relic "<<this->name<<" is giving to you:\n";
            for(int i=0;i<=6;i++)
                relic[i];
        }


//friend zone:


        friend ostream & operator << (ostream &out, Relic &relicva);
        friend istream & operator >> (istream &in, Relic &relicva);
};





/*   WOEK IN PROGRESS
class SpellCard
{
    int added_power_to_creature;
    int added_hp_to_creature;
    char *name=(char*)malloc(256*sizeof(char));
    float gradient_of_value;

    public:

//setter and getter zone:

            int get_power_offered_to_creature()
            {
                return this->added_power_to_creature;
            }
            int get_hp_for_creature()
            {
                return this->added_hp_to_creature ;
            }
            int get_card_rarity()
            {
                return this->gradient_of_value;
            }
            char* get_name()
            {
                return this->name;
            }
//constructor zone:

            SpellCard()
            {
                this->added_hp_to_creature=30;
                this->added_power_to_creature=5;
                this->name=(char*)"Basic buff";
                this->gradient_of_value=(float)(max(this->added_hp_to_creature+this->added_power_to_creature,1)*13/100);
            }

//ovelodings:
        void operator [](int index)
        {
            if(index==1)
                cout<<this->name<<" is giving "<<this->added_hp_to_creature<<" health to your creature;\n";
            if(index==2)
                cout<<this->name<<" is giving "<<this->added_hp_to_creature<<" power to your creature;\n";
            if(index==3)
                cout<<this->name<<" has this much value:"<<this->gradient_of_value<<";\n";
        }


        void operator ++()
        {
            cout<<"The card has been upgraded, you feel it's new found power\n";
            this->added_hp_to_creature+=5;
            this->added_power_to_creature+=5;
            strcat(this->name," II");
        }

        void operator --()
        {
            cout<<"Unsatisfied with the result, you destroy the card in anger, and the you get a basic buff insted.\n";
            this->added_hp_to_creature=10;
            this->added_power_to_creature=5;
            this->name[strlen(this->name)-4]='\0';
        }

        void operator =(BuffCard &buffcard_to_coppy)
        {
            cout<<"You have transmuted your card in a perfect copy of the "<<buffcard_to_coppy.get_name()<<'n';;
            this->added_hp_to_creature=buffcard_to_coppy.get_hp_for_creature();
            this->added_power_to_creature=buffcard_to_coppy.get_power_offered_to_creature();
            strcpy(this->name,buffcard_to_coppy.get_name());

        }

        void operator +(BuffCard &buffcard_to_add)
        {
            cout<<"You have created a better buff with the help of "<<buffcard_to_add.get_name()<<'n';
            this->added_hp_to_creature+=buffcard_to_add.get_hp_for_creature();
            this->added_power_to_creature+=buffcard_to_add.get_power_offered_to_creature();
            strcpy(this->name,"The Buffer");
        }

        void operator -(int lose)
        {
            cout<<"Your stress level is to high, you can't focus on the cast of the buff.\n";
            this->added_hp_to_creature-=lose;
            this->added_power_to_creature-=lose;
        }

        void operator ==(BuffCard &buffcard_to_compare)
        {
            if(this->gradient_of_value==buffcard_to_compare.get_card_rarity())
                cout<<this->name<<"The buffs are equal in value.\n";
        }

        void operator >(BuffCard &buffcard_to_compare)
        {
            if(this->gradient_of_value>buffcard_to_compare.get_card_rarity())
                cout<<this->name<<"This buff is superior in value.\n";
        }

        void operator <(BuffCard &buffcard_to_compare)
        {
            if(this->gradient_of_value<buffcard_to_compare.get_card_rarity())
                cout<<this->name<<"This buff is inferior in value.\n";

        }

//function zone:

        void afisare_bonusuri_relicva(BuffCard &buffcard)
        {
            cout<<"The buff "<<this->name<<" is giving to you:\n";
            for(int i=0;i<=6;i++)
                buffcard[i];
        }
};

*/




class Creature
{
    map<int,int> money;
    map<int,int>::iterator money_iterator;
    int max_hp;
    float hp;
    int power;
    char *name=(char*)("Dummy");
    const char description[256]="Si asa o murit gigel";
    char mode;
    bool heavy_attack=false;
    static int defensive_aura;
    int attack_debuff=0;
    int attack_buff=0;
    bool attack_speed[101];
    double shilde=0;
    bool favor=false;

    public:


// Setter and getter zone:


        void set_to_true_stats()
        {
            this->attack_buff=0;
            this->attack_debuff=0;
            this->defensive_aura=0;
            if(this->hp>this->max_hp)
            {
                this->hp=this->max_hp;
            }
        }
        void set_hp(float hp_to_set_to)
        {
            this->hp=hp_to_set_to;
        }

        void set_hp_added(int add_to_hp)
        {
            this->hp=min(int(this->hp)+add_to_hp,this->max_hp);
        }

        void set_favor()
        {
            this->favor=false;
        }
        void set_money()
        {
            for(int i=0;i<3;i++)
                this->money[i]=0;
        }
        void set_to_true_hp()
        {
            this->hp=float(this->max_hp);
        }
        void set_name()
        {
            this->name=(char *)malloc(256*sizeof(char));
            fgets(this->name,256,stdin);
            this->name[strlen(this->name)-1]='\0';
        }

        void set_heavy_to_true()
        {
            this->heavy_attack=true;
        }

        void set_attack_buff()
        {
            this->attack_buff=5;
        }

        void set_heavy_to_false()
        {
            this->heavy_attack=false;
        }
        int get_hp()
        {
            return this->hp;
        }
        int get_power()
        {
            return this->power;
        }

        int get_if_heavy()
        {
            return this->heavy_attack;
        }

        int get_max_hp()
        {
            return this->max_hp;
        }

        int get_true_hp()
        {
            return this->max_hp;
        }

        bool get_favor()
        {
            return this->favor;
        }

        int get_defensive_aura()
        {
            return this->defensive_aura;
        }

        char* get_name()
        {
            return this->name;
        }

// Constructors zone:

        Creature(char *_name)
        {
            cout<<"You have found a lamb.\n";
            this->max_hp=10;
            this->hp=this->max_hp;
            this->power=2;
            this->name=(char*)"Lamb";
        }
        Creature(double chosen_shield)
        {
            this->max_hp=10000000;
            this->hp=this->max_hp;
            this->power=1000000;
            this->mode='t';
            this->name=(char*)"God of War";
            this->defensive_aura=10000;
            this->attack_buff=99999;
            this->shilde=99999;
        }//god mode;

        Creature()
        {
            this->max_hp=100;
            this->hp=this->max_hp;
            this->power=9;
            this->mode='r';
        }//default all

        Creature(char chosen_mode)
        {
            this->max_hp=100;
            this->hp=this->max_hp;
            this->power=9;
            this->mode=chosen_mode;
        }//default power and max hp;

        Creature(int chosen_power,const int chosen_max_hp)
        {
            this->max_hp=chosen_max_hp;
            this->hp=this->max_hp;
            this->power=chosen_power;
            this->mode='r';
        }//default mode;

        Creature(const char chosen_mode,int chosen_power,int chosen_max_hp)
        {
            this->max_hp=chosen_max_hp;
            this->hp=this->max_hp;
            this->power=chosen_power;
            this->mode=chosen_mode;
        }//let him choose all;

        Creature(Creature &the_one_to_be_copied)
        {
            this->max_hp=the_one_to_be_copied.max_hp;
            this->hp=the_one_to_be_copied.hp;
            this->power=the_one_to_be_copied.power;
            this->mode=the_one_to_be_copied.mode;
            this->defensive_aura=the_one_to_be_copied.defensive_aura;
            this->attack_buff=the_one_to_be_copied.attack_buff;
            this->shilde=the_one_to_be_copied.shilde;
        }//copy all aka enter god mode here;

        ~Creature()
        {
            gout<<"The creature "<<this->get_name()<<" just died, may the elder gods have mercy on it's soul\n";
            free(name);
        }



//Overload zone:

        void operator [](int index)
        {
            if(index==0)
                cout<<this->name<<" has "<<this->money[index]<<" copper;\n";
            if(index==1)
                cout<<this->name<<" has "<<this->money[index]<<" silver;\n";
            if(index==2)
                cout<<this->name<<" has "<<this->money[index]<<" gold;\n";
        }


        void operator ++()
        {
            char* sacrifice=(char*)malloc(256*sizeof(char));
            Creature Sacrifice(sacrifice);
            cout<<"You started the sacrifice, the gods are watching you!\n";
            this->power=this->power+Sacrifice.power;
            this->shilde=this->shilde+Sacrifice.shilde;
            this->max_hp=this->max_hp+Sacrifice.max_hp;
            this->hp=this->hp+Sacrifice.max_hp;
            cout<<"If the gods are pleased, "<<this->name<<" will get:\n-"<<Sacrifice.power<<" power;\n-"<<Sacrifice.shilde<<" shield;\n-"<<Sacrifice.max_hp<<" health.\n";
        }

        void operator --()
        {
            cout<<"You started the sacrifice, the gods are watching you!\n";
            int initial_power=this->power;
            this->power=this->power*2;
            this->shilde=0;
            this->max_hp=this->max_hp/2;
            if(this->hp>this->max_hp)
                this->hp=this->max_hp;
            if(this->attack_speed[rand()%100]==1)
                this->power=this->power+3;
            cout<<"The gods are pleased, "<<this->name<<" will get "<<this->power-initial_power<<" power by sacrificing all of it's shield and half of it's maximum health.\n";
        }

        void operator =(float health_for_this_combat)
        {
            this->favor=true;
            this->hp=health_for_this_combat;
        }

        void operator +(int recharge)
        {
            this->hp=min(this->hp+recharge,float(this->max_hp));
            cout<<"Your "<<this->name<<" enjoyed it and recovered "<<recharge<<" health\n";
        }

        void operator -(int lose)
        {
            this->hp=max(this->hp-lose,float(0));
            cout<<"Your "<<this->name<<" felt a sharp pain and lost "<<lose<<" health\n";
        }

        void operator ==(int enemy_power)
        {
            if(this->power==enemy_power)
                cout<<this->name<<" is equal in force, so the ritual just fails, noone wins, noone is eaten\n";
        }

        void operator >(int enemy_power)
        {
            if(this->power>enemy_power)
                cout<<this->name<<" was stronger, so the gods chose him as the champion, and the enemy has died\n";
        }

        void operator <(int enemy_power)
        {
            if(this->power<enemy_power)
            {
                cout<<this->name<<" was weaker, so the gods chose him as their meal\n";
                this->hp=float(0);
            }

        }


        operator int() const
        {
            return this->power;
        }
        operator float() const
        {
            return this->hp;
        }

//function zone:


        void add_money(int money_to_add,int index)
        {
            this->money[index-1]=this->money[index-1]+money_to_add;
        }

        void Check_hp()
        {
            if(this->hp>this->max_hp/2)
            {
                if(this->mode=='r')
                    this->attack_buff=0;
                else
                {
                    for(int i=0;i<=100;i++)
                        this->attack_speed[i]=0;
                    int n=5;
                    while(n)
                    {
                        int poz=rand()%100;
                        if(this->attack_speed[poz]==0)
                        {
                            this->attack_speed[poz]=1;
                            n--;
                        }
                    }
                }
            }
            if(this->hp<=this->max_hp/2 and this->hp>this->max_hp/4)
            {
                if(this->mode=='r')
                this->attack_buff=1;
                else
                {
                    for(int i=0;i<=100;i++)
                        this->attack_speed[i]=0;
                    int n=15;
                    while(n)
                    {
                        int poz=rand()%100;
                        if(this->attack_speed[poz]==0)
                        {
                            this->attack_speed[poz]=1;
                            n--;
                        }
                    }
                }
            }
            if(this->hp<=this->max_hp/4)
            {
                if(this->mode=='r')
                    this->attack_buff=2;
                else
                {
                    for(int i=0;i<=100;i++)
                        this->attack_speed[i]=0;
                    int n=35;
                    while(n)
                    {
                        int poz=rand()%100;
                        if(this->attack_speed[poz]==0)
                        {
                            this->attack_speed[poz]=1;
                            n--;
                        }
                    }
                }
            }
        }

        void Getting_damaged_II(int dmg)
        {
            this->hp-=dmg;
        }

        void Getting_damaged(Creature &enemy)
        {
            srand(time(0));
            int initial_hp=this->hp;
            if(enemy.heavy_attack==1)
            {
                int raw_damage=enemy.power*2+4,damage_dealt=max(raw_damage-float((raw_damage*enemy.attack_debuff)/4)+float((raw_damage*enemy.attack_buff)/4),float(0));
                this->hp-=damage_dealt-float(damage_dealt/4)*this->defensive_aura;
                enemy.heavy_attack-=1;
            }
            else
            {
                this->hp-=enemy.power;
            }
            int hp_lost=initial_hp-this->hp;
            cout<<this->name<<" got damaged for "<<hp_lost<<'\n'<<"It has "<<this->hp<<" left\n";
            if(enemy.attack_speed[rand()%100]==1)
            {
                this->hp-=hp_lost/2;
                cout<<this->name<<" got damaged once more for "<<float(hp_lost/2)<<'\n'<<"It has "<<this->hp<<" left\n";
            }
        }


        void Zen_zone()
        {
            if(this->mode=='r' &&  this->hp<=this->max_hp/2)
                this->defensive_aura=2;
            else
                this->defensive_aura=3;
        }


        void Enter_God_Mode()
        {
            cout<<"You have chosen to start the ritual for "<<this->name<<" to become a god!\n";
            double chosen_shield=0.1;
            Creature God(chosen_shield);
            cout<<"The God to unite has been chosen\n";
            this->max_hp=God.max_hp;
            this->hp=God.hp;
            this->power=God.power;
            this->mode=God.mode;
            this->defensive_aura=God.defensive_aura;
            this->attack_buff=God.attack_buff;
            this->shilde=God.shilde;
            cout<<"You have sacrificed the life of "<<this->name<<", and the God is pleased!\n";
            cout<<"The ritual was successful, you control now a God in flesh and bones\n";
        }


        void Add_power_from_relic(Relic &relic)
        {
            this->max_hp+=relic.get_hp_for_creature();
            this->hp+=relic.get_hp_for_creature();
            this->power+=relic.get_power_offered_to_creature();
        }


        void Remove_power_from_relic(Relic &relic)
        {
            this->max_hp-=relic.get_hp_for_creature();
            this->hp-=relic.get_hp_for_creature();
            this->power-=relic.get_power_offered_to_creature();
        }

        void Add_buff_power(BuffCard & buffcard)
        {
            this->hp+=buffcard.get_hp_for_creature();
            this->attack_buff+=buffcard.get_power_offered_to_creature();
        }


        void Reduce_the_deff()
        {
            this->defensive_aura--;
        }

//Friends zone:

        friend ostream & operator << (ostream &out, Creature &creature);
        friend istream & operator >> (istream &in, Creature &creature);
        friend class Player;

};



class BackPack
{
    public:
        vector<Relic> relics_in_backpack;
        vector<BuffCard> buff_on_backpack;
};



class Player
{
    BackPack players_backpack;
    vector<Relic> relics_in_bag=players_backpack.relics_in_backpack;
    static int relics_owned;
//    vector<SpellCard> spell_on_hand;
    vector<BuffCard> buff_on_hand=players_backpack.buff_on_backpack;
    static int buffs_owned;
    map<int,int> player_money;
    map<int,int>::iterator player_money_iterator;
    char *name=(char*)malloc(256*sizeof(char));
    char *classes=(char*)malloc(256*sizeof(char));
    const char description[256]="Si asa o murit gigel";
    bool buff=false;
    char mode;
    float stress_level;
    int faith;
    double inteligence;
    int power;
    int max_relic_storage=10;
    int max_spell_storage=10;
    int max_buff_spell=10;

    list<char*> abilities;

    public:


// Setter and getter zone:
        void set_money()
        {
            for(int i=0;i<3;i++)
                this->player_money[i]=0;
        }

        void set_name()
        {
            this->name=(char *)malloc(256*sizeof(char));
            fgets(this->name,256,stdin);
            this->name[strlen(this->name)-1]='\0';
        }

        void set_buff_true()
        {
            this->buff=true;
        }

        void set_buff_false()
        {
            this->buff=false;
        }

        bool get_buff()
        {
            return this->buff;
        }

        int get_how_many_buffs()
        {
            return this->buffs_owned;
        }

        int get_how_many_relics()
        {
            return this->relics_owned;
        }

        char* get_name()
        {
            return this->name;
        }

        int get_power_of_player()
        {
            return this->power;
        }

        int get_faith_of_player()
        {
            return this->faith;
        }

        int get_inteligence_of_player()
        {
            return this->inteligence;
        }

        char get_mode()
        {
            return this->mode;
        }

        char* get_class()
        {
            return this->classes;
        }

// Constructors zone:
        Player(double chosen_shield)
        {
            this->mode='g';
            this->name=(char*)"God of War";
            this->classes=(char*)"God";
            this->faith=1000;
            this->inteligence=1000;
            this->power=1000;
            this->max_buff_spell=1000;
            this->max_relic_storage=1000;
            this->max_spell_storage=1000;
            this->stress_level=0;
        }//god mode;

        Player()
        {
            this->mode='w';
            this->faith=7;
            this->inteligence=3;
            this->power=15;
            this->max_buff_spell=10;
            this->max_relic_storage=10;
            this->max_spell_storage=10;
            this->stress_level=0;
            this->classes=(char*)"Warrior";
        }//warrior class

        Player(char chosen_mode,char* const chosen_class)
        {
            this->mode=chosen_mode;
            this->classes=chosen_class;
            this->faith=20;
            this->inteligence=10;
            this->power=7;
            this->max_buff_spell=15;
            this->max_relic_storage=7;
            this->max_spell_storage=10;
            this->stress_level=0;
        }//cleric class


        Player(char* const chosen_class)
        {
            this->mode='a';
            this->classes=chosen_class;
            this->faith=3;
            this->inteligence=25;
            this->power=5;
            this->max_buff_spell=4;
            this->max_relic_storage=7;
            this->max_spell_storage=30;
            this->stress_level=0;
        }//apprentice magician class


        Player(Player &the_save_spot)
        {
            this->mode=the_save_spot.get_mode();
            this->classes=the_save_spot.classes;
            this->faith=the_save_spot.get_faith_of_player();
            this->inteligence=the_save_spot.get_inteligence_of_player();
            this->power=the_save_spot.get_power_of_player();
            this->classes=the_save_spot.get_class();
        }//copy all aka enter god mode here;

        ~Player()
        {
            gout<<"This save has been deleted\n";
            free(name);
            free(classes);
        }



//Overload zone:

        void operator [](int index)
        {
            if(index==0)
                cout<<this->name<<" has "<<this->player_money[index]<<" copper;\n";
            if(index==1)
                cout<<this->name<<" has "<<this->player_money[index]<<" silver;\n";
            if(index==2)
                cout<<this->name<<" has "<<this->player_money[index]<<" gold;\n";
        }


        void operator ++()
        {
            cout<<"You have pleased the gods, and they bestow upon you gifts:\n-You got more strenght and you can carry 1 more relic;\n-You got more inteligence and can now add one more spell to your book;\n-You got more faith and now you can add 2 more buff cards to your arsenal;\nPraise the gods mortal, for they have been so generous.\n";
            this->max_buff_spell+=2;
            this->max_relic_storage+=1;
            this->max_spell_storage+=1;
        }

        void operator --()
        {
            cout<<"You have angered the gods, and they place upon you a permanent curse:\n-You got weaker and you can carry 1 less relic;\n-You got dumber and lost one page of your book;\n-You got are unfaithful so now you lose 2 buff cards from your arsenal;\nMay the gods have mercy on your sinner soul.\n";
            this->max_buff_spell-=2;
            this->max_relic_storage-=1;
            this->max_spell_storage-=1;
        }

        void operator =(int level_of_stress)
        {
            this->stress_level=level_of_stress;
            cout<<"You feel calmer and more concentrated now\n";
        }

        void operator +(int money_to_add)
        {
            int index_for_money;
            cout<<"Choose where you want to add more currency:\n1)copper;\n2)silver;\n3)gold;\n";
            cin>>index_for_money;
            if(index_for_money==1)
                this->player_money[index_for_money-1]+=money_to_add*30;
            if(index_for_money==2)
                this->player_money[index_for_money-1]+=money_to_add*10;
            if(index_for_money==3)
                this->player_money[index_for_money-1]+=max(money_to_add-3,1);
        }

        void operator -(int lose)
        {
            int index_for_money;
            cout<<"Choose what type of currency you want to use to pay:\n1)copper;\n2)silver;\n3)gold;\n";
            cin>>index_for_money;
            if(index_for_money==1)
                this->player_money[index_for_money-1]-=lose*100;
            if(index_for_money==2)
                this->player_money[index_for_money-1]-=lose*30;
            if(index_for_money==3)
                this->player_money[index_for_money-1]-=lose;
        }

        void operator ==(int necesarry_money)
        {
            int command;
            if(this->player_money[2]==necesarry_money)
                cout<<"You have the exact amount to buy this item. Will you buy it?(1 for yes || 0 for no)\n";
            cin>>command;
            if(command==1)
                this->player_money[2]=0;
            else
                cout<<"You decided to keep looking\n";
        }

        void operator >(int necesarry_money)
        {
            int command;
            if(this->player_money[2]>necesarry_money)
                cout<<"You have more then enough to buy this item. Will you buy it?(1 for yes || 0 for no)\n";
            cin>>command;
            if(command==1)
            {
                int index_for_money,q=1;
                cout<<"Choose what type of currency you want to use to pay:\n1)copper;\n2)silver;\n3)gold;\n";
                cin>>index_for_money;
                if(index_for_money==1)
                    q=100;
                if(index_for_money==2)
                    q=30;
                this->player_money[index_for_money]=this->player_money[index_for_money]-necesarry_money*q;
            }
            else
                cout<<"You decided to keep looking\n";
        }

        void operator <(int necesarry_money)
        {
            if(this->player_money[2]<necesarry_money)
                cout<<"You don't have the money to buy this item.\n";
            cout<<"You decided to keep looking\n";

        }

        operator int() const
        {
            return this->power;
        }
//function zone:

        void Learn_Ability(char* ability_to_add)
        {
            this->abilities.push_back(ability_to_add);
        }

        void Check_Abilitys()
        {
            int this_things_count=0;
            for(list_itr=this->abilities.begin();list_itr!=this->abilities.end();++list_itr)
            {
                this_things_count++;
                cout<<this_things_count<<")"<<*list_itr<<'\n';
            }
        }

        void Stress_reliver(Player &stresed_player)
        {
            int stress_reliver;
            cout<<"How much do you want to lower your stress?\n";
            cin>>stress_reliver;
            stresed_player=stress_reliver;
        }


        void Add_relic(Relic &relic,Creature &your_creature)
        {
            relics_in_bag.push_back(relic);
            this->relics_owned+=1;
            cout<<"The relic has been added to your inventory.\n";
            this->power+=relic.get_power_offered_to_player();
            this->faith+=relic.get_faith_offered_to_player();
            this->inteligence+=relic.get_intelligence_offered_to_player();
            your_creature.Add_power_from_relic(relic);
        }



        void Afis_relicve()
        {
            if(this->relics_owned>0)
            {
                cout<<"This is in your bag:\n";
                for(int i=0;i<this->relics_owned;i++)
                    cout<<i<<" "<<this->relics_in_bag[i].get_name()<<'\n';
            }
            else
            {
                cout<<"Your bag is empty\n";
            }
        }


        void Remove_relic_I(int it,Creature &your_creature)
        {
            //(this->relics_in_bag.begin()+it)->get_power_offered_to_creature();

            this->power-=this->relics_in_bag[it].get_power_offered_to_player();
            this->faith-=this->relics_in_bag[it].get_faith_offered_to_player();
            this->inteligence-=this->relics_in_bag[it].get_intelligence_offered_to_player();
            your_creature.Remove_power_from_relic(this->relics_in_bag[it]);

            //this->erase(this->relics_in_bag[it]);
            Relic copie=this->relics_in_bag[it];
            this->relics_in_bag[it]=this->relics_in_bag[this->relics_owned-1];
            this->relics_in_bag[this->relics_owned-1]=copie;
            this->relics_in_bag.pop_back();
            this->relics_owned--;

        }


        void Remove_relic_II(int it)
        {
            Relic copie=this->relics_in_bag[it];
            this->relics_in_bag[it]=this->relics_in_bag[this->relics_owned-1];
            this->relics_in_bag[this->relics_owned-1]=copie;
            this->relics_in_bag.pop_back();
            this->relics_owned--;
        }


        void Combine_relic(Player &player,Creature &your_creature)
        {
            if(player.relics_owned>1)
            {
                int first_index,second_index;
                player.Afis_relicve();
                cout<<"Choose the first relic to combine:";
                int valid_input_1=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>first_index)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(first_index>-1 && first_index<player.relics_owned)
                    {
                        valid_input_1=first_index;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input_1!=-1)
                        break;
                }
                cout<<"\nChoose the second one:";
                int valid_input_2=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>second_index)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(second_index>-1 && second_index<player.relics_owned && second_index!=first_index)
                    {
                        valid_input_2=second_index;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input_2!=-1)
                        break;
                }
                player.relics_in_bag[valid_input_1]+player.relics_in_bag[valid_input_2];
                player.Remove_relic_II(valid_input_2);
            }
            else
            {
                cout<<"You don't have enough relics to combine.\n";
            }
        }



        void Add_Buff_Card(BuffCard &buff_card)
        {
            this->buff_on_hand.push_back(buff_card);
            this->buffs_owned+=1;
            cout<<"The card has been placed in your collection, you can use it anytime\n";
            //fa sa iasa la final de lupta;
        }



        void Afis_buffs()
        {
            if(this->buffs_owned>0)
            {
                cout<<"This is in your inventory:\n";
                for(int i=0;i<this->buffs_owned;i++)
                    cout<<i<<" "<<this->buff_on_hand[i].get_name()<<'\n';
            }
            else
            {
                cout<<"Your bag is empty.\n";
            }
        }


        void Remove_buff(int it)
        {
            //(this->relics_in_bag.begin()+it)->get_power_offered_to_creature();

            //this->erase(this->relics_in_bag[it]);
            BuffCard copie=this->buff_on_hand[it];
            this->buff_on_hand[it]=this->buff_on_hand[this->buffs_owned-1];
            this->buff_on_hand[this->buffs_owned-1]=copie;
            this->buff_on_hand.pop_back();
            this->buffs_owned--;

        }


        void Combine_buffs(Player &player)
        {
            if(player.buffs_owned>1)
            {
                int first_index,second_index;
                player.Afis_buffs();
                cout<<"Choose the first buff to combine:";
                int valid_input_1=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>first_index)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(first_index>-1 && first_index<player.buffs_owned)
                    {
                        valid_input_1=first_index;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input_1!=-1)
                        break;
                }
                cout<<"\nChoose the second one:";
                int valid_input_2=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>second_index)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(second_index>-1 && second_index<player.buffs_owned && second_index!=first_index)
                    {
                        valid_input_2=second_index;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input_2!=-1)
                        break;
                }
                player.buff_on_hand[valid_input_1]+player.buff_on_hand[valid_input_2];
                player.Remove_buff(valid_input_2);
            }
            else
            {
                cout<<"You don't have enough relics to combine.\n";
            }
        }


        void Use_buff(Player &player,int pozition_of_buff,Creature &your_creature)
        {
            if(player.get_buff()==false)
            {
                player.set_buff_true();
            }
            your_creature.Add_buff_power(player.buff_on_hand[pozition_of_buff]);
            player.Remove_buff(pozition_of_buff);
        }

        void Upgrade_Relic(int index_for_upp,Creature &creature)
        {
            creature.Remove_power_from_relic(this->relics_in_bag[index_for_upp]);
            ++this->relics_in_bag[index_for_upp];
            creature.Add_power_from_relic(this->relics_in_bag[index_for_upp]);
        }

        void Upgrade_Buff(int index_for_upp)
        {
            ++this->buff_on_hand[index_for_upp];
        }

        void Afis_Relic_stats(int pozition_of_buff)
        {
            this->relics_in_bag[pozition_of_buff].afisare_bonusuri_relicva(this->relics_in_bag[pozition_of_buff]);
        }

        void Afis_Bonus_stats(int pozition_of_buff)
        {
            this->buff_on_hand[pozition_of_buff].afisare_bonusuri_relicva(this->buff_on_hand[pozition_of_buff]);
        }

        //Class powers:

        void Battle_Cry(Creature &your_creature)
        {
            your_creature.set_attack_buff();
        }

        void God_of_War(Creature &creature)
        {
            creature.Enter_God_Mode();
        }

        void Fire_Ball(Creature &e_creature)
        {
            e_creature.Getting_damaged_II(10);
        }

        void Iron_Maiden(Creature &y_creature,Creature &e_creature)
        {
            e_creature.Getting_damaged_II(42);
        }

        void Revitalize(Creature &your_creature)
        {
            your_creature.set_hp_added(3);
        }

        void Revive(Creature &your_creature)
        {
            if(your_creature.get_hp()==0)
            {
                 your_creature.set_hp((float)your_creature.get_max_hp()/2);
            }
        }


//Friends zone:


        friend ostream & operator << (ostream &out, Player &player);
        friend istream & operator >> (istream &in, Player &player);

};


int Player::relics_owned=0;
int Player::buffs_owned=0;
int Creature::defensive_aura=0;


/*Function zone:*/



void rest_menu()
{
    cout<<"Choose an action:\n1)Check your stats;\n2)Check creature's stats;\n3)Check relics;\n4)Add a relic;\n5)Remove relic;\n6)Combine 2 relics;\n7)Check the bonuses from the relic;\n8)Upgrade relic;\n9)Check buffs;\n10)Add a buff;\n11)Remove buff;\n12)Combine buffs;\n13)Check buff's bonuses;\n14)Upgrade Buff;\n15)Check creature's money;\n16)Add money to the creature;\n17)Enter a training fight;\n18)Enter God Mode\n19)Sacrifice a creature to gain it's power;\n20)Sign the pact for power;\n21)Give a fruit to your creature;\n22)Random damaging effect;\n0)End session;\n";
}


void fight_menu()
{
    cout<<"Choose an action:\n1)Check creature's stats;\n2)Perform a heavy attack;\n3)Attack the dummy;\n4)Defend;\n5)Get attacked;\n6)Check buff bonuses;\n7)Use buff;\n8)The gift from a God;\n9)The ritual to overcome;\n10)Exit the fight;\n11)Check your abilitys;\n0)End session;\n";
}


//Menu zone:
class Fighting_menu: public Menu_Interface<Creature,Player,Creature,BuffCard>
{
    public:
        virtual void command_1(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            cout<<players_creature;
        }

        virtual void command_2(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            players_creature.set_heavy_to_true();
                cout<<"You're charging a heavy attack, "<<players_creature.get_name()<<" is stuck until the charge is over\n";
        }
        virtual void command_3(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            enemys_creature.Getting_damaged(players_creature);
        }
        virtual void command_4(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            players_creature.Zen_zone();
        }
        virtual void command_5(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            players_creature.Getting_damaged(enemys_creature);
        }
        virtual void command_6(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            int index_for_verification;
            player.Afis_buffs();
            if(player.get_how_many_buffs()>0)
            {
                cout<<"Pick the buff you want to check the bonuses:";
                int valid_input=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>index_for_verification)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(index_for_verification>-1 && index_for_verification<player.get_how_many_buffs())
                    {
                        valid_input=index_for_verification;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input!=-1)
                        break;
                }
                cout<<'\n';
                player.Afis_Bonus_stats(valid_input);
            }
        }
        virtual void command_7(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            int buff_index;
            player.Afis_buffs();
            if(player.get_how_many_buffs()>0)
            {
                cout<<"Choose the position of the buff you want to use:";
                int valid_input=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>buff_index)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(buff_index>-1 && buff_index<player.get_how_many_buffs())
                    {
                        valid_input=buff_index;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input!=-1)
                        break;
                }
                player.Use_buff(player,valid_input,players_creature);
                cout<<"\n";
            }
        }
        virtual void command_8(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            long long hp_to_get;
            cout<<"The god of fortune has smiled upon you, and in this fight you get to pick your health!\nChoose your creatures health now mortal:";
            cin>>hp_to_get;
            players_creature=hp_to_get;
            if(players_creature.get_max_hp()>players_creature.get_true_hp())
                cout<<"The favor has been granted, "<<players_creature.get_name()<<" feels invincible\n";
            if(players_creature.get_max_hp()==players_creature.get_true_hp())
                cout<<"The favor has been granted, "<<players_creature.get_name()<<" feels the same\n";
            if(players_creature.get_max_hp()<players_creature.get_true_hp())
                cout<<"The favor has been granted, "<<players_creature.get_name()<<" feels weaker then before\n";
        }
        virtual void command_9(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            cout<<"The ritual has started, and the gods are watching the fight to the death\n";
            players_creature==enemys_creature.get_power();
            players_creature>enemys_creature.get_power();
            players_creature<enemys_creature.get_power();
            enemys_creature<players_creature.get_power();
        }
        virtual int command_10(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            cout<<"You stopped the fight with a dummy\n";
            return 1;
        }
        virtual int command_11(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            player.Check_Abilitys();
            return 1;
        }
        virtual int command_12(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_13(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_14(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_15(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_16(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_17(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_18(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_19(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_20(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_21(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
        virtual int command_22(Creature & players_creature,Player & player,Creature & enemys_creature, BuffCard &throwaway)
        {
            return 0;
        }
};

class Rest_menu: public Menu_Interface<Creature,Player,Relic,BuffCard>
{
    public:
        virtual void command_1(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            cout<<player;
        }
        virtual void command_2(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            cout<<players_creature;
        }
        virtual void command_3(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            player.Afis_relicve();
        }
        virtual void command_4(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            player.Add_relic(relic,players_creature);
            player.Add_relic(relic,players_creature);
            player.Add_relic(relic,players_creature);
        }
        virtual void command_5(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            player.Afis_relicve();
            if(player.get_how_many_relics()>0)
            {
                int it;
                cout<<"Choose the position of the relic you want to remove:";
                int valid_input=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>it)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(it>-1 && it<player.get_how_many_relics())
                    {
                        valid_input=it;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input!=-1)
                        break;
                }
                player.Remove_relic_I(valid_input,players_creature);
            }
            else
            {
                cout<<"You have nothing to remove\n";
            }
        }
        virtual void command_6(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            player.Combine_relic(player,players_creature);
        }
        virtual void command_7(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            if(player.get_how_many_relics()>0)
            {
                int index_for_verification;
                player.Afis_relicve();
                cout<<"Pick the relic you want to check the bonuses:";
                int valid_input=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>index_for_verification)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(index_for_verification>-1 && index_for_verification<player.get_how_many_relics())
                    {
                        valid_input=index_for_verification;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input!=-1)
                        break;
                }
                cout<<'\n';
                player.Afis_Relic_stats(valid_input);
            }
        }
        virtual void command_8(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            int index_for_upp;
            player.Afis_relicve();
            if(player.get_how_many_relics()>0)
            {
                cout<<"Choose what relic to upgrade:";
                int valid_input=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>index_for_upp)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(index_for_upp>-1 && index_for_upp<player.get_how_many_relics())
                    {
                        valid_input=index_for_upp;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input!=-1)
                        break;
                }
                player.Upgrade_Relic(valid_input,players_creature);
            }
            else
            {
                cout<<"You have nothing to upgrade\n";
            }
        }
        virtual void command_9(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            player.Afis_buffs();
        }
        virtual int command_10(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            player.Add_Buff_Card(card);
            player.Add_Buff_Card(card);
            player.Add_Buff_Card(card);
            return 0;
        }
        virtual int command_11(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            player.Afis_buffs();
            if(player.get_how_many_buffs()>0)
            {
                int it;
                cout<<"Choose the position of the buff you want to remove:";
                int valid_input=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>it)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(it>-1 && it<player.get_how_many_buffs())
                    {
                        valid_input=it;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input!=-1)
                        break;
                }
                player.Remove_buff(it);
            }
            else
            {
                cout<<"You have nothing to remove\n";
            }
            return 0;
        }
        virtual int command_12(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            player.Combine_buffs(player);
            return 0;
        }
        virtual int command_13(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            if(player.get_how_many_buffs()>0)
            {
                int index_for_verification;
                player.Afis_buffs();
                cout<<"Pick the buff you want to check the bonuses:";
                int valid_input=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>index_for_verification)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(index_for_verification>-1 && index_for_verification<player.get_how_many_buffs())
                    {
                        valid_input=index_for_verification;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input!=-1)
                        break;
                }
                cout<<'\n';
                player.Afis_Bonus_stats(index_for_verification);
            }
            return 0;
        }
        virtual int command_14(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            player.Afis_buffs();
            if(player.get_how_many_buffs()>0)
            {
                int it;
                cout<<"Choose the position of the buff you want to upgrade:";
                int valid_input=-1;
                while(true)
                {
                    while(true)
                    {
                        if(cin>>it)
                            break;
                        cin.clear();
                        cin.ignore();
                        cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                    }
                    if(it>-1 && it<player.get_how_many_buffs())
                    {
                        valid_input=it;
                    }
                    else
                    {
                        cout<<"Invalid command.Try again:";
                    }
                    if(valid_input!=-1)
                        break;
                }
                player.Upgrade_Buff(it);
            }
            else
            {
                cout<<"You have nothing to upgrade\n";
            }
            return 0;
        }
        virtual int command_15(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            players_creature[0];
            players_creature[1];
            players_creature[2];
            return 0;
        }
        virtual int command_16(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            int index,money;
            cout<<"Choose what you want to add:\n1 for copper\n2 for silver\n3 for gold\nCurrency type:";
            int valid_input=-1;
            while(true)
            {
                while(true)
                {
                    if(cin>>index)
                        break;
                    cin.clear();
                    cin.ignore();
                    cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
                }
                switch(index)
                {
                    case 1:
                    {
                        valid_input=index;
                        break;
                    }
                    case 2:
                    {
                        valid_input=index;
                        break;
                    }
                    case 3:
                    {
                        valid_input=index;
                        break;
                    }
                    default:
                    {
                        cout<<"Invalid command.Try again:";
                        break;
                    }
                }
                if(valid_input!=-1)
                    break;
            }
            cout<<"\nChoose how much:\nMoney:";
            cin>>money;
            players_creature.add_money(money,valid_input);
            return 0;
        }
        virtual int command_17(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            cout<<"You started the fight with a dummy\n";
            return 0;
        }
        virtual int command_18(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            players_creature.Enter_God_Mode();
            return 0;
        }
        virtual int command_19(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            cout<<"You choose to look for a lamb to grow more powerful.\n";
            ++players_creature;
            cout<<"The sacrifice has been accepted, "<<players_creature.get_name()<<" feels more powerful and healty!\n";
            return 0;
        }
        virtual int command_20(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            cout<<"You signed the Blood Contract!\n";
            --players_creature;
            cout<<"The sacrifice has been accepted, "<<players_creature.get_name()<<" feels so much powerful then before\n";
            return 0;
        }
        virtual int command_21(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            cout<<"You gave to "<<players_creature.get_name()<<" a mango\n";
            players_creature+(rand()%20+1);
            return 0;
        }
        virtual int command_22(Creature & players_creature,Player & player, Relic &relic, BuffCard &card)
        {
            cout<<players_creature.get_name()<<" got hit by a falling rock while walking on the mountain path and got damaged!\n";
            players_creature-(rand()%20+1);
            return 0;
        }
};

/*Ostream zone*/

ostream & operator << (ostream &out, Creature & creature)
{
    out<<"Creature stats:\n";
    out<<"Current hp:"<<creature.hp<<'\n';
    out<<"Current power:"<<creature.power<<'\n';
    out<<"Current defensive aura:"<<creature.defensive_aura<<'\n';
    out<<"Attack debuff is active for more:"<<creature.attack_debuff<<" turns\n";
    out<<"Attack buff is active for more:"<<creature.attack_buff<<" turns\n";
    out<<"Current shield:"<<creature.shilde<<'\n';
    return out;
}

ostream & operator << (ostream &out, Player &player)
{
    out<<"Your stats "<<player.name<<" are:\n";
    out<<"Current faith:"<<player.faith<<'\n';
    out<<"Current power:"<<player.power<<'\n';
    out<<"Current inteligence:"<<player.inteligence<<'\n';
    out<<"Current class:"<<player.classes<<'\n';
    out<<"Number of buffs:"<<player.buffs_owned<<'\n';
    out<<"Number of relics:"<<player.relics_owned<<'\n';
    out<<"Your stress level is:"<<player.stress_level<<'\n';
    return out;
}

ostream & operator << (ostream &out, BuffCard &buff)
{
    out<<"You read the buff:\n";
    out<<"Name:"<<buff.name<<'\n';
    out<<"Value:"<<buff.gradient_of_value<<'\n';
    out<<"Power bonus:"<<buff.added_power_to_creature<<'\n';
    out<<"Hp bonus:"<<buff.added_hp_to_creature<<"\n";
    return out;
}

ostream & operator << (ostream &out, Relic &relic)
{
    out<<"You read the description engrraved on the relic:\n";;
    out<<"Bonus hp for creature:"<<relic.added_hp_to_creature<<'\n';
    out<<"Bonus power for creature:"<<relic.added_power_to_creature<<'\n';
    out<<"Bonus in faith:"<<relic.faith_for_player<<'\n';
    out<<"Bonus in power:"<<relic.power_to_player<<"\n";
    out<<"Bonus in inteligence:"<<relic.inteligence_for_player<<"\n";
    out<<"Remaining durability:"<<relic.durability<<'\n';
    return out;
}

//istream zone:

istream & operator >> (istream &in, Creature &creature)
{
    int pozition,all_good=0;
    cout<<"In your journey, you'll need a creature under your control. We shall create this creature, after your own desire.\nPick the number of the option you want to do:\n1)Pick it's mode;\n2)Choose it's power and health;\n3)All of the above;\n4)None of the above;\n";
    cout<<"Your choice:";
    while(all_good!=1)
    {
        while(true)
        {
            if(in>>pozition)
                break;
            cin.clear();
            cin.ignore();
            cout<<"Please input a valid input.\nYour choice:";
        }
        cout<<"\n";
        switch(pozition)
        {
            case 1:
            {
                all_good=1;
                char whised_mode;
                cout<<"These are the available mods:\n1)Rage: when creature's health is lower then 50%, your creature will start becoming more aggressive, and it's power will grow;\n2)Adrenaline rush: when creature's health is lower then 50%, your creature will start becoming more agile, and it's speed will grow, allowing it to have a better chance of landing a second hit after the first one;\nPress 'r' for rage or 's' for speed:";
                while(true)
                {
                    in>>whised_mode;
                    if(whised_mode=='r' || whised_mode=='s')
                        break;
                    cin.clear();
                    cin.ignore();
                    cout<<"This is not a fiabble mode, please input a valid command.\nPress 'r' for rage or 's' for speed:";
                }
                creature.max_hp=100;
                creature.hp=creature.max_hp;
                creature.power=9;
                creature.mode=whised_mode;
                break;
            }
            case 2:
            {
                all_good=1;
                int whised_power,whised_health;
                cout<<"\nChoose you ideal power:";
                in>>whised_power;
                cout<<"\nChoose you ideal health:";
                in>>whised_health;
                cout<<'\n';
                creature.max_hp=whised_health;
                creature.hp=creature.max_hp;
                creature.power=whised_power;
                creature.mode='r';
                break;
            }
            case 3:
            {
                all_good=1;
                char whised_mode;
                int whised_power,whised_health;
                cout<<"These are the available mods:\n1)Rage: when creature's health is lower then 50%, your creature will start becoming more aggressive, and it's power will grow;\n2)Adrenaline rush: when creature's health is lower then 50%, your creature will start becoming more agile, and it's speed will grow, allowing it to have a better chance of landing a second hit after the first one;\nPress 'r' for rage or 's' for speed:";
                while(true)
                {
                    in>>whised_mode;
                    if(whised_mode=='r' || whised_mode=='s')
                        break;
                    cin.clear();
                    cin.ignore();
                    cout<<"This is not a fiabble mode, please input a valid command.\nPress 'r' for rage or 's' for speed:";
                }
                cout<<"\nChoose you ideal power:";
                in>>whised_power;
                cout<<"\nChoose you ideal health:";
                in>>whised_health;
                creature.max_hp=whised_health;
                creature.hp=creature.max_hp;
                creature.power=whised_power;
                creature.mode=whised_mode;
                break;
            }
            case 4:
            {
                all_good=1;
                creature.max_hp=100;
                creature.hp=creature.max_hp;
                creature.power=9;
                creature.mode='r';
                break;
            }
            default:
            {
                cout<<"Please input a valid input.\nYour choice:";
                break;
            }
        }
    }
    return in;
}

istream & operator >> (istream &in, Player &player)
{

    int pozition,all_good=0;
    creating_game_classes();
    char starting_text[256];
    while(fin.getline(starting_text,256))
    {
        cout<<starting_text<<'\n';
    }
    auto countdown_for_classes=0;
    for(itr=game_classes.begin();itr!=game_classes.end();++itr)
    {
        countdown_for_classes++;
        cout<<countdown_for_classes<<")"<<*itr<<"\n";
    }
    cout<<"Your choice:";
    while(all_good!=1)
    {
        while(true)
        {
            if(in>>pozition)
                break;
            in.clear();
            in.ignore();
            cout<<"You don't have to name the class, just input the number in front of the preferable starting class;\nYour choice:";
        }
        cout<<"\n";
        switch(pozition)
        {
            case 1:
            {
                all_good=1;
                player.mode='w';
                player.faith=7;
                player.inteligence=3;
                player.power=15;
                player.max_buff_spell=10;
                player.max_relic_storage=10;
                player.max_spell_storage=10;
                player.stress_level=0;
                player.classes=(char*)"Warrior";
                player.Learn_Ability((char*)"Battle Cry");
                player.Learn_Ability((char*)"Vengeful Spirit");
                break;
            }
            case 2:
            {
                all_good=1;
                player.mode='a';
                player.classes=(char*)"Apprentice Mage";
                player.faith=3;
                player.inteligence=25;
                player.power=5;
                player.max_buff_spell=4;
                player.max_relic_storage=7;
                player.max_spell_storage=30;
                player.stress_level=0;
                player.Learn_Ability((char*)"Fire Ball");
                player.Learn_Ability((char*)"Ice Joints");
                break;
            }
            case 3:
            {
                all_good=1;
                player.mode='c';
                player.classes=(char*)"Cleric";
                player.faith=20;
                player.inteligence=10;
                player.power=7;
                player.max_buff_spell=15;
                player.max_relic_storage=7;
                player.max_spell_storage=10;
                player.stress_level=0;
                player.Learn_Ability((char*)"Revitalize");
                player.Learn_Ability((char*)"Revive");
                player.Learn_Ability((char*)"Fire Ball");
                break;
            }
            default:
            {
                cout<<"Inexisting class, Rougue and outher classes will be added in the next big update.\nFor now, please input a valid command.\nYour choice:";
                break;
            }
        }
    }
    return in;
}


/*Main zone:*/



int main()
{
    int command=1,rest=1;
    int resting_turn=0;
    int fighting_turn=0;

    cout<<"What's your name player?\n";
    Player The_first_to_play;
    The_first_to_play.set_name();

    Relic The_first_relic;
    Relic The_second_relic;
    Relic The_third_relic;

    BuffCard The_first_buff;
    BuffCard The_second_buff;
    BuffCard The_third_buff;

    Creature The_first_one_born;
    cout<<"Choose a name for "<<The_first_one_born.get_name()<<":\n";
    The_first_one_born.set_name();
    cin>>The_first_to_play;
    cin>>The_first_one_born;
    Creature The_enemy;
    The_first_one_born.set_money();
    Fighting_menu fighting_menu;
    Rest_menu resting_menu;

    while(command!=0 && The_first_one_born.get_hp()>0)
    {
        if(command==2 && rest==0 && The_first_one_born.get_if_heavy()==true)
        {
            cout<<"You have performed a heavy attack, your turn has gone\n";
            The_enemy.Getting_damaged(The_first_one_born);
            The_first_one_born.set_heavy_to_false();
            continue;
        }
        if(The_first_one_born.get_defensive_aura()>0)
        {
            The_first_one_born.Reduce_the_deff();
        }
        if(rest==0)
        {
            fighting_turn++;
            resting_turn=0;
            cout<<"\nTurn in the fight:"<<fighting_turn<<'\n';
            cout<<'\n';
            fight_menu();
            cout<<"\nYour command will be:";
            while(true)
            {
                if(cin>>command)
                    break;
                cin.clear();
                cin.ignore();
                cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
            }
            switch(command)
            {
                case 0:
                {
                    continue;
                }
                case 1:
                {
                    fighting_menu.command_1(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 2:
                {
                    fighting_menu.command_2(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 3:
                {
                    fighting_menu.command_3(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 4:
                {
                    fighting_menu.command_4(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 5:
                {
                    fighting_menu.command_5(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 6:
                {
                    fighting_menu.command_6(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 7:
                {
                    fighting_menu.command_7(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 8:
                {
                    fighting_menu.command_8(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 9:
                {
                    fighting_menu.command_9(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 10:
                {
                    rest=fighting_menu.command_10(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                case 11:
                {
                    fighting_menu.command_11(The_first_one_born,The_first_to_play,The_enemy,The_first_buff);
                    break;
                }
                default :
                {
                    cout<<"Invalid command, please enter a valid option!\n";
                    fighting_turn--;
                    break;
                }
            }
        }
        if(rest==1)
        {
            resting_turn++;
            fighting_turn=0;
            cout<<"\nTurn resting:"<<resting_turn<<'\n';
            cout<<'\n';
            if(The_first_one_born.get_favor()==true)
            {
                cout<<"\nYour favor has gone, "<<The_first_one_born.get_name()<<" was set back to it's original hp\n";
                The_first_one_born.set_favor();
                The_first_one_born.set_to_true_hp();
            }
            if(The_first_to_play.get_buff()==true)
            {
                cout<<"\nYour favor has gone, "<<The_first_one_born.get_name()<<" was set back to it's original hp\n";
                The_first_to_play.set_buff_false();
                The_first_one_born.set_to_true_stats();
            }
            rest_menu();
            cout<<"\nYour command will be:";
            while(true)
            {
                if(cin>>command)
                    break;
                cin.clear();
                cin.ignore();
                cout<<"Invalid type for the input;Please input a integer!\n\nYour command will be:";
            }
            cout<<'\n';
            switch(command)
            {
                case 0:
                {
                    continue;
                }
                case 1:
                {
                    resting_menu.command_1(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 2:
                {
                    resting_menu.command_2(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 3:
                {
                    resting_menu.command_3(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 4:
                {
                    resting_menu.command_4(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 5:
                {
                    resting_menu.command_5(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 6:
                {
                    resting_menu.command_6(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 7:
                {
                    resting_menu.command_7(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 8:
                {
                    resting_menu.command_8(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 9:
                {
                    resting_menu.command_9(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 10:
                {
                    resting_menu.command_10(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 11:
                {
                    resting_menu.command_11(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 12:
                {
                    resting_menu.command_12(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 13:
                {
                    resting_menu.command_13(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 14:
                {
                    resting_menu.command_14(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 15:
                {
                    resting_menu.command_15(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 16:
                {
                    resting_menu.command_16(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 17:
                {
                    rest=resting_menu.command_17(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 18:
                {
                    resting_menu.command_18(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 19:
                {
                    resting_menu.command_19(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 20:
                {
                    resting_menu.command_20(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 21:
                {
                    resting_menu.command_21(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                case 22:
                {
                    resting_menu.command_22(The_first_one_born,The_first_to_play,The_first_relic,The_first_buff);
                    break;
                }
                default:
                {
                    cout<<"Invalid command, please enter a valid option!\n";
                    resting_turn--;
                    break;
                }
            }
        }
        if(The_first_one_born.get_hp()<=0)
            cout<<'\n'<<The_first_one_born.get_name()<<" has died, you cannot go on without him!\nGame over!";
    }
    return 0;
}
