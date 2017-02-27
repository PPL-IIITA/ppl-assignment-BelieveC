#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include "ChoosyGirls.hpp"
#include "DesperateGirls.hpp"
#include "NormalGirls.hpp"
#include "MiserBoys.hpp"
#include "GeekBoys.hpp"
#include "GenerousBoys.hpp"
#include "EssentialGifts.hpp"
#include "UtilityGifts.hpp"
#include "LuxuryGifts.hpp"
#include "Relationship.hpp"
#include "GiftRecord.hpp"

using namespace std;

bool essentialGiftSorter(ValentinePrimeTime::EssentialGifts lhs, ValentinePrimeTime::EssentialGifts rhs)
{
  return lhs.getPrice() < rhs.getPrice();
}

bool luxuryGiftSorter(ValentinePrimeTime::LuxuryGifts lhs, ValentinePrimeTime::LuxuryGifts rhs)
{
  return lhs.getPrice() < rhs.getPrice();
}

bool utilityGiftSorter(ValentinePrimeTime::UtilityGifts lhs, ValentinePrimeTime::UtilityGifts rhs)
{
  return lhs.getPrice() < rhs.getPrice();
}

bool geekBoysSorter(ValentinePrimeTime::GeekBoys lhs, ValentinePrimeTime::GeekBoys rhs)
{
  return lhs.getBudget() > rhs.getBudget();
}

bool genBoysSorter(ValentinePrimeTime::GenerousBoys lhs, ValentinePrimeTime::GenerousBoys rhs)
{
  return lhs.getBudget() > rhs.getBudget();
}

bool miserBoysSorter(ValentinePrimeTime::MiserBoys lhs, ValentinePrimeTime::MiserBoys rhs)
{
  return lhs.getBudget() > rhs.getBudget();
}

bool compatibilitySorter(ValentinePrimeTime::Relationship lhs, ValentinePrimeTime::Relationship rhs)
{
  return lhs.getCompatibleRating() > rhs.getCompatibleRating();
}
bool happinessSorter(ValentinePrimeTime::Relationship lhs, ValentinePrimeTime::Relationship rhs)
{
  return lhs.getHappinessRating() > rhs.getHappinessRating();
}

int totalGiftCost(string boyName, string girlName, int budget,int* value, vector<ValentinePrimeTime::UtilityGifts> U, vector<ValentinePrimeTime::EssentialGifts> E, vector<ValentinePrimeTime::LuxuryGifts> L, vector<ValentinePrimeTime::GiftRecord> *GR){
  int cost = 0;

  vector<ValentinePrimeTime::UtilityGifts>::iterator Uit = U.begin();
  vector<ValentinePrimeTime::LuxuryGifts>::iterator Lit = L.begin();
  vector<ValentinePrimeTime::EssentialGifts>::iterator Eit = E.begin();

  while( cost <= budget && (Uit!=U.end() || Lit!=L.end() || Eit!=E.end())){
    if(Uit!= U.end() && (*Uit).getPrice() <= (*Lit).getPrice() && (*Uit).getPrice() <= (*Eit).getPrice()){
      cost+=(*Uit).getPrice();
      Uit++;
      ValentinePrimeTime::GiftRecord tmp;

      tmp.setName((*Uit).getName());

      tmp.setBoyName(boyName);
      tmp.setGirlName(girlName);
      (*GR).push_back(tmp);
    }
    else if(Lit != L.end() && (*Lit).getPrice() <= (*Uit).getPrice() && (*Lit).getPrice() <= (*Eit).getPrice()){
      cost += 2*(*Lit).getPrice();
      Lit++;
      ValentinePrimeTime::GiftRecord tmp;
      tmp.setName((*Lit).getName());
      tmp.setBoyName(boyName);
      tmp.setGirlName(girlName);
      (*GR).push_back(tmp);
    }
    else if(Eit!= E.end()){
      cost+=(*Eit).getPrice();
      Eit++;

      ValentinePrimeTime::GiftRecord tmp;
      tmp.setName((*Eit).getName());
      tmp.setBoyName(boyName);
      tmp.setGirlName(girlName);
      (*GR).push_back(tmp);
    }
  }

  return cost;
}

