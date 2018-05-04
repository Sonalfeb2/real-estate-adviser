#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>


int b=0;
int r=0;
int bk=0;
int location=0;

void bangalore();
void mumbai();
void delhi();
void kolkata();
void room();
void Book();

void flat()
{
if(location==1)
{
if(bk==2)
{
printf("\n#######Flat List of Banglore#######\n");
printf("\n##------2 Bhk-------##\n");
printf("# 1>> Residential Flat 1800 sqft for Buy.\n");
printf("#Address - Richmond Town, Bangalore.\n");
printf("#Cost- Rs 5000000\n");
printf("#Owner name - Vikash Mishra\n");
printf("#Contact No. - 9878932411\n");

printf("\n# 2>> Residential Flat 1400 sqft for Buy.\n");
printf("#Address - Rk Puram, Bangalore.\n");
printf("#Cost- Rs 4150000\n");
printf("#Owner name - Diljeet kaur\n");
printf("#Contact No. - 9834248851\n");


}

if(bk==3)
{
printf("\n#######Flat List of Banglore\n#######");
printf("\n##------3 Bhk-------##\n");
printf("\n# 1>>Residential Flat 1900 sqft for Buy.\n");
printf("#Address - Sadashiva Nagar, Bangalore\n");
printf("#Cost- Rs 6000000\n");
printf("#Owner name - Praveen Chadda\n");
printf("#Contact No. - 9432739411\n");

printf("\n# 2>>Residential Flat 1500 sqft for Buy\n");
printf("#Address - Whitefield, Bangalore\n");
printf("#Cost- Rs 5500000\n");
printf("#Owner name - Dharamveer Singh\n");
printf("#Contact No. - 9239494513\n");

printf("\n# 3>>Residential Flat 1700 sqft for Buy\n");
printf("#Address - Ganga Nagar, Bangalore\n");
printf("#Cost- Rs 47000\n");
printf("#Owner name - Tejveer Singh\n");
printf("#Contact No. - 9253434513\n");


}

else if(bk==4)
{
printf("\n#######Flat List of Banglore#######\n");
printf("\n##------4 Bhk-------##\n");
printf("\n# 1>>Residential Flat 2800 sqft for Buy.");
printf("#Address -  Kasturi Nagar, Bangalore\n");
printf("#Cost- Rs 1Crore 50Thousand \n");
printf("#Owner name - Rohan Sharma\n");
printf("#Contact No. - 9442812488\n");

printf("\n# 2>> Residential Flat 2000 sqft for Buy.\n");
printf("#Address - Electronic City, Bangalore.\n");
printf("#Cost- Rs 8000000\n");
printf("#Owner name - Sundar Mishra\n");
printf("#Contact No. - 9842345411\n");

}
}


else if(location==2)
{
if(bk==2)
{

printf("\n#######Flat List of Mumbai#######\n");
printf("\n##------2 Bhk-------##\n");
printf("\n# 1>>Residential Flat 1400 sqft for Buy  \n");
printf("#Address - Sindhi Society, Chembur, Mumbai.\n");
printf("#Cost- Rs 3500000\n");
printf("#Owner name - Ramesh chatterjee\n");
printf("#Contact No. - 9877923411\n");

printf("\n# 2>> Residential Flat 1150 sqft for Buy  \n");
printf("#Address - Dipti Pearls, JB Nagar, Mumbai.\n");
printf("#Cost- Rs 2500000\n");
printf("#Owner name - Shila Dikshit\n");
printf("#Contact No. - 9829230411\n");

}

if(bk==3)
{

printf("\n#######Flat List of Mumbai#######\n");
printf("\n##------3 Bhk-------##\n");
printf("\n# 1>> Residential Flat 1760 sqft for Buy\n");
printf("#Address - Sindhi Society, Chembur, Mumbai\n");
printf("#Cost- Rs 7400000\n");
printf("#Owner name - Rahul Singh\n");
printf("#Contact No. - 9978329241\n");


printf("\n# 2>> Residential Flat 1200 sqft for Buy\n");
printf("#Address - Kurla West, Mumbai\n");
printf("#Cost- Rs 4940060\n");
printf("#Owner name - Dharmesh Rajawat\n");
printf("#Contact No. - 9928355261\n");


}

else if(bk==4)
{

printf("\n#######Flat List of Mumbai#######\n");
printf("\n##------4 Bhk-------##\n");
printf("\n# 1>> Residential Flat 2600 sqft for Buy\n");
printf("#Address - Kasturi Nagar, Mumbai\n");
printf("#Cost- Rs 1Crore 25Thousand\n");
printf("#Owner name - Ram Pal\n");
printf("#Contact No. - 9879382344\n");

printf("\n# 2>> Residential Flat 2200 sqft for Buy\n");
printf("#Address - Sindhi Society, Chembur, Mumbai\n");
printf("#Cost- Rs 9500000\n");
printf("#Owner name - Ramprasaad Yadav\n");
printf("#Contact No. - 9879319624\n");

}

 }


else if(location==3)
{
if(bk==2)
{

printf("\n#######Flat List of Delhi#######\n");
printf("\n##------2 Bhk-------##\n");
printf("\n# 1>> Residential Flat 1300 for Buy\n");
printf("#Address - Palam Vihar Pocket B, Gurgaon, Delhi\n");
printf("#Cost- Rs 3400990\n");
printf("#Owner name - Rahul Tayagi\n");
printf("#Contact No. - 9842338941\n");



}

if(bk==3)
{
printf("\n#######Flat List of Delhi#######\n");
printf("\n##------3 Bhk-------##\n");
printf("\n# 1>> Residential Flat 1400 sqft for Buy\n");
printf("#Address - Sector 45, Gurgaon, Delhi\n");
printf("#Cost- Rs 3755000\n");
printf("#Owner name - Deepak Jhanjhorkar\n");
printf("#Contact No. - 9834223411\n");
}

else if(bk==4)
{
printf("\n#######Flat List of Delhi#######\n");
printf("\n##------4 Bhk-------\n");
printf("\n# 1>> Residential Flat 3000 sqft for Buy\n");
printf("#Address - Ansal Golf Links 1, Greater Noida\n");
printf("#Cost- Rs 2Crore\n");
printf("#Owner name - Vishnu Talvar\n");
printf("#Contact No. - 9839432451\n");


printf("\n# 2>> Residential Flat 3500 sqft for Buy\n");
printf("#Address - DLF City Phase 1, Gurgaon\n");
printf("#Cost-Rs 2Crore 50Thousand\n");
printf("#Owner name - Ranchordas Chanchar\n");
printf("#Contact No. - 9833221131\n");

}
}

else if(location==4)
{
if(bk==2)
{
printf("\n#######Flat List of Kolkata#######\n");
printf("\n##------2 Bhk-------##\n");
printf("\n# 1>> Residential Flat 2000 sqft for Buy\n");
printf("#Address - Ideal Enclave Phase II, Rajarhat Gopalpur, Kolkata.\n");
printf("#Cost- Rs 9000000\n");
printf("#Owner name - Surya Chatterjee\n");
printf("#Contact No. - 9843256411\n");

printf("\n# 2>> Residential Flat 1830 sqft for Buy\n");
printf("#Address - Sector 3 Salt Lake City , Kolkata.\n");
printf("#Cost- Rs 8500460\n");
printf("#Owner name - Sutapa Chatterjee\n");
printf("#Contact No. - 9843223411\n");

}

if(bk==3)
{
printf("\n#######Flat List of Kolkata#######\n");
printf("\n##------3 Bhk-------##\n");
printf("\n# 1>> Residential Flat 1700 sqft for Buy\n");
printf("#Address - Sector 6 Salt Lake City, Kolkata\n");
printf("#Cost- Rs 7469600\n");
printf("#Owner name - Sneha Maytii\n");
printf("#Contact No. - 9867544811\n");

printf("\n# 2>> Residential Flat 1600 sqft for Buy\n");
printf("#Address - Sector 6 Dum Dum, Kolkata\n");
printf("#Cost- Rs 6806000\n");
printf("#Owner name - Vikram Pal\n");
printf("#Contact No. - 9868534711\n");
}

else if(bk==4)
{
printf("\n#######Flat List of Kolkata#######\n");
printf("\n##------4 Bhk-------##\n");
printf("\n# 1>> Residential Flat 2200 sqft for Buy\n");
printf("#Address - Sector 1 Salt Lake City , Kolkata\n");
printf("#Cost- Rs 1Crore 10thousand\n");
printf("#Owner name - Satayakee Das\n");
printf("#Contact No. - 9839246711\n");

printf("\n# 1>> Residential Flat 2500 sqft for Buy\n");
printf("#Address - Dhramtalla , Kolkata\n");
printf("#Cost- Rs 1Crore 40thousand\n");
printf("#Owner name - Promit Biswaas\n");
printf("#Contact No. - 9639356711\n");
}

}
Book();
}

