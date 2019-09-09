  #include <stdio.h>
  #include <time.h>

  main(){
    int month[12], temp[12], i, temperatyra, misyatc;
    
    srand(time(0));
    
    for(i=0; i<12; i++){
      month[i]=i + 1;
      temp[i]=(rand()%36)-15;
    }
    
    for(i=0; i<12; i++){
      switch (month[i])
      {
        case 1 ... 2:
          misyatc="winter";
          if(temp[i]<=5 && temp[i]>=-15){
            temperatyra = "normal";
          }else{
            temperatyra = "abnormal";
          };
        break;
        case 3 ... 5:
          misyatc="sprint";
          if(temp[i]<=20 && temp[i]>=-5){
            temperatyra = "normal";
          }else{
            temperatyra = "abnormal";
          };
        break;
        case 6 ... 8:
          misyatc="summer";
          if(temp[i]<=35 && temp[i]>=15){
            temperatyra = "normal";
          }else{
            temperatyra = "abnormal";
          };
        break;
        case 9 ... 11:
          misyatc="autumn";
          if(temp[i]<=15 && temp[i]>=-5){
            temperatyra = "normal";
          }else{
            temperatyra = "abnormal";
          };
        break;

        case 12:
          misyatc="winter";
          if(temp[i]<=5 && temp[i]>=-15){
            temperatyra = "normal";
          }else{
            temperatyra = "abnormal";
          };
        break;

        default:
        break;
      }
      printf("%s %i %s \n",misyatc,temp[i],temperatyra);
    }

  }