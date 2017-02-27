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
    fscanf(fp,"%d %d",&a,&b);
    ValentinePrimeTime::EssentialGifts tmp;
    tmp.setPrice(a);
    tmp.setValue(b);
    if(a == 0){
      break;
    }
    E.push_back(tmp);
  }

  fp = fopen("data/inputUtilityGifts.txt","r");
  while(1){
    fscanf(fp,"%d %d %d",&a,&b,&c);
    ValentinePrimeTime::UtilityGifts tmp;
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
    fscanf(fp,"%d %d %d %d",&a,&b,&c,&d);
    ValentinePrimeTime::LuxuryGifts tmp;
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
        R.push_back(tmp);
        flag = 0;
        break;
      }
      Mit++;
    }

    Cit++;
  }

  vector<ValentinePrimeTime::Relationship>::iterator it = R.begin();
  while(it!=R.end()){
    cout<<"Boyname: "(*it).getBoyName()<<" Girlname "<<(*it).getGirlName()<<endl;
    it++;
  }
  return 0;
}
