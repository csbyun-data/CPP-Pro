class c
{
public:
	c()	{
		a = 0;
		strcpy(b, "");
	}
	
	set(int iVal, const char* pszVal) {
		a = iVal;
		strcpy(b, pszVal);
	}
	
	int a;
	char b[10];
}

c a[10];
c*p = a;

// p->set(32, "every");
a[0].set(32, "every");

// (p+1)->set(12, "under");
a[1].set(12, "under");

// p += 2;
// p->set(32, "show me the money");
a[2].set(32, "show me the money");