//--------------------------------------------------------------------------

void land()
{
int acr=1,cost=0;
char ch;
printf("\t####Land Dealing####\n");
printf(":::::How Many Acr You Want To Buy:::::");
scanf("%d",&acr);
if(location==1)
{	
cost=acr*4000;
printf("\n#######Land In Banglore#######\n");

printf("\n#Your Total Cost of %d acr is cost =Rs %d \n",acr,cost);
printf("\n#Cost of Land = 4000 Per acr\n");
printf("#Land Dealer - Sonal Bansal\n");
printf("\n#Contact no. - 9321139930");
}
else if(location==2)
{
cost=acr*2000;
printf("\n#Land in Mumbai\n");
printf("\n#Your Total Cost of %d acr is cost =Rs %d \n",acr,cost);
printf("\n#Cost of Land = 2000 Per acr\n");
printf("#Land Dealer - Amir Sidique\n");
printf("\n#Contact no. - 9321139930");


}
else if(location==3)
{
	cost=acr*3000;
printf("\n#Land In Delhi\n");
printf("\n#Your Total Cost of %d acr is cost =Rs %d \n",acr,cost);
printf("\n#Cost of Land = 3000 Per acr\n");
printf("#Land Dealer - Ronak mishra\n");
printf("\n#Contact no. - 9321234930");

}
else if(location==4)
{
	cost=acr*2300;
printf("\n#Land in Kolkata\n");
printf("\n#Your Total Cost of %d acr is  cost =Rs %d\n",acr,cost);
printf("\n#Cost of Land = 2300 Per acr\n");
printf("#Land Dealer - Harish chatterjee\n");
printf("\n#Contact no. - 9331023332\n");
}

printf("\n####If You Want To Buy Land Then Contact Land Dealer####\n");
printf("\n\n####Thank You For Comming####\n");

Q:

printf("\n Press Q To Quit \n");
ch=getche();
if(ch=='Q' || ch=='q')
exit(0);

goto Q;

}

