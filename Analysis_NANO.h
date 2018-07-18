#ifndef VER
#define VER 2
#endif

#include "TLorentzVector.h"
#include "common/AnalysisBase_Nano_1.h"



//_______________________________________________________
//                  Calculate variables


//unsigned int nLooseIDHadTopTagJets;  


void
Analysis::calculate_variables(DataStruct& data, const unsigned int& syst_index)
{
  //unsigned int nLooseIDHadTopTagJets;
  //int pt=0;

  //pt == data.jet.pt;
  //nLooseIDHadTopTagJets = 0;
  //
  //// Loop on AK8 jets
  //
  //cout<<pt<<endl;
  //while(data.fatjet.Loop()) {
  //  if (data.fatjet.jetId[data.fatjet.it]) {
  //    if (passHadTopTag[data.fatjet.it]) ++nLooseIDHadTopTagJets;       
  //  }
  //} // end of AK8 jet loop
  //cout<<nLooseIDHadTopTagJets<<endl;
  cout<<"************************************************"<<nJet<<endl;
}

//_______________________________________________________
//                Define Skimming cuts
//   (Not needed, unless you want to skim the ntuple)

bool
Analysis::pass_skimming(DataStruct& data)
{
  int NJetAK8 = 0;
  while(data.fatjet.Loop()) {
    size_t i = data.fatjet.it;
    // pt cut intentionally removed to accept all jets for systematics
    if ( data.fatjet.jetId[i] == 1 &&
         std::abs(data.fatjet.eta[i])  <  JET_AK8_ETA_CUT ) {
      NJetAK8++;
    }
  }
  if (!(NJetAK8>=1)) return 0;
  if (!(data.evt.R2>=0.04)) return 0;

  float pt_threshold = 300;
  int N = 0;
  while(data.fatjet.Loop()) if (data.fatjet.pt[data.fatjet.it]>=pt_threshold) ++N;
  return (N >= 1);

  // Signal skim
  //return apply_all_cuts("S");
}

//_______________________________________________________
//          Define Analysis event selection cuts
//     Can define all sorts of Signal/Control regions