int main()
{
  vector<ValentinePrimeTime::MiserBoys> M;
  vector<ValentinePrimeTime::GeekBoys> G;
  vector<ValentinePrimeTime::GenerousBoys> Ge;
  vector<ValentinePrimeTime::NormalGirls> N;
  vector<ValentinePrimeTime::ChoosyGirls> C;
  vector<ValentinePrimeTime::DesperateGirls> D;
  vector<ValentinePrimeTime::EssentialGifts> E;
  vector<ValentinePrimeTime::LuxuryGifts> L;
  vector<ValentinePrimeTime::UtilityGifts> U;
  vector<ValentinePrimeTime::Relationship> R;
  vector<ValentinePrimeTime::GiftRecord> GR;


  int a,b,c,d,e;
  char s[100];

  FILE* fp = fopen("data/inputGeekBoys.txt","r");  
  
  while(1){
    fscanf(fp,"%s %d %d %d %d %d",s,&a,&b,&c,&d,&e);
    string str(s);
    ValentinePrimeTime::GeekBoys tmp;
    tmp.setName(str);
    tmp.setAttractiveness(a);
    tmp.setIntelligenceLevel(b);
    tmp.setBudget(c);
    tmp.setCommitted(d);
    tmp.setReqAttraction(e);
    if(a == 0){
      break;
    }
    G.push_back(tmp);
  }

  fp = fopen("data/inputGenerousBoys.txt","r");
  while(1){
    fscanf(fp,"%s %d %d %d %d %d",s,&a,&b,&c,&d,&e);
    string str(s);
    ValentinePrimeTime::GenerousBoys tmp;
    tmp.setName(str);
    tmp.setAttractiveness(a);
    tmp.setIntelligenceLevel(b);
    tmp.setBudget(c);
    tmp.setCommitted(d);
    tmp.setReqAttraction(e);
    if(a == 0){
      break;
    }
    Ge.push_back(tmp);
  }

  fp = fopen("data/inputMiserBoys.txt","r");
  while(1){
    fscanf(fp,"%s %d %d %d %d %d",s,&a,&b,&c,&d,&e);
    string str(s);
    ValentinePrimeTime::MiserBoys tmp;
    tmp.setName(str);
    tmp.setAttractiveness(a);
    tmp.setIntelligenceLevel(b);
    tmp.setBudget(c);
    tmp.setCommitted(d);
    tmp.setReqAttraction(e);
    if(a == 0){
      break;
    }
    M.push_back(tmp);
  }

  //Girls Input
  fp = fopen("data/inputNormalGirls.txt","r");
  while(1){
    fscanf(fp,"%s %d %d %d %d",s,&a,&b,&c,&d);
    string str(s);
    ValentinePrimeTime::NormalGirls tmp;
    tmp.setName(str);
    tmp.setAttractiveness(a);
    tmp.setIntelligenceLevel(b);
    tmp.setMaintenanceCost(c);
    tmp.setCommitted(d);
    if(a == 0){
      break;
    }
    N.push_back(tmp);
  }
  
  fp = fopen("data/inputDesperateGirls.txt","r");
  while(1){
    fscanf(fp,"%s %d %d %d %d",s,&a,&b,&c,&d);
    string str(s);
    ValentinePrimeTime::DesperateGirls tmp;
    tmp.setName(str);
    tmp.setAttractiveness(a);
    tmp.setIntelligenceLevel(b);
    tmp.setMaintenanceCost(c);
    tmp.setCommitted(d);
    if(a == 0){
      break;
    }
    D.push_back(tmp);
  }

  fp = fopen("data/inputChoosyGirls.txt","r");
  while(1){
    fscanf(fp,"%s %d %d %d %d",s,&a,&b,&c,&d);
    string str(s);
    ValentinePrimeTime::ChoosyGirls tmp;
    tmp.setName(str);
    tmp.setAttractiveness(a);
    tmp.setIntelligenceLevel(b);
    tmp.setMaintenanceCost(c);
    tmp.setCommitted(d);
    if(a == 0){
      break;
    }
    C.push_back(tmp);
  }

  fp = fopen("data/inputEssentialGifts.txt","r");
  while(1){
    fscanf(fp,"%s %d %d",s,&a,&b);
    string str(s);
    ValentinePrimeTime::EssentialGifts tmp;
    tmp.setName(str);
    tmp.setPrice(a);
    tmp.setValue(b);
    if(a == 0){
      break;
    }
    E.push_back(tmp);
  }

  fp = fopen("data/inputUtilityGifts.txt","r");
  while(1){
    fscanf(fp,"%s %d %d %d",s,&a,&b,&c);
    string str(s);
    ValentinePrimeTime::UtilityGifts tmp;
    tmp.setName(str);
    tmp.setPrice(a);
    tmp.setValue(b);
    tmp.setUtilityValue(c);
    if(a == 0){
      break;
    }
    U.push_back(tmp);
  }

  fp = fopen("data/inputLuxuryGifts.txt","r");
  while(1){
    fscanf(fp,"%s %d %d %d %d",s,&a,&b,&c,&d);
    string str(s);
    ValentinePrimeTime::LuxuryGifts tmp;
    tmp.setName(str);
    tmp.setPrice(a);
    tmp.setValue(b);
    tmp.setDifficultyRating(b);
    tmp.setLuxuryRating(b);
    if(a == 0){
      break;
    }
    L.push_back(tmp);
  }

  sort(G.begin(),G.end(),&geekBoysSorter);
  sort(Ge.begin(),Ge.end(),&genBoysSorter);
  sort(M.begin(),M.end(),&miserBoysSorter);
  std::vector<ValentinePrimeTime::GeekBoys>::iterator Git = G.begin();
  std::vector<ValentinePrimeTime::GenerousBoys>::iterator Geit = Ge.begin();
  std::vector<ValentinePrimeTime::MiserBoys>::iterator Mit = M.begin();
  std::vector<ValentinePrimeTime::NormalGirls>::iterator Nit = N.begin();
  std::vector<ValentinePrimeTime::ChoosyGirls>::iterator Cit = C.begin();
  std::vector<ValentinePrimeTime::DesperateGirls>::iterator Dit = D.begin();

  while(Nit!=N.end()){ 
    if((*Nit).getCommitted() != 0){
      Nit++;
      continue;
    }

    int budget = (*Nit).getMaintenanceCost();
    int atr = (*Nit).getAttractiveness();
    int intelligence = (*Nit).getIntelligenceLevel();

    int flag = 1;
    Git = G.begin();
    Geit = Ge.begin();
    Mit = M.begin();
    
    while(flag && Git != G.end()){
      if((*Git).getBudget() >= budget && atr >= (*Git).getReqAttraction() && (*Git).getCommitted() == 0){
        ValentinePrimeTime::Relationship tmp;
        (*Nit).setCommitted(1);
        (*Git).setCommitted(1);

        tmp.setBoyName((*Git).getName());
        tmp.setGirlName((*Nit).getName());
        

        int comp = abs(budget - (*Git).getBudget())+ abs( atr - (int)(*Git).getAttractiveness())+ abs( intelligence - (int)(*Git).getIntelligenceLevel()) ; 
        
        tmp.setCompatibleRating(comp);
          
        int value = 0;
        int cost = totalGiftCost((*Git).getName(),(*Nit).getName(),(*Git).getBudget(),&value,U,E,L,&GR);
        cost = (*Nit).happiness(cost,value);
        tmp.setHappinessRating(cost + intelligence);
        R.push_back(tmp);
        flag = 0;
        
        break;
      }
      Git++;
    }

    while(flag && Geit != Ge.end()){
      if((*Geit).getBudget() >= budget && atr >= (*Geit).getReqAttraction() && (*Geit).getCommitted() == 0){
        ValentinePrimeTime::Relationship tmp;
        (*Nit).setCommitted(1);
        (*Geit).setCommitted(1);
        tmp.setBoyName((*Geit).getName());
        tmp.setGirlName((*Nit).getName());
        int comp = abs(budget - (*Geit).getBudget()) + abs(atr - (int)(*Geit).getAttractiveness()) + abs(intelligence - (int)(*Geit).getIntelligenceLevel());
        tmp.setCompatibleRating(comp);
        int value = 0;
        int cost = totalGiftCost((*Geit).getName(),(*Nit).getName(),(*Geit).getBudget(),&value,U,E,L,&GR);
        cost = (*Nit).happiness(cost,value);
        tmp.setHappinessRating(2*cost);
        R.push_back(tmp);
        flag = 0;
        break;
      }
      Geit++;
    }

    while(flag && Mit != M.end()){
      if((*Mit).getBudget() >= budget && atr >= (*Mit).getReqAttraction() && (*Mit).getCommitted() == 0){
        ValentinePrimeTime::Relationship tmp;
        (*Nit).setCommitted(1);
        (*Mit).setCommitted(1);
        tmp.setBoyName((*Mit).getName());
        tmp.setGirlName((*Nit).getName());
        int comp = abs(budget - (*Mit).getBudget()) + abs(atr - (int)(*Mit).getAttractiveness()) + abs(intelligence - (int)(*Mit).getIntelligenceLevel());
        tmp.setCompatibleRating(comp);
        int value = 0;
        int cost = totalGiftCost((*Mit).getName(),(*Nit).getName(),(*Mit).getBudget(),&value,U,E,L,&GR);
        cost = (*Nit).happiness(cost,value);
        tmp.setHappinessRating(cost + ((*Mit).getBudget() - cost));
        R.push_back(tmp);
        flag = 0;
        break;
      }
      Mit++;
    }

    Nit++;
  } 
  while(Dit!=D.end()){ 
    if((*Dit).getCommitted() != 0){
      Dit++;
      continue;
    }
    int budget = (*Dit).getMaintenanceCost();
    int atr = (*Dit).getAttractiveness();
    int intelligence = (*Dit).getIntelligenceLevel();

    int flag = 1;
    Git = G.begin();
    Geit = Ge.begin();
    Mit = M.begin();
    while(flag && Git != G.end()){
      if((*Git).getBudget() >= budget && atr >= (*Git).getReqAttraction() && (*Git).getCommitted() == 0){
        ValentinePrimeTime::Relationship tmp;
        (*Dit).setCommitted(1);
        (*Git).setCommitted(1);
        tmp.setBoyName((*Git).getName());
        tmp.setGirlName((*Dit).getName());
        double comp = abs(budget - (*Git).getBudget()) + abs(atr - (int)(*Git).getAttractiveness()) + abs(intelligence - (int)(*Git).getIntelligenceLevel());
        int value = 0;
        int cost = totalGiftCost((*Git).getName(),(*Dit).getName(),(*Git).getBudget(),&value,U,E,L,&GR);
        cost = (*Dit).happiness(cost);
        tmp.setHappinessRating(cost + intelligence);
        tmp.setCompatibleRating(comp);
        R.push_back(tmp);
        flag = 0;
        break;
      }
      Git++;
    }

    while(flag && Geit != Ge.end()){
      if((*Geit).getBudget() >= budget && atr >= (*Geit).getReqAttraction() && (*Geit).getCommitted() == 0){
        ValentinePrimeTime::Relationship tmp;
        (*Dit).setCommitted(1);
        (*Geit).setCommitted(1);
        tmp.setBoyName((*Geit).getName());
        tmp.setGirlName((*Dit).getName());
        double comp = abs(budget - (*Geit).getBudget()) + abs(atr - (int)(*Geit).getAttractiveness()) + abs(intelligence - (int)(*Geit).getIntelligenceLevel());
        tmp.setCompatibleRating(comp);
        int value = 0;
        int cost = totalGiftCost((*Geit).getName(),(*Dit).getName(),(*Geit).getBudget(),&value,U,E,L,&GR);
        cost = (*Dit).happiness(cost);
        tmp.setHappinessRating(2*cost);
        R.push_back(tmp);
        flag = 0;
        break;
      }
      Geit++;
    }

    while(flag && Mit != M.end()){
      if((*Mit).getBudget() >= budget && atr >= (*Mit).getReqAttraction() && (*Mit).getCommitted() == 0){
        ValentinePrimeTime::Relationship tmp;
        (*Dit).setCommitted(1);
        (*Mit).setCommitted(1);
        tmp.setBoyName((*Mit).getName());
        tmp.setGirlName((*Dit).getName());
        double comp = abs(budget - (*Mit).getBudget()) + abs(atr - (int)(*Mit).getAttractiveness()) + abs(intelligence - (int)(*Mit).getIntelligenceLevel());
        tmp.setCompatibleRating(comp);
        int value = 0;
        int cost = totalGiftCost((*Mit).getName(),(*Dit).getName(),(*Mit).getBudget(),&value,U,E,L,&GR);
        cost = (*Dit).happiness(cost);
        tmp.setHappinessRating(cost + ((*Mit).getBudget() - cost));
        R.push_back(tmp);
        flag = 0;
        break;
      }
      Mit++;
    }

    Dit++;
  }

  while(Cit!=C.end()){ 
    if((*Cit).getCommitted() != 0){
      Cit++;
      continue;
    }
    int budget = (*Cit).getMaintenanceCost();
    int atr = (*Cit).getAttractiveness();
    int intelligence = (*Cit).getIntelligenceLevel();

    int flag = 1;
    Git = G.begin();
    Geit = Ge.begin();
    Mit = M.begin();
    while(flag && Git != G.end()){
      if((*Git).getBudget() >= budget && atr >= (*Git).getReqAttraction() && (*Git).getCommitted() == 0){
        ValentinePrimeTime::Relationship tmp;
        (*Cit).setCommitted(1);
        (*Git).setCommitted(1);
        tmp.setBoyName((*Git).getName());
        tmp.setGirlName((*Cit).getName());
        double comp = abs(budget - (*Git).getBudget()) + abs(atr - (int)(*Git).getAttractiveness()) + abs(intelligence - (int)(*Git).getIntelligenceLevel());
        tmp.setCompatibleRating(comp);
        int value = 0;
        int cost = totalGiftCost((*Git).getName(),(*Cit).getName(),(*Git).getBudget(),&value,U,E,L,&GR);
        cost = (*Cit).happiness(cost);
        tmp.setHappinessRating(cost + intelligence);
        R.push_back(tmp);
        flag = 0;
        break;
      }
      Git++;
    }

    while(flag && Geit != Ge.end()){
      if((*Geit).getBudget() >= budget && atr >= (*Geit).getReqAttraction() && (*Geit).getCommitted() == 0){
        ValentinePrimeTime::Relationship tmp;
        (*Cit).setCommitted(1);
        (*Geit).setCommitted(1);
        tmp.setBoyName((*Geit).getName());
        tmp.setGirlName((*Cit).getName());
        double comp = abs(budget - (*Geit).getBudget()) + abs(atr - (int)(*Geit).getAttractiveness()) + abs(intelligence - (int)(*Geit).getIntelligenceLevel());
        tmp.setCompatibleRating(comp);
        int value = 0;
        int cost = totalGiftCost((*Geit).getName(),(*Cit).getName(),(*Geit).getBudget(),&value,U,E,L,&GR);
        cost = (*Cit).happiness(cost);
        tmp.setHappinessRating(2*cost);
        R.push_back(tmp);
        flag = 0;
        break;
      }
      Geit++;
    }

    while(flag && Mit != M.end()){
      if((*Mit).getBudget() >= budget && atr >= (*Mit).getReqAttraction() && (*Mit).getCommitted() == 0){
        ValentinePrimeTime::Relationship tmp;
        (*Cit).setCommitted(1);
        (*Mit).setCommitted(1);
        tmp.setBoyName((*Mit).getName());
        tmp.setGirlName((*Cit).getName());
        double comp = abs(budget - (*Mit).getBudget()) + abs(atr - (int)(*Mit).getAttractiveness()) + abs(intelligence - (int)(*Mit).getIntelligenceLevel());
        tmp.setCompatibleRating(comp);
        int value = 0;
        int cost = totalGiftCost((*Mit).getName(),(*Cit).getName(),(*Mit).getBudget(),&value,U,E,L,&GR);
        cost = (*Cit).happiness(cost);
        tmp.setHappinessRating(cost + ((*Mit).getBudget() - cost));
        R.push_back(tmp);
        flag = 0;
        break;
      }
      Mit++;
    }

    Cit++;
  }

  int k,j=0;
  cout<<"Enter value of K ";
  cin>>k;
  
  sort(R.begin(),R.end(),&happinessSorter);
  vector<ValentinePrimeTime::Relationship>::iterator it = R.begin();
  while(it!=R.end() && j<k){
    cout<<"BoyName: "<<(*it).getBoyName()<<", GirlName: "<<(*it).getGirlName()<<", HappinessRating: "<<(*it).getHappinessRating()<<endl;
    it++;
    j++;
  }
  printf("\n\n");
  j=0;
  sort(R.begin(),R.end(),&compatibilitySorter);
  it = R.begin();
  while(it!=R.end() && j<k){
    cout<<"BoyName: "<<(*it).getBoyName()<<", GirlName: "<<(*it).getGirlName()<<", CompatibleRating: "<<(*it).getCompatibleRating()<<endl;
    it++;
    j++;
  }
  printf("\n\n");
  cout<<GR.size()<<endl;
  vector<ValentinePrimeTime::GiftRecord>::iterator Grit = GR.begin();
  while(Grit!=GR.end()){
    cout<<(*Grit).getBoyName()<<" gifted "<<(*Grit).getName()<<" to "<<(*Grit).getGirlName()<<endl;
    Grit++;
  }

  return 0;
}