//--------------------------------------------------------------------------

void bhk()
{
if(location==1)
{
if(bk==2)
{

printf("\n#######House List of Banglore#######\n");
printf("\n##------2 Bhk-------##\n");
printf("\n# 1>> Residential House 1800 sqft for rent.\n");
printf("#Address - Richmond Town, Bangalore.\n");
printf("#Rent- Rs 50000\n");
printf("#Owner name - Vikash Mishra\n");
printf("#Contact No. - 9878932411\n");

printf("\n# 2>> Residential House 1400 sqft for rent.\n");
printf("#Address - Rk Puram, Bangalore.\n");
printf("#Rent- Rs 41500\n");
printf("#Owner name - Diljeet kaur\n");
printf("#Contact No. - 9834248851\n");


}

if(bk==3)
{

printf("\n#House List of Banglore\n");
printf("\n#------3 Bhk-------\n");
printf("\n# 1>>Residential House 1900 sqft for rent\n");
printf("#Address - Sadashiva Nagar, Bangalore\n");
printf("#Rent- Rs 60000\n");
printf("#Owner name - Praveen Chadda\n");
printf("#Contact No. - 9432739411\n");

printf("\n# 2>>Residential House 1500 sqft for rent\n");
printf("#Address - Whitefield, Bangalore\n");
printf("#Rent- Rs 55000\n");
printf("#Owner name - Dharamveer Singh\n");
printf("#Contact No. - 9239494513\n");

printf("\n# 3>>Residential House 1700 sqft for rent\n");
printf("#Address - Ganga Nagar, Bangalore\n");
printf("#Rent- Rs 47000\n");
printf("#Owner name - Tejveer Singh\n");
printf("#Contact No. - 9253434513\n");


}

else if(bk==4)
{

printf("\n#######House List of Banglore#######\n");
printf("\n##------4 Bhk-------##\n");
printf("\n# 1>>Residential House 2800 sqft for rent.\n");
printf("#Address -  Kasturi Nagar, Bangalore\n");
printf("#Rent- Rs 1Lakh 50Thousand \n");
printf("#Owner name - Rohan Sharma\n");
printf("#Contact No. - 9442812488\n");

printf("\n# 2>> Residential House 2000 sqft for rent.\n");
printf("#Address - Electronic City, Bangalore.\n");
printf("#Rent- Rs 80000\n");
printf("#Owner name - Sundar Mishra\n");
printf("#Contact No. - 9842345411\n");

}
}


else if(location==2)
{
if(bk==2)
{

printf("\n#######House List of Mumbai#######\n");
printf("\n##------2 Bhk-------##\n");
printf("\n# 1>>Residential House 1400 sqft for rent  \n");
printf("#Address - Sindhi Society, Chembur, Mumbai.\n");
printf("#Rent- Rs 35000\n");
printf("#Owner name - Ramesh chatterjee\n");
printf("#Contact No. - 9877923411\n");

printf("\n# 2>> Residential House 1150 sqft for rent  \n");
printf("#Address - Dipti Pearls, JB Nagar, Mumbai.\n");
printf("#Rent- Rs 25000\n");
printf("#Owner name - Shila Dikshit\n");
printf("#Contact No. - 9829230411\n");

}

if(bk==3)
{

printf("\n#######House List of Mumbai#######\n");
printf("\n##------3 Bhk-------##\n");
printf("\n# 1>> Residential House 1760 sqft for rent\n");
printf("#Address - Sindhi Society, Chembur, Mumbai\n");
printf("#Rent- Rs 74000\n");
printf("#Owner name - Rahul Singh\n");
printf("#Contact No. - 9978329241\n");


printf("\n# 2>> Residential House 1200 sqft for rent\n");
printf("#Address - Kurla West, Mumbai\n");
printf("#Rent- Rs 49460\n");
printf("#Owner name - Dharmesh Rajawat\n");
printf("#Contact No. - 9928355261\n");


}

else if(bk==4)
{

printf("\n#######House List of Mumbai#######\n");
printf("\n##------4 Bhk-------##\n");
printf("\n# 1>> Residential House 2600 sqft for rent\n");
printf("#Address - Kasturi Nagar, Mumbai\n");
printf("#Rent- Rs 1Lakh 25Thousand\n");
printf("#Owner name - Ram Pal\n");
printf("#Contact No. - 9879382344\n");

printf("\n# 2>> Residential House 2200 sqft for rent\n");
printf("#Address - Sindhi Society, Chembur, Mumbai\n");
printf("#Rent- Rs 95000\n");
printf("#Owner name - Ramprasaad Yadav\n");
printf("#Contact No. - 9879319624\n");

}

 }


else if(location==3)
{
if(bk==2)
{

printf("\n#######House List of Delhi#######\n");
printf("\n##------2 Bhk-------##\n");
printf("\n# 1>> Residential House 1300 for rent\n");
printf("#Address - Palam Vihar Pocket B, Gurgaon, Delhi\n");
printf("#Rent- Rs 34990\n");
printf("#Owner name - Rahul Tayagi\n");
printf("#Contact No. - 9842338941\n");

}

if(bk==3)
{

printf("\n#######House List of Delhi#######\n");
printf("\n##------3 Bhk-------##\n");
printf("\n# 1>> Residential House 1400 sqft for rent\n");
printf("#Address - Sector 45, Gurgaon, Delhi\n");
printf("#Rent- Rs 37550\n");
printf("#Owner name - Deepak Jhanjhorkar\n");
printf("#Contact No. - 9834223411\n");
}

else if(bk==4)
{

printf("\n#######House List of Delhi#######\n");
printf("\n##------4 Bhk-------##\n");
printf("\n# 1>> Residential House 3000 sqft for rent\n");
printf("#Address - Ansal Golf Links 1, Greater Noida\n");
printf("#Rent- Rs 2lakh\n");
printf("#Owner name - Vishnu Talvar\n");
printf("#Contact No. - 9839432451\n");


printf("\n# 2>> Residential House 3500 sqft for rent\n");
printf("#Address - DLF City Phase 1, Gurgaon\n");
printf("#Rent-Rs 2lakh 50Thousand\n");
printf("#Owner name - Ranchordas Chanchar\n");
printf("#Contact No. - 9833221131\n");

}

}

else if(location==4)
{
if(bk==2)
{

printf("\n#######House List of Kolkata#######\n");
printf("\n##------2 Bhk-------##\n");
printf("\n# 1>> Residential House 2000 sqft for rent\n");
printf("#Address - Ideal Enclave Phase II, Rajarhat Gopalpur, Kolkata.\n");
printf("#Rent- Rs 90000\n");
printf("#Owner name - Surya Chatterjee\n");
printf("#Contact No. - 9843256411\n");


printf("\n# 2>> Residential House 1830 sqft for rent\n");
printf("#Address - Sector 3 Salt Lake City , Kolkata.\n");
printf("#Rent- Rs 85460\n");
printf("#Owner name - Sutapa Chatterjee\n");
printf("#Contact No. - 9843223411\n");



}

if(bk==3)
{

printf("\n#######House List of Kolkata#######\n");
printf("\n##------3 Bhk-------##\n");
printf("\n# 1>> Residential House 1700 sqft for rent\n");
printf("#Address - Sector 6 Salt Lake City, Kolkata\n");
printf("#Rent- Rs 74696\n");
printf("#Owner name - Sneha Maytii\n");
printf("#Contact No. - 9867544811\n");

printf("\n# 2>> Residential House 1600 sqft for rent\n");
printf("#Address - Sector 6 Dum Dum, Kolkata\n");
printf("#Rent- Rs 68060\n");
printf("#Owner name - Vikram Pal\n");
printf("#Contact No. - 9868534711\n");

}

else if(bk==4)
{

printf("\n#######House List of Kolkata#######\n");
printf("\n##------4 Bhk-------##\n");
printf("\n# 1>> Residential House 2200 sqft for rent\n");
printf("#Address - Sector 1 Salt Lake City , Kolkata\n");
printf("#Rent- Rs 1lakh 10thousand\n");
printf("#Owner name - Satayakee Das\n");
printf("#Contact No. - 9839246711\n");

printf("\n# 1>> Residential House 2500 sqft for rent\n");
printf("#Address - Dhramtalla , Kolkata\n");
printf("#Rent- Rs 1lakh 40thousand\n");
printf("#Owner name - Promit Biswaas\n");
printf("#Contact No. - 9639356711\n");

}
}
 Book();

}

//--------------------------------------------------------------------------

void room()
{

printf("\nRooms>>");

if(location==1)
{
printf("\n####Room List of Banglore####\n");
printf("\n# 1>> Residential Room is for rent.\n");
printf("#Address - Richmond Town, Bangalore.\n");
printf("#Rent- Rs 5000 per month\n");
printf("#Owner name - Vikash Mishra\n");
printf("#Contact No. - 9878932411\n");

printf("\n# 2>> Residential Room is for rent.\n");
printf("#Address - Rk Puram, Bangalore.\n");
printf("#Rent- Rs 4150 per month\n");
printf("#Owner name - Diljeet kaur\n");
printf("#Contact No. - 9834248851\n");

printf("\n# 3>>Residential Room is for rent\n");
printf("#Address - Sadashiva Nagar, Bangalore\n");
printf("#Rent- Rs 6000\n");
printf("#Owner name - Praveen Chadda\n");
printf("#Contact No. - 9432739411\n");


}
else if(location==2)
{

printf("\n####Room List of Mumbai####\n");
printf("\n# 1>>Residential Room is for rent\n");
printf("#Address - Sindhi Society, Chembur, Mumbai.\n");
printf("#Rent- Rs 3500 per month\n");
printf("#Owner name - Ramesh chatterjee\n");
printf("#Contact No. - 9877923411\n");

printf("\n# 2>> Residential Room is for rent  \n");
printf("#Address - Dipti Pearls, JB Nagar, Mumbai.\n");
printf("#Rent- Rs 2500\n");
printf("#Owner name - Shila Dikshit\n");
printf("#Contact No. - 9829230411\n");


printf("\n# 3>> Residential Room is for rent\n");
printf("#Address - Sindhi Society, Chembur, Mumbai\n");
printf("#Rent- Rs 74000\n");
printf("#Owner name - Rahul Singh\n");
printf("#Contact No. - 9978329241\n");


}

else if(location==3)
{
printf("\n#######Room List of Delhi#######\n");
printf("\n##------2 Bhk-------##\n");
printf("\n# 1>> Residential Room is for rent\n");
printf("#Address - Palam Vihar Pocket B, Gurgaon, Delhi\n");
printf("#Rent- Rs 3499\n");
printf("#Owner name - Rahul Tayagi\n");
printf("#Contact No. - 9842338941\n");

printf("\n# 2>> Residential Room is for rent\n");
printf("#Address - Sector 45, Gurgaon, Delhi\n");
printf("#Rent- Rs 3755\n");
printf("#Owner name - Deepak Jhanjhorkar\n");
printf("#Contact No. - 9834223411\n");

printf("\n# 3>> Residential Room is for rent\n");
printf("#Address - Ansal Golf Links 1, Greater Noida\n");
printf("#Rent- Rs 10000\n");
printf("#Owner name - Vishnu Talvar\n");
printf("#Contact No. - 9839432451\n");

}

else if(location==4)
{
printf("\n#######Room List of Kolkata#######\n");

printf("\n# 1>> Residential Room is for rent\n");
printf("#Address - Ideal Enclave Phase II, Rajarhat Gopalpur, Kolkata.\n");
printf("#Rent- Rs 9000\n");
printf("#Owner name - Surya Chatterjee\n");
printf("#Contact No. - 9843256411\n");


printf("\n# 2>> Residential Room is for rent\n");
printf("#Address - Sector 3 Salt Lake City, Kolkata.\n");
printf("#Rent- Rs 8546\n");
printf("#Owner name - Sutapa Chatterjee\n");
printf("#Contact No. - 9843223411\n");

printf("\n# 3>> Residential Room is for rent\n");
printf("#Address - Sector 6 Salt Lake City, Kolkata\n");
printf("#Rent- Rs 7469\n");
printf("#Owner name - Sneha Maytii\n");
printf("#Contact No. - 9867544811\n");

printf("\n# 2>> Residential House 1600 sqft for rent\n");
printf("#Address - Sector 6 Dum Dum, Kolkata\n");
printf("#Rent- Rs 68060\n");
printf("#Owner name - Vikram Pal\n");
printf("#Contact No. - 9868534711\n");

 }
 Book();


}