void
Analysis::define_selections(const DataStruct& d)
{
  analysis_cuts.clear();

// Define here cuts that are common in all Signal/Control regions
  // MET Filters, etc. are already applied in AnalysisBase.h, See baseline_cuts


  // cut0: signal mass region


 // P: Preselection region
  analysis_cuts['P'].push_back({ .name="1JetAK8",    .func = []    { return nJetAK8>=1;                       }});
  analysis_cuts['P'].push_back({ .name="3Jet",       .func = []    { return nJet>=3;                          }}); // Separate cut, so one can exclude (N-1)
  analysis_cuts['P'].push_back({ .name="MR",         .func = [&d]  { return d.evt.MR>=800;                    }});
  analysis_cuts['P'].push_back({ .name="R2",         .func = [&d]  { return d.evt.R2>=0.08;                   }});
  analysis_cuts['P'].push_back({ .name="HLT", .func = [this,&d] { return isData ? d.hlt.AK8PFJet450==1 || d.hlt.PFHT780==1 || d.hlt.PFHT890==1 : 1; }});
/*
  // Q: QCD enriched control sample
 analysis_cuts['Q'].push_back({ .name="1JetAK8",    .func = []    { return nJetAK8>=1;                       }});
  analysis_cuts['Q'].push_back({ .name="3Jet",       .func = []    { return nJet>=3;                          }});
  analysis_cuts['Q'].push_back({ .name="MR",         .func = [&d]  { return d.evt.MR>=800;                    }});
  analysis_cuts['Q'].push_back({ .name="R2",         .func = [&d]  { return d.evt.R2>=0.08;                   }});
  analysis_cuts['Q'].push_back({ .name="HLT",   .func = [this,&d]  { return isData ? d.hlt.AK8PFJet450==1 || d.hlt.PFHT800==1 || d.hlt.PFHT900==1 : 1; }});
  analysis_cuts['Q'].push_back({ .name="0Ele",       .func = []    { return nEleVeto==0;                      }});
  analysis_cuts['Q'].push_back({ .name="0Mu",        .func = []    { return nMuVeto==0;                       }});
  analysis_cuts['Q'].push_back({ .name="0IsoTrk",    .func = [&d]  { return d.evt.NIsoTrk==0;                 }});
  analysis_cuts['Q'].push_back({ .name="0b",         .func = []    { return nLooseBTag==0;                    }});
  analysis_cuts['Q'].push_back({ .name="1aTop",      .func = []    { return nHadTop0BAntiTag>=1;              }});
//analysis_cuts['Q'].push_back({ .name="InvmDPhi0p3",.func = []    { return minDeltaPhi<0.3;                  }});
  analysis_cuts['Q'].push_back({ .name="DPhiHemi",   .func = []        { return dPhiRazor>=2.8;                  }});

   // Q': Dphi Control region of QCD enriched sample
  analysis_cuts['q'].push_back({ .name="1JetAK8",    .func = []    { return nJetAK8>=1;                       }});
  analysis_cuts['q'].push_back({ .name="3Jet",       .func = []    { return nJet>=3;                          }});
  analysis_cuts['q'].push_back({ .name="MR",         .func = [&d]  { return d.evt.MR>=800;                    }});
  analysis_cuts['q'].push_back({ .name="R2",         .func = [&d]  { return d.evt.R2>=0.08;                   }});
  analysis_cuts['q'].push_back({ .name="HLT",   .func = [this,&d]  { return isData ? d.hlt.AK8PFJet450==1 || d.hlt.PFHT800==1 || d.hlt.PFHT900==1 : 1; }});
  analysis_cuts['q'].push_back({ .name="0Ele",       .func = []    { return nEleVeto==0;                      }});
  analysis_cuts['q'].push_back({ .name="0Mu",        .func = []    { return nMuVeto==0;                       }});
  analysis_cuts['q'].push_back({ .name="0IsoTrk",    .func = [&d]  { return d.evt.NIsoTrk==0;                 }});
  analysis_cuts['q'].push_back({ .name="0b",         .func = []    { return nLooseBTag==0;                    }});
  analysis_cuts['q'].push_back({ .name="1aTop",      .func = []    { return nHadTop0BAntiTag>=1;              }});
//analysis_cuts['q'].push_back({ .name="mDPhi",      .func = []    { return minDeltaPhi>=0.5;                 }});
  analysis_cuts['q'].push_back({ .name="DPhiHemi",   .func = []        { return dPhiRazor<2.8;                 }});

  // T: Top enriched control sample
  analysis_cuts['T'].push_back({ .name="1JetAK8",    .func = []    { return nJetAK8>=1;                       }});
  analysis_cuts['T'].push_back({ .name="3Jet",       .func = []    { return nJet>=3;                          }});
  analysis_cuts['T'].push_back({ .name="MR",         .func = [&d]  { return d.evt.MR>=800;                    }});
  analysis_cuts['T'].push_back({ .name="R2",         .func = [&d]  { return d.evt.R2>=0.08;                   }});
  analysis_cuts['T'].push_back({ .name="HLT",   .func = [this,&d]  { return isData ? d.hlt.AK8PFJet450==1 || d.hlt.PFHT800==1 || d.hlt.PFHT900==1 : 1; }});
  analysis_cuts['T'].push_back({ .name="1Lep",       .func = []    { return nLepVeto==1;                      }});
  analysis_cuts['T'].push_back({ .name="1Top",       .func = []    { return nHadTopTag>=1;                    }});
//analysis_cuts['T'].push_back({ .name="mDPhi",      .func = []    { return minDeltaPhi>=0.5;                 }});
  analysis_cuts['T'].push_back({ .name="DPhiHemi",      .func = []    { return dPhiRazor<2.8;                    }});
  analysis_cuts['T'].push_back({ .name="MT", .func = [] { return MT_vetolep<100; }});

  // W: W enriched control sample
 analysis_cuts['W'].push_back({ .name="1JetAK8",    .func = []    { return nJetAK8>=1;                       }});
  analysis_cuts['W'].push_back({ .name="3Jet",       .func = []    { return nJet>=3;                          }});
  analysis_cuts['W'].push_back({ .name="MR",         .func = [&d]  { return d.evt.MR>=800;                    }});
  analysis_cuts['W'].push_back({ .name="R2",         .func = [&d]  { return d.evt.R2>=0.08;                   }});
  analysis_cuts['W'].push_back({ .name="HLT",   .func = [this,&d]  { return isData ? d.hlt.AK8PFJet450==1 || d.hlt.PFHT800==1 || d.hlt.PFHT900==1 : 1; }});
  analysis_cuts['W'].push_back({ .name="1Lep",       .func = []    { return nLepVeto==1;                      }});
  analysis_cuts['W'].push_back({ .name="0b",         .func = []    { return nLooseBTag==0;                    }});
  analysis_cuts['W'].push_back({ .name="1mTop",      .func = []    { return nHadTop0BMassTag>=1;              }});
//analysis_cuts['W'].push_back({ .name="mDPhi",      .func = []    { return minDeltaPhi>=0.5;                 }});
  analysis_cuts['W'].push_back({ .name="DPhiHemi", .func = [] { return dPhiRazor<2.8; }});
  analysis_cuts['W'].push_back({ .name="MT",         .func = []        { return MT_vetolep>=30 && MT_vetolep<100; }});

 // S: Signal region
  analysis_cuts['S'].push_back({ .name="1JetAK8",    .func = []    { return nJetAK8>=1;                       }});
  analysis_cuts['S'].push_back({ .name="3Jet",       .func = []    { return nJet>=3;                          }}); // Separate cut, so one can exclude (N-1)
  analysis_cuts['S'].push_back({ .name="MR",         .func = [&d]  { return d.evt.MR>=800;                    }});
  analysis_cuts['S'].push_back({ .name="R2",         .func = [&d]  { return d.evt.R2>=0.08;                   }});
  analysis_cuts['S'].push_back({ .name="HLT",   .func = [this,&d]  { return isData ? d.hlt.AK8PFJet450==1 || d.hlt.PFHT800==1 || d.hlt.PFHT900==1 : 1; }});
  analysis_cuts['S'].push_back({ .name="0Ele",       .func = []    { return nEleVeto==0;                      }});
  analysis_cuts['S'].push_back({ .name="0Mu",        .func = []    { return nMuVeto==0;                       }});
  analysis_cuts['S'].push_back({ .name="0IsoTrk",    .func = [&d]  { return d.evt.NIsoTrk==0;                 }});
  analysis_cuts['S'].push_back({ .name="1Top",       .func = []    { return nHadTopTag>=1;                    }});
//analysis_cuts['S'].push_back({ .name="mDPhi",      .func = []    { return minDeltaPhi>=0.5;                 }});
  analysis_cuts['S'].push_back({ .name="DPhiHemi",   .func = []        { return dPhiRazor<2.8;                 }});

  // S': DPhi Control region of Signal region
  analysis_cuts['s'].push_back({ .name="1JetAK8",    .func = []    { return nJetAK8>=1;                       }});
  analysis_cuts['s'].push_back({ .name="3Jet",       .func = []    { return nJet>=3;                          }}); // Separate cut, so one can exclude (N-1)
  analysis_cuts['s'].push_back({ .name="MR",         .func = [&d]  { return d.evt.MR>=800;                    }});
  analysis_cuts['s'].push_back({ .name="R2",         .func = [&d]  { return d.evt.R2>=0.08;                   }});
  analysis_cuts['s'].push_back({ .name="HLT",   .func = [this,&d]  { return isData ? d.hlt.AK8PFJet450==1 || d.hlt.PFHT800==1 || d.hlt.PFHT900==1 : 1; }});
  analysis_cuts['s'].push_back({ .name="0Ele",       .func = []    { return nEleVeto==0;                      }});
  analysis_cuts['s'].push_back({ .name="0Mu",        .func = []    { return nMuVeto==0;                       }});
  analysis_cuts['s'].push_back({ .name="0IsoTrk",    .func = [&d]  { return d.evt.NIsoTrk==0;                 }});
  analysis_cuts['s'].push_back({ .name="1Top",       .func = []    { return nHadTopTag>=1;                    }});
//analysis_cuts['s'].push_back({ .name="InvmDPhi",   .func = []    { return minDeltaPhi<0.5;                  }});
  analysis_cuts['s'].push_back({ .name="DPhiHemi",   .func = []        { return dPhiRazor>=2.8;                  }});

*/ 
}//End of define_selection




