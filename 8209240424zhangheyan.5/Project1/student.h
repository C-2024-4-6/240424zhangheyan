class Student              //ÀàÉùÃ÷
{public:
	Student() {};
	Student(int n, const char* na, char se)  
	{
		num = n;

		sex = se;
		int a = 0;
		while (na[a] != '\0' && a < 19) {
			name[a] = na[a];
			a++;
		}
		name[19] = '\0';
	}
	void set_value(int n, const char* na, char se)  
	{
		num = n;
		sex = se;
		int a = 0;
		while (na[a] != '\0' && a < 19) {
			name[a] = na[a];
			a++;
		}
		name[19] = '\0';
	}
	
public:
	void display();
private:
	int num;
	char name[20];
	char sex;
};