//--------------------------------------------------------------------------

void locations()
{
L:


int e;
printf("\t\t######Where you want to Buy?######\n");
printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf(" \n ");
printf("\t\t###------Location------###\n");
printf("\t1> Banglore\n");
printf("\t2> Mumbai\n");
printf("\t3> Delhi\n");
printf("\t4> Kolkata\n");

printf("\t-+-+-~~~ Enter the details as per your Choice ~~~-+-+-\n");
scanf("%d",&e);

switch(e)
{
case 1:
bangalore();
break;

case 2:
mumbai();
break;

case 3:
delhi();
break;

case 4:
kolkata();
break;

default:
printf("Wrong Input!!");
printf("~~~~####Please try again####~~~~");

goto L;

}


}

//--------------------------------------------------------------------------

void buy()
{

B:

int e;
printf("##What Do You Preffer To Buy?##\n");
printf("#1>Flat\n");
printf("#2>Land\n");

printf("###-~-~-~ Enter Your Choice ~-~-~-###\n");
scanf("%d",&e);

switch(e)
{

case 1:
b=1;
locations();
break;

case 2:
b=2;
locations();
break;

default:
printf("##Wrong Input!!##");
 
goto B;

}

}

//--------------------------------------------------------------------------

void rent()
{
U:

 
int e;
printf("##What Do You Preffer To Buy?##\n");
printf("#1>Room\n");
printf("#2>House\n");

printf("-~-~-~####Enter Your Choice####~-~-~-\n");
scanf("%d",&e);

switch(e)
{

case 1:
r=1;
locations();
break;

case 2:
r=2;
locations();
break;

default:
printf("##Wrong Input!!##");
 
goto U;

}

}