void
Analysis::apply_scale_factors(DataStruct& data, const unsigned int& s, const std::vector<std::vector<double> >& nSigmaSFs)
{
 
 
  ////////////////////////////////////////////////////////////////
 ///        NEW SCALE FACTORS for NEW C.R. REGIONS (L & M)     //
////////////////////////////////////////////////////////////////



}

//_______________________________________________________
//                 Signal Region
//     Must define it, because we blind it in data!

bool
Analysis::signal_selection(const DataStruct& d) {
 return apply_all_cuts('S');
 return 0;
}


//_______________________________________________________
//                 List of Histograms

TH2D* h_S_MRR2;


TH1D* h_njet;
TH1D* h_MR_S;
TH1D* h_R2_S;




//_______________________________________________________
//              Define Histograms here
void
Analysis::init_analysis_histos(const unsigned int& syst_nSyst, const unsigned int& syst_index)
{
 // h_gen_toppt      = new TH1D("h_gen_toppt", "h_gen_toppt", 50, 0, 1000);
  
  //int nbn_HT = 19;
  //int nbn_MET = 10;
 
 
  //int nbn_AK8J1pt = 15;
 // int nbn_AK8j1toppt = 16;
  
 // int nbn_MTR = 8;

  int nbn_MR = 7;
  int nbn_R2 = 7;


 
  Double_t bn_MR_tmp[] = {0.,600.,800.,1000.,1200.,1600.,2000.,4000.};
  Double_t* bn_MR = 0;

  bn_MR = utils::getVariableBinEdges(nbn_MR+1,bn_MR_tmp);
  Double_t bn_R2_tmp[] = {0.,0.04,0.08,0.12,0.16,0.24,0.5,1.};

  Double_t* bn_R2 = 0;
  bn_R2 = utils:: getVariableBinEdges(nbn_R2+1,bn_R2_tmp); 

  

 // Double_t bn_AK8J1pt_tmp[] = {0.,200.,220.,240,260,280,300.,320.,340,360,380,400.,450,500.,700,1000.};
 // Double_t* bn_AK8J1pt = 0;
 // bn_AK8J1pt = utils::getVariableBinEdges(nbn_AK8J1pt+1,bn_AK8J1pt_tmp);

 

    //S Region; S, S34, Sge5-->  MRvsR2...3 2D plots for Closure Test
   
    h_S_MRR2 = new TH2D("S_MRR2", ";MR;R2",nbn_MR,bn_MR,nbn_R2,bn_R2);
      

   
   h_MR_S = new TH1D("MR_S", ";S_MR", nbn_MR, bn_MR);
   h_R2_S = new TH1D("R2_S", ";S_R2", nbn_R2,bn_R2);

   h_njet = new TH1D("njet", ";N_{jet}", 20, 0, 20);

  
}


//_______________________________________________________
//               Fill Histograms here
void
Analysis::fill_analysis_histos(DataStruct& data, const unsigned int& syst_index, const double& weight)
{
    double w = weight;

  //if (syst_index == 0) {
    

      w = 1;

  

   if (apply_all_cuts('P')) h_S_MRR2->Fill(data.evt.MR, data.evt.R2, w);
  
   if (apply_all_cuts('P')) h_MR_S->Fill(data.evt.MR, w);
   if (apply_all_cuts('P')) h_R2_S->Fill(data.evt.R2, w);
   if (apply_all_cuts('P')) h_njet->Fill(nJet, w);


   

//}


}

////>>>>>>>>>>>>>>>>>> Methods used by SmartHistos (Plotter)>>>>>>>>>>>>>>>>>>

void
Analysis::define_histo_options(const double& weight, const DataStruct& d, const unsigned int& syst_nSyst, const unsigned int& syst_index, bool runOnSkim=false)
{

}

void
Analysis::load_analysis_histos(std::string inputfile)
{
}
        
void
Analysis::save_analysis_histos(bool draw=0)
{

}