//--------------------------------------------------------------------------

void mainscreen()
{

R:

 
int e;
printf("\t\t~~~~~~~~{ Real Estate Advisor }~~~~~~~~\n");
printf("\t##What you are looking for - ##\n");
printf("\t#1) BUY \n");
printf("\t#2) RENT \n");

printf("\t\t-~-~-~###Enter Your Choice###~-~-~-\n");
printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
scanf("%d",&e);

switch(e)
{
case 1:
buy();
break;

case 2:
rent();
break;

default:
printf("##Wrong Input!!##");
 
goto R;

}
}


//--------------------------------------------------------------------------

void bangalore()
{
location=1;
H:
 
int e;
printf("##Banglore>>\n");

if(r==1)
{
room();
}


else if(r==2)
{
printf("##House Type>>\n");
printf("#1> 2BHK\n");
printf("#2> 3BHK\n");
printf("#3> 4BHK\n");


scanf("%d",&e);
switch(e)
{

case 1:
bk=2;
bhk();
break;


case 2:
bk=3;
bhk();
break;

case 3:
bk=4;
bhk();
break;

default:
 
printf("##Wrong Input!!##");
 
goto H;


}


}
else if(b==1)
{

printf("##Flat Type>>##\n");
printf("#1> 2BHK\n");
printf("#2> 3BHK\n");
printf("#3> 4BHK\n");

scanf("%d",&e);
switch(e)
{

case 1:
bk=2;
flat();
break;


case 2:
bk=3;
flat();
break;

case 3:
bk=4;
flat();
break;

default:
 
printf("##Wrong Input!!##");
 
goto H;
}
}
else if(b==2)
{
land();
}
}

//--------------------------------------------------------------------------

void mumbai()
{
location=2;
M:
 
int e;
printf("##Mumbai>>##\n");

if(r==1)
{
room();
}
else if(r==2)
{
printf("##House Type>>##\n");
printf("#1> 2BHK\n");
printf("#2> 3BHK\n");
printf("#3> 4BHK\n");
scanf("%d",&e);
switch(e)
{

case 1:
bk=2;
bhk();
break;

case 2:
bk=3;
bhk();
break;

case 3:
bk=4;
bhk();
break;

default:
 
printf("##Wrong Input!!##");
 
goto M;


}

}

else if(b==1)
{

printf("##Flat Type>>##\n");
printf("#1> 2BHK\n");
printf("#2> 3BHK\n");
printf("#3> 4BHK\n");

scanf("%d",&e);
switch(e)
{

case 1:
bk=2;
flat();
break;


case 2:
bk=3;
flat();
break;

case 3:
bk=4;
flat();
break;

default:
 
printf("##Wrong Input!!##");
 
goto M;


}
}
else if(b==2)
{
land();
}


}

//--------------------------------------------------------------------------

void delhi()
{
location=3;
D:
 
int e;
printf("##Delhi>>##\n");

if(r==1)
{
room();
}


else if(r==2)
{
printf("##House Type>>##\n");
printf("#1> 2BHK\n");
printf("#2> 3BHK\n");
printf("#3> 4BHK\n");

scanf("%d",&e);
switch(e)
{
case 1:
bk=2;
bhk();
break;

case 2:
bk=3;
bhk();
break;

case 3:
bk=4;
bhk();
break;

default:
 
printf("##Wrong Input!!##");
 
goto D;
}
}

else if(b==1)
{

printf("##Flat Type>>##\n");
printf("#1> 2BHK\n");
printf("#2> 3BHK\n");
printf("#3> 4BHK\n");

scanf("%d",&e);
switch(e)
{

case 1:
bk=2;
flat();
break;


case 2:
bk=3;
flat();
break;

case 3:
bk=4;
flat();
break;

default:
 
printf("##Wrong Input!!##");
 
goto D;
}
}

else if(b==2)
{
land();
}
}

//--------------------------------------------------------------------------

void kolkata()
{
location=4;
P:
 
int e;
printf("##Kolkata>>##\n");

if(r==1)
{
room();
}

else if(r==2)
{
printf("##House Type>>##\n");
printf("#1> 2BHK\n");
printf("#2> 3BHK\n");
printf("#3> 4BHK\n");


scanf("%d",&e);
switch(e)
{

case 1:
bk=2;
bhk();
break;


case 2:
bk=3;
bhk();
break;

case 3:
bk=4;
bhk();
break;

default:
 
printf("##Wrong Input!!##");
 
goto P;
}
}

else if(b==1)
{

printf("##Flat Type>>##\n");
printf("#1> 2BHK\n");
printf("#2> 3BHK\n");
printf("#3> 4BHK\n");

scanf("%d",&e);
switch(e)
{

case 1:
bk=2;
flat();
break;

case 2:
bk=3;
flat();
break;

case 3:
bk=4;
flat();
break;

default:

printf("##Wrong Input!!##");
 
goto P;
}
}

else if(b==2)
{
land();
}
}

//--------------------------------------------------------------------------

void Book()
{
int o;
char ch,name[20],cno[11];
printf("\n\n####If You want to Book Any Of Them##### \n");
scanf("%d",&o);
printf("\n###Enter Your Name###  ");
scanf("%s",&name);

printf("\n###Enter your Contact No.### ");
scanf("%s",&cno);
printf("\n\n\n####Thank You %s For Booking#### ",name);
printf("\n####We Will Contact You Within 24hours#### \n");

Q:

printf("\n Press Q To Quit \n");
ch=getche();
if(ch=='Q' || ch=='q')
exit(0);

goto Q;
}

int main()
{

mainscreen();

getch();
return 0;

}
