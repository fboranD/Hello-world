#ifndef DataStruct_h
#define DataStruct_h

#define NOVAL_I -9999
#define NOVAL_F -9999.0

#include <vector>
#include <iostream>

inline void init_vec(std::vector<int>& vec) { vec.resize(500); for (int i=0; i<500; ++i) vec[i]=-9999; }
inline void init_vec(std::vector<float>& vec) { vec.resize(500); for (int i=0; i<500; ++i) vec[i]=-9999; }
inline void init_vec(std::vector<double>& vec) { vec.resize(500); for (int i=0; i<500; ++i) vec[i]=-9999; }
inline void init_vec(std::vector<std::vector<int> >& vec) { vec.resize(1); vec[0].resize(500); for (int i=0; i<500; ++i) vec[0][i]=-9999; }

class DataStruct {
public:
  DataStruct() {};
  ~DataStruct() {};

  class METData {
    public:
      METData() { init(); };
      
      int phi;
      int pt;
      int sumEt;
    
      void init() {
        phi=NOVAL_F;
        pt=NOVAL_F;
        sumEt=NOVAL_F;
    }
    
  } rawmet;
    class PuppiMETData {
    public:
      PuppiMETData() { init(); };
      
    
      void init() {
    }
    
  } puppimet;
    class PileupData {
    public:
      PileupData() { init(); };
      
      int nTrueInt;
      int nPU;
      int sumEOOT;
      int sumLOOT;
    
      void init() {
        nTrueInt=NOVAL_F;
        nPU=NOVAL_F;
        sumEOOT=NOVAL_F;
        sumLOOT=NOVAL_F;
    }
    
  } pu;
    class HLTData {
    public:
      HLTData() { init(); };
      
      int AK8PFJet360_TrimMass30;
      int AK8PFJet380_TrimMass30;
      int AK8PFJet400_TrimMass30;
      int AK8PFJet420_TrimMass30;
      int AK8PFHT750_TrimMass50;
      int AK8PFHT800_TrimMass50;
      int AK8PFHT850_TrimMass50;
      int AK8PFHT900_TrimMass50;
      int CaloJet500_NoJetID;
      int CaloJet550_NoJetID;
      int Trimuon5_3p5_2_Upsilon_Muon;
      int DoubleEle25_CaloIdL_MW;
      int DoubleEle27_CaloIdL_MW;
      int DoubleEle33_CaloIdL_MW;
      int DoubleEle24_eta2p1_WPTight_Gsf;
      int DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350;
      int DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350;
      int Ele27_Ele37_CaloIdL_MW;
      int Mu27_Ele37_CaloIdL_MW;
      int Mu37_Ele27_CaloIdL_MW;
      int Mu37_TkMu27;
      int DoubleMu4_3_Bs;
      int DoubleMu4_3_Jpsi_Displaced;
      int DoubleMu4_JpsiTrk_Displaced;
      int DoubleMu4_LowMassNonResonantTrk_Displaced;
      int DoubleMu3_Trk_Tau3mu;
      int DoubleMu4_PsiPrimeTrk_Displaced;
      int DoubleMu4_Mass8_DZ_PFHT350;
      int DoubleMu8_Mass8_PFHT350;
      int Mu3_PFJet40;
      int Mu7p5_L2Mu2_Jpsi;
      int Mu7p5_L2Mu2_Upsilon;
      int Mu7p5_Track2_Jpsi;
      int Mu7p5_Track3p5_Jpsi;
      int Mu7p5_Track7_Jpsi;
      int Mu7p5_Track2_Upsilon;
      int Mu7p5_Track3p5_Upsilon;
      int Mu7p5_Track7_Upsilon;
      int DoublePhoton33_CaloIdL;
      int DoublePhoton70;
      int DoublePhoton85;
      int Ele20_WPTight_Gsf;
      int Ele20_WPLoose_Gsf;
      int Ele20_eta2p1_WPLoose_Gsf;
      int DiEle27_WPTightCaloOnly_L1DoubleEG;
      int Ele27_WPTight_Gsf;
      int Ele32_WPTight_Gsf;
      int Ele35_WPTight_Gsf;
      int Ele35_WPTight_Gsf_L1EGMT;
      int Ele38_WPTight_Gsf;
      int Ele40_WPTight_Gsf;
      int Ele32_WPTight_Gsf_L1DoubleEG;
      int HT450_Beamspot;
      int HT300_Beamspot;
      int IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1;
      int IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1;
      int IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1;
      int IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1;
      int IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1;
      int IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1;
      int IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1;
      int IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1;
      int IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1;
      int IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1;
      int IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1;
      int IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1;
      int IsoMu20;
      int IsoMu24;
      int IsoMu24_eta2p1;
      int IsoMu27;
      int IsoMu30;
      int UncorrectedJetE30_NoBPTX;
      int UncorrectedJetE30_NoBPTX3BX;
      int UncorrectedJetE60_NoBPTX3BX;
      int UncorrectedJetE70_NoBPTX3BX;
      int L1SingleMu18;
      int L1SingleMu25;
      int L2Mu10;
      int L2Mu10_NoVertex_NoBPTX3BX;
      int L2Mu10_NoVertex_NoBPTX;
      int L2Mu45_NoVertex_3Sta_NoBPTX3BX;
      int L2Mu40_NoVertex_3Sta_NoBPTX3BX;
      int L2Mu50;
      int DoubleL2Mu50;
      int Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
      int Mu19_TrkIsoVVL_Mu9_TrkIsoVVL;
      int Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
      int Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ;
      int Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;
      int Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8;
      int Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;
      int Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8;
      int Mu25_TkMu0_Onia;
      int Mu30_TkMu0_Onia;
      int Mu20_TkMu0_Phi;
      int Mu25_TkMu0_Phi;
      int Mu20;
      int Mu27;
      int Mu50;
      int Mu55;
      int OldMu100;
      int TkMu100;
      int DiPFJet15_NoCaloMatched;
      int DiPFJet25_NoCaloMatched;
      int DiPFJet15_FBEta3_NoCaloMatched;
      int DiPFJet25_FBEta3_NoCaloMatched;
      int DiPFJetAve40;
      int DiPFJetAve60;
      int DiPFJetAve80;
      int DiPFJetAve140;
      int DiPFJetAve200;
      int DiPFJetAve260;
      int DiPFJetAve320;
      int DiPFJetAve400;
      int DiPFJetAve500;
      int DiPFJetAve15_HFJEC;
      int DiPFJetAve25_HFJEC;
      int DiPFJetAve35_HFJEC;
      int DiPFJetAve60_HFJEC;
      int DiPFJetAve80_HFJEC;
      int DiPFJetAve100_HFJEC;
      int DiPFJetAve160_HFJEC;
      int DiPFJetAve220_HFJEC;
      int DiPFJetAve300_HFJEC;
      int AK8PFJet40;
      int AK8PFJet60;
      int AK8PFJet80;
      int AK8PFJet140;
      int AK8PFJet200;
      int AK8PFJet260;
      int AK8PFJet320;
      int AK8PFJet400;
      int AK8PFJet450;
      int AK8PFJet500;
      int AK8PFJet550;
      int PFJet40;
      int PFJet60;
      int PFJet80;
      int PFJet140;
      int PFJet200;
      int PFJet260;
      int PFJet320;
      int PFJet400;
      int PFJet450;
      int PFJet500;
      int PFJet550;
      int PFJetFwd40;
      int PFJetFwd60;
      int PFJetFwd80;
      int PFJetFwd140;
      int PFJetFwd200;
      int PFJetFwd260;
      int PFJetFwd320;
      int PFJetFwd400;
      int PFJetFwd450;
      int PFJetFwd500;
      int AK8PFJetFwd40;
      int AK8PFJetFwd60;
      int AK8PFJetFwd80;
      int AK8PFJetFwd140;
      int AK8PFJetFwd200;
      int AK8PFJetFwd260;
      int AK8PFJetFwd320;
      int AK8PFJetFwd400;
      int AK8PFJetFwd450;
      int AK8PFJetFwd500;
      int PFHT180;
      int PFHT250;
      int PFHT370;
      int PFHT430;
      int PFHT510;
      int PFHT590;
      int PFHT680;
      int PFHT780;
      int PFHT890;
      int PFHT1050;
      int PFHT500_PFMET100_PFMHT100_IDTight;
      int PFHT500_PFMET110_PFMHT110_IDTight;
      int PFHT700_PFMET85_PFMHT85_IDTight;
      int PFHT700_PFMET95_PFMHT95_IDTight;
      int PFHT800_PFMET75_PFMHT75_IDTight;
      int PFHT800_PFMET85_PFMHT85_IDTight;
      int PFMET110_PFMHT110_IDTight;
      int PFMET120_PFMHT120_IDTight;
      int PFMET130_PFMHT130_IDTight;
      int PFMET140_PFMHT140_IDTight;
      int PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1;
      int PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1;
      int PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1;
      int PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1;
      int PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1;
      int PFMET120_PFMHT120_IDTight_PFHT60;
      int PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;
      int PFMETTypeOne120_PFMHT120_IDTight_PFHT60;
      int PFMETTypeOne110_PFMHT110_IDTight;
      int PFMETTypeOne120_PFMHT120_IDTight;
      int PFMETTypeOne130_PFMHT130_IDTight;
      int PFMETTypeOne140_PFMHT140_IDTight;
      int PFMETNoMu110_PFMHTNoMu110_IDTight;
      int PFMETNoMu120_PFMHTNoMu120_IDTight;
      int PFMETNoMu130_PFMHTNoMu130_IDTight;
      int PFMETNoMu140_PFMHTNoMu140_IDTight;
      int MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;
      int MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;
      int MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight;
      int MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight;
      int L1ETMHadSeeds;
      int CaloMHT90;
      int CaloMET80_NotCleaned;
      int CaloMET90_NotCleaned;
      int CaloMET100_NotCleaned;
      int CaloMET110_NotCleaned;
      int CaloMET250_NotCleaned;
      int CaloMET70_HBHECleaned;
      int CaloMET80_HBHECleaned;
      int CaloMET90_HBHECleaned;
      int CaloMET100_HBHECleaned;
      int CaloMET250_HBHECleaned;
      int CaloMET300_HBHECleaned;
      int CaloMET350_HBHECleaned;
      int PFMET200_NotCleaned;
      int PFMET200_HBHECleaned;
      int PFMET250_HBHECleaned;
      int PFMET300_HBHECleaned;
      int PFMET200_HBHE_BeamHaloCleaned;
      int PFMETTypeOne200_HBHE_BeamHaloCleaned;
      int MET105_IsoTrk50;
      int MET120_IsoTrk50;
      int SingleJet30_Mu12_SinglePFJet40;
      int Mu12_DoublePFJets40_CaloBTagCSV_p33;
      int Mu12_DoublePFJets100_CaloBTagCSV_p33;
      int Mu12_DoublePFJets200_CaloBTagCSV_p33;
      int Mu12_DoublePFJets350_CaloBTagCSV_p33;
      int Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33;
      int Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33;
      int Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33;
      int DoublePFJets40_CaloBTagCSV_p33;
      int DoublePFJets100_CaloBTagCSV_p33;
      int DoublePFJets200_CaloBTagCSV_p33;
      int DoublePFJets350_CaloBTagCSV_p33;
      int DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33;
      int DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33;
      int DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33;
      int Photon300_NoHE;
      int Mu8_TrkIsoVVL;
      int Mu8_DiEle12_CaloIdL_TrackIdL_DZ;
      int Mu8_DiEle12_CaloIdL_TrackIdL;
      int Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ;
      int Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350;
      int Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
      int Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
      int Mu17_TrkIsoVVL;
      int Mu19_TrkIsoVVL;
      int BTagMu_AK4DiJet20_Mu5;
      int BTagMu_AK4DiJet40_Mu5;
      int BTagMu_AK4DiJet70_Mu5;
      int BTagMu_AK4DiJet110_Mu5;
      int BTagMu_AK4DiJet170_Mu5;
      int BTagMu_AK4Jet300_Mu5;
      int BTagMu_AK8DiJet170_Mu5;
      int BTagMu_AK8Jet300_Mu5;
      int Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
      int Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;
      int Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
      int Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
      int Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
      int Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
      int Mu12_DoublePhoton20;
      std::vector<float> TriplePhoton_20_20_20_CaloIdLV2;
      std::vector<float> TriplePhoton_20_20_20_CaloIdLV2_R9IdVL;
      std::vector<float> TriplePhoton_30_30_10_CaloIdLV2;
      std::vector<float> TriplePhoton_30_30_10_CaloIdLV2_R9IdVL;
      std::vector<float> TriplePhoton_35_35_5_CaloIdLV2_R9IdVL;
      int Photon25;
      int Photon33;
      int Photon50;
      int Photon75;
      int Photon90;
      int Photon120;
      int Photon150;
      int Photon175;
      int Photon200;
      int Photon50_R9Id90_HE10_IsoM;
      int Photon75_R9Id90_HE10_IsoM;
      int Photon90_R9Id90_HE10_IsoM;
      int Photon120_R9Id90_HE10_IsoM;
      int Photon165_R9Id90_HE10_IsoM;
      int Photon90_CaloIdL_PFHT700;
      int Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;
      int Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95;
      int Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;
      int Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;
      int Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;
      int Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;
      int Dimuon0_Jpsi_L1_NoOS;
      int Dimuon0_Jpsi_NoVertexing_NoOS;
      int Dimuon0_Jpsi;
      int Dimuon0_Jpsi_NoVertexing;
      int Dimuon0_Jpsi_L1_4R_0er1p5R;
      int Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R;
      int Dimuon0_Jpsi3p5_Muon2;
      int Dimuon0_Upsilon_L1_4p5;
      int Dimuon0_Upsilon_L1_5;
      int Dimuon0_Upsilon_L1_4p5NoOS;
      int Dimuon0_Upsilon_L1_4p5er2p0;
      int Dimuon0_Upsilon_L1_4p5er2p0M;
      int Dimuon0_Upsilon_NoVertexing;
      int Dimuon0_Upsilon_L1_5M;
      int Dimuon0_LowMass_L1_0er1p5R;
      int Dimuon0_LowMass_L1_0er1p5;
      int Dimuon0_LowMass;
      int Dimuon0_LowMass_L1_4;
      int Dimuon0_LowMass_L1_4R;
      int Dimuon0_LowMass_L1_TM530;
      std::vector<float> Dimuon0_Upsilon_Muon_L1_TM0;
      std::vector<float> Dimuon0_Upsilon_Muon_NoL1Mass;
      int TripleMu_5_3_3_Mass3p8to60_DZ;
      int TripleMu_10_5_5_DZ;
      int TripleMu_12_10_5;
      int Tau3Mu_Mu7_Mu1_TkMu1_Tau15;
      int Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;
      int Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;
      int Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;
      int DoubleMu3_DZ_PFMET50_PFMHT60;
      int DoubleMu3_DZ_PFMET70_PFMHT70;
      int DoubleMu3_DZ_PFMET90_PFMHT90;
      int DoubleMu3_Trk_Tau3mu_NoL1Mass;
      int DoubleMu4_Jpsi_Displaced;
      int DoubleMu4_Jpsi_NoVertexing;
      int DoubleMu4_JpsiTrkTrk_Displaced;
      int DoubleMu43NoFiltersNoVtx;
      int DoubleMu48NoFiltersNoVtx;
      int Mu43NoFiltersNoVtx_Photon43_CaloIdL;
      int Mu48NoFiltersNoVtx_Photon48_CaloIdL;
      int DoubleMu20_7_Mass0to30_L1_DM4;
      int DoubleMu20_7_Mass0to30_L1_DM4EG;
      int HT425;
      int HT430_DisplacedDijet40_DisplacedTrack;
      int HT430_DisplacedDijet60_DisplacedTrack;
      int HT430_DisplacedDijet80_DisplacedTrack;
      int HT400_DisplacedDijet40_DisplacedTrack;
      int HT650_DisplacedDijet60_Inclusive;
      int HT550_DisplacedDijet80_Inclusive;
      int HT550_DisplacedDijet60_Inclusive;
      int HT650_DisplacedDijet80_Inclusive;
      int HT750_DisplacedDijet80_Inclusive;
      int DiJet110_35_Mjj650_PFMET110;
      int DiJet110_35_Mjj650_PFMET120;
      int DiJet110_35_Mjj650_PFMET130;
      int TripleJet110_35_35_Mjj650_PFMET110;
      int TripleJet110_35_35_Mjj650_PFMET120;
      int TripleJet110_35_35_Mjj650_PFMET130;
      int VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg;
      int VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg;
      int VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg;
      int Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned;
      int Ele28_eta2p1_WPTight_Gsf_HT150;
      int Ele28_HighEta_SC20_Mass55;
      int DoubleMu20_7_Mass0to30_Photon23;
      int Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5;
      int Ele15_IsoVVVL_PFHT450_PFMET50;
      int Ele15_IsoVVVL_PFHT450;
      int Ele50_IsoVVVL_PFHT450;
      int Ele15_IsoVVVL_PFHT600;
      int Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
      int Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;
      int Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5;
      int Mu15_IsoVVVL_PFHT450_PFMET50;
      int Mu15_IsoVVVL_PFHT450;
      int Mu50_IsoVVVL_PFHT450;
      int Mu15_IsoVVVL_PFHT600;
      int Dimuon10_PsiPrime_Barrel_Seagulls;
      int Dimuon20_Jpsi_Barrel_Seagulls;
      int Dimuon10_Upsilon_Barrel_Seagulls;
      int Dimuon12_Upsilon_eta1p5;
      int Dimuon14_Phi_Barrel_Seagulls;
      int Dimuon18_PsiPrime;
      int Dimuon25_Jpsi;
      int Dimuon18_PsiPrime_noCorrL1;
      int Dimuon24_Upsilon_noCorrL1;
      int Dimuon24_Phi_noCorrL1;
      int Dimuon25_Jpsi_noCorrL1;
      int DiMu9_Ele9_CaloIdL_TrackIdL_DZ;
      int DiMu9_Ele9_CaloIdL_TrackIdL;
      int DoubleIsoMu20_eta2p1;
      int DoubleIsoMu24_eta2p1;
      int TrkMu12_DoubleTrkMu5NoFiltersNoVtx;
      int TrkMu16_DoubleTrkMu6NoFiltersNoVtx;
      int TrkMu17_DoubleTrkMu8NoFiltersNoVtx;
      int Mu8;
      int Mu17;
      int Mu19;
      int Mu17_Photon30_IsoCaloId;
      int Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;
      int Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;
      int Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;
      int Ele8_CaloIdM_TrackIdM_PFJet30;
      int Ele17_CaloIdM_TrackIdM_PFJet30;
      int Ele23_CaloIdM_TrackIdM_PFJet30;
      int Ele50_CaloIdVT_GsfTrkIdT_PFJet165;
      int Ele115_CaloIdVT_GsfTrkIdT;
      int Ele135_CaloIdVT_GsfTrkIdT;
      int Ele145_CaloIdVT_GsfTrkIdT;
      int Ele200_CaloIdVT_GsfTrkIdT;
      int Ele250_CaloIdVT_GsfTrkIdT;
      int Ele300_CaloIdVT_GsfTrkIdT;
      int PFHT300PT30_QuadPFJet_75_60_45_40;
      int PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0;
      int PFHT380_SixPFJet32_DoublePFBTagCSV_2p2;
      int PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2;
      int PFHT380_SixPFJet32;
      int PFHT430_SixPFJet40_PFBTagCSV_1p5;
      int PFHT430_SixPFJet40;
      int PFHT350;
      int PFHT350MinPFJet15;
      int Photon60_R9Id90_CaloIdL_IsoL;
      int Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL;
      int Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15;
      int FullTrack_Multiplicity85;
      int FullTrack_Multiplicity100;
      int FullTrack_Multiplicity130;
      int FullTrack_Multiplicity155;
      int ECALHT800;
      int DiSC30_18_EIso_AND_HE_Mass70;
      int Physics;
      int Physics_part0;
      int Physics_part1;
      int Physics_part2;
      int Physics_part3;
      int Physics_part4;
      int Physics_part5;
      int Physics_part6;
      int Physics_part7;
      int Random;
      int ZeroBias;
      int ZeroBias_part0;
      int ZeroBias_part1;
      int ZeroBias_part2;
      int ZeroBias_part3;
      int ZeroBias_part4;
      int ZeroBias_part5;
      int ZeroBias_part6;
      int ZeroBias_part7;
      int AK4CaloJet30;
      int AK4CaloJet40;
      int AK4CaloJet50;
      int AK4CaloJet80;
      int AK4CaloJet100;
      int AK4CaloJet120;
      int AK4PFJet30;
      int AK4PFJet50;
      int AK4PFJet80;
      int AK4PFJet100;
      int AK4PFJet120;
      int HISinglePhoton10_Eta3p1ForPPRef;
      int HISinglePhoton20_Eta3p1ForPPRef;
      int HISinglePhoton30_Eta3p1ForPPRef;
      int HISinglePhoton40_Eta3p1ForPPRef;
      int HISinglePhoton50_Eta3p1ForPPRef;
      int HISinglePhoton60_Eta3p1ForPPRef;
      int Photon20_HoverELoose;
      int Photon30_HoverELoose;
      int Photon40_HoverELoose;
      int Photon50_HoverELoose;
      int Photon60_HoverELoose;
      int EcalCalibration;
      int HcalCalibration;
      int L1UnpairedBunchBptxMinus;
      int L1UnpairedBunchBptxPlus;
      int L1NotBptxOR;
      int L1MinimumBiasHF_OR;
      int L1MinimumBiasHF0OR;
      int L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;
      int HcalNZS;
      int HcalPhiSym;
      int HcalIsolatedbunch;
      int IsoTrackHB;
      int IsoTrackHE;
      int ZeroBias_FirstCollisionAfterAbortGap;
      int ZeroBias_IsolatedBunches;
      int ZeroBias_FirstCollisionInTrain;
      int ZeroBias_LastCollisionInTrain;
      int ZeroBias_FirstBXAfterTrain;
      int Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1;
      int Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1;
      int Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1;
      int Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1;
      int Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1;
      int Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1;
      int DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg;
      int DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg;
      int DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg;
      int DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg;
      int DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg;
      int DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg;
      int DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg;
      int DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg;
      int DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg;
      int DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg;
      int DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg;
      int DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg;
      int IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
      int MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;
      int MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;
      int MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;
      int MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;
      int MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;
      int MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
      int MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;
      int MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;
      int IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1;
      int IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1;
      int IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1;
      int IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1;
      int IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1;
      int IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1;
      int IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1;
      int IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1;
      int IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1;
      int IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1;
      int Ele16_Ele12_Ele8_CaloIdL_TrackIdL;
      int Rsq0p35;
      int Rsq0p40;
      int RsqMR300_Rsq0p09_MR200;
      int RsqMR320_Rsq0p09_MR200;
      int RsqMR300_Rsq0p09_MR200_4jet;
      int RsqMR320_Rsq0p09_MR200_4jet;
      int L1_DoubleJet30_Mass_Min400_Mu10;
      int IsoMu27_LooseChargedIsoPFTau20_SingleL1;
      int IsoMu27_MediumChargedIsoPFTau20_SingleL1;
      int IsoMu27_TightChargedIsoPFTau20_SingleL1;
      int Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50;
      int Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3;
      int Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3;
      int PFMET100_PFMHT100_IDTight_PFHT60;
      int PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60;
      int PFMETTypeOne100_PFMHT100_IDTight_PFHT60;
      int Mu18_Mu9_SameSign;
      int Mu18_Mu9_SameSign_DZ;
      int Mu18_Mu9;
      int Mu18_Mu9_DZ;
      int Mu20_Mu10_SameSign;
      int Mu20_Mu10_SameSign_DZ;
      int Mu20_Mu10;
      int Mu20_Mu10_DZ;
      int Mu23_Mu12_SameSign;
      int Mu23_Mu12_SameSign_DZ;
      int Mu23_Mu12;
      int Mu23_Mu12_DZ;
      int DoubleMu2_Jpsi_DoubleTrk1_Phi;
      int DoubleMu2_Jpsi_DoubleTkMu0_Phi;
      int DoubleMu3_DCA_PFMET50_PFMHT60;
      int TripleMu_5_3_3_Mass3p8to60_DCA;
      int QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1;
      int QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1;
      int QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1;
      int QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1;
      int QuadPFJet98_83_71_15_BTagCSV_p013_VBF2;
      int QuadPFJet103_88_75_15_BTagCSV_p013_VBF2;
      int QuadPFJet105_88_76_15_BTagCSV_p013_VBF2;
      int QuadPFJet111_90_80_15_BTagCSV_p013_VBF2;
      int QuadPFJet98_83_71_15;
      int QuadPFJet103_88_75_15;
      int QuadPFJet105_88_76_15;
      int QuadPFJet111_90_80_15;
      int AK8PFJet330_PFAK8BTagCSV_p17;
      int AK8PFJet330_PFAK8BTagCSV_p1;
      int Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;
      int Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;
    
      void init() {
        AK8PFJet360_TrimMass30=NOVAL_I;
        AK8PFJet380_TrimMass30=NOVAL_I;
        AK8PFJet400_TrimMass30=NOVAL_I;
        AK8PFJet420_TrimMass30=NOVAL_I;
        AK8PFHT750_TrimMass50=NOVAL_I;
        AK8PFHT800_TrimMass50=NOVAL_I;
        AK8PFHT850_TrimMass50=NOVAL_I;
        AK8PFHT900_TrimMass50=NOVAL_I;
        CaloJet500_NoJetID=NOVAL_I;
        CaloJet550_NoJetID=NOVAL_I;
        Trimuon5_3p5_2_Upsilon_Muon=NOVAL_I;
        DoubleEle25_CaloIdL_MW=NOVAL_I;
        DoubleEle27_CaloIdL_MW=NOVAL_I;
        DoubleEle33_CaloIdL_MW=NOVAL_I;
        DoubleEle24_eta2p1_WPTight_Gsf=NOVAL_I;
        DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350=NOVAL_I;
        DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350=NOVAL_I;
        Ele27_Ele37_CaloIdL_MW=NOVAL_I;
        Mu27_Ele37_CaloIdL_MW=NOVAL_I;
        Mu37_Ele27_CaloIdL_MW=NOVAL_I;
        Mu37_TkMu27=NOVAL_I;
        DoubleMu4_3_Bs=NOVAL_I;
        DoubleMu4_3_Jpsi_Displaced=NOVAL_I;
        DoubleMu4_JpsiTrk_Displaced=NOVAL_I;
        DoubleMu4_LowMassNonResonantTrk_Displaced=NOVAL_I;
        DoubleMu3_Trk_Tau3mu=NOVAL_I;
        DoubleMu4_PsiPrimeTrk_Displaced=NOVAL_I;
        DoubleMu4_Mass8_DZ_PFHT350=NOVAL_I;
        DoubleMu8_Mass8_PFHT350=NOVAL_I;
        Mu3_PFJet40=NOVAL_I;
        Mu7p5_L2Mu2_Jpsi=NOVAL_I;
        Mu7p5_L2Mu2_Upsilon=NOVAL_I;
        Mu7p5_Track2_Jpsi=NOVAL_I;
        Mu7p5_Track3p5_Jpsi=NOVAL_I;
        Mu7p5_Track7_Jpsi=NOVAL_I;
        Mu7p5_Track2_Upsilon=NOVAL_I;
        Mu7p5_Track3p5_Upsilon=NOVAL_I;
        Mu7p5_Track7_Upsilon=NOVAL_I;
        DoublePhoton33_CaloIdL=NOVAL_I;
        DoublePhoton70=NOVAL_I;
        DoublePhoton85=NOVAL_I;
        Ele20_WPTight_Gsf=NOVAL_I;
        Ele20_WPLoose_Gsf=NOVAL_I;
        Ele20_eta2p1_WPLoose_Gsf=NOVAL_I;
        DiEle27_WPTightCaloOnly_L1DoubleEG=NOVAL_I;
        Ele27_WPTight_Gsf=NOVAL_I;
        Ele32_WPTight_Gsf=NOVAL_I;
        Ele35_WPTight_Gsf=NOVAL_I;
        Ele35_WPTight_Gsf_L1EGMT=NOVAL_I;
        Ele38_WPTight_Gsf=NOVAL_I;
        Ele40_WPTight_Gsf=NOVAL_I;
        Ele32_WPTight_Gsf_L1DoubleEG=NOVAL_I;
        HT450_Beamspot=NOVAL_I;
        HT300_Beamspot=NOVAL_I;
        IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1=NOVAL_I;
        IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1=NOVAL_I;
        IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1=NOVAL_I;
        IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1=NOVAL_I;
        IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1=NOVAL_I;
        IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1=NOVAL_I;
        IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1=NOVAL_I;
        IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1=NOVAL_I;
        IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1=NOVAL_I;
        IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1=NOVAL_I;
        IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1=NOVAL_I;
        IsoMu20=NOVAL_I;
        IsoMu24=NOVAL_I;
        IsoMu24_eta2p1=NOVAL_I;
        IsoMu27=NOVAL_I;
        IsoMu30=NOVAL_I;
        UncorrectedJetE30_NoBPTX=NOVAL_I;
        UncorrectedJetE30_NoBPTX3BX=NOVAL_I;
        UncorrectedJetE60_NoBPTX3BX=NOVAL_I;
        UncorrectedJetE70_NoBPTX3BX=NOVAL_I;
        L1SingleMu18=NOVAL_I;
        L1SingleMu25=NOVAL_I;
        L2Mu10=NOVAL_I;
        L2Mu10_NoVertex_NoBPTX3BX=NOVAL_I;
        L2Mu10_NoVertex_NoBPTX=NOVAL_I;
        L2Mu45_NoVertex_3Sta_NoBPTX3BX=NOVAL_I;
        L2Mu40_NoVertex_3Sta_NoBPTX3BX=NOVAL_I;
        L2Mu50=NOVAL_I;
        DoubleL2Mu50=NOVAL_I;
        Mu17_TrkIsoVVL_Mu8_TrkIsoVVL=NOVAL_I;
        Mu19_TrkIsoVVL_Mu9_TrkIsoVVL=NOVAL_I;
        Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ=NOVAL_I;
        Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ=NOVAL_I;
        Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8=NOVAL_I;
        Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8=NOVAL_I;
        Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8=NOVAL_I;
        Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8=NOVAL_I;
        Mu25_TkMu0_Onia=NOVAL_I;
        Mu30_TkMu0_Onia=NOVAL_I;
        Mu20_TkMu0_Phi=NOVAL_I;
        Mu25_TkMu0_Phi=NOVAL_I;
        Mu20=NOVAL_I;
        Mu27=NOVAL_I;
        Mu50=NOVAL_I;
        Mu55=NOVAL_I;
        OldMu100=NOVAL_I;
        TkMu100=NOVAL_I;
        DiPFJet15_NoCaloMatched=NOVAL_I;
        DiPFJet25_NoCaloMatched=NOVAL_I;
        DiPFJet15_FBEta3_NoCaloMatched=NOVAL_I;
        DiPFJet25_FBEta3_NoCaloMatched=NOVAL_I;
        DiPFJetAve40=NOVAL_I;
        DiPFJetAve60=NOVAL_I;
        DiPFJetAve80=NOVAL_I;
        DiPFJetAve140=NOVAL_I;
        DiPFJetAve200=NOVAL_I;
        DiPFJetAve260=NOVAL_I;
        DiPFJetAve320=NOVAL_I;
        DiPFJetAve400=NOVAL_I;
        DiPFJetAve500=NOVAL_I;
        DiPFJetAve15_HFJEC=NOVAL_I;
        DiPFJetAve25_HFJEC=NOVAL_I;
        DiPFJetAve35_HFJEC=NOVAL_I;
        DiPFJetAve60_HFJEC=NOVAL_I;
        DiPFJetAve80_HFJEC=NOVAL_I;
        DiPFJetAve100_HFJEC=NOVAL_I;
        DiPFJetAve160_HFJEC=NOVAL_I;
        DiPFJetAve220_HFJEC=NOVAL_I;
        DiPFJetAve300_HFJEC=NOVAL_I;
        AK8PFJet40=NOVAL_I;
        AK8PFJet60=NOVAL_I;
        AK8PFJet80=NOVAL_I;
        AK8PFJet140=NOVAL_I;
        AK8PFJet200=NOVAL_I;
        AK8PFJet260=NOVAL_I;
        AK8PFJet320=NOVAL_I;
        AK8PFJet400=NOVAL_I;
        AK8PFJet450=NOVAL_I;
        AK8PFJet500=NOVAL_I;
        AK8PFJet550=NOVAL_I;
        PFJet40=NOVAL_I;
        PFJet60=NOVAL_I;
        PFJet80=NOVAL_I;
        PFJet140=NOVAL_I;
        PFJet200=NOVAL_I;
        PFJet260=NOVAL_I;
        PFJet320=NOVAL_I;
        PFJet400=NOVAL_I;
        PFJet450=NOVAL_I;
        PFJet500=NOVAL_I;
        PFJet550=NOVAL_I;
        PFJetFwd40=NOVAL_I;
        PFJetFwd60=NOVAL_I;
        PFJetFwd80=NOVAL_I;
        PFJetFwd140=NOVAL_I;
        PFJetFwd200=NOVAL_I;
        PFJetFwd260=NOVAL_I;
        PFJetFwd320=NOVAL_I;
        PFJetFwd400=NOVAL_I;
        PFJetFwd450=NOVAL_I;
        PFJetFwd500=NOVAL_I;
        AK8PFJetFwd40=NOVAL_I;
        AK8PFJetFwd60=NOVAL_I;
        AK8PFJetFwd80=NOVAL_I;
        AK8PFJetFwd140=NOVAL_I;
        AK8PFJetFwd200=NOVAL_I;
        AK8PFJetFwd260=NOVAL_I;
        AK8PFJetFwd320=NOVAL_I;
        AK8PFJetFwd400=NOVAL_I;
        AK8PFJetFwd450=NOVAL_I;
        AK8PFJetFwd500=NOVAL_I;
        PFHT180=NOVAL_I;
        PFHT250=NOVAL_I;
        PFHT370=NOVAL_I;
        PFHT430=NOVAL_I;
        PFHT510=NOVAL_I;
        PFHT590=NOVAL_I;
        PFHT680=NOVAL_I;
        PFHT780=NOVAL_I;
        PFHT890=NOVAL_I;
        PFHT1050=NOVAL_I;
        PFHT500_PFMET100_PFMHT100_IDTight=NOVAL_I;
        PFHT500_PFMET110_PFMHT110_IDTight=NOVAL_I;
        PFHT700_PFMET85_PFMHT85_IDTight=NOVAL_I;
        PFHT700_PFMET95_PFMHT95_IDTight=NOVAL_I;
        PFHT800_PFMET75_PFMHT75_IDTight=NOVAL_I;
        PFHT800_PFMET85_PFMHT85_IDTight=NOVAL_I;
        PFMET110_PFMHT110_IDTight=NOVAL_I;
        PFMET120_PFMHT120_IDTight=NOVAL_I;
        PFMET130_PFMHT130_IDTight=NOVAL_I;
        PFMET140_PFMHT140_IDTight=NOVAL_I;
        PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1=NOVAL_I;
        PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1=NOVAL_I;
        PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1=NOVAL_I;
        PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1=NOVAL_I;
        PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1=NOVAL_I;
        PFMET120_PFMHT120_IDTight_PFHT60=NOVAL_I;
        PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60=NOVAL_I;
        PFMETTypeOne120_PFMHT120_IDTight_PFHT60=NOVAL_I;
        PFMETTypeOne110_PFMHT110_IDTight=NOVAL_I;
        PFMETTypeOne120_PFMHT120_IDTight=NOVAL_I;
        PFMETTypeOne130_PFMHT130_IDTight=NOVAL_I;
        PFMETTypeOne140_PFMHT140_IDTight=NOVAL_I;
        PFMETNoMu110_PFMHTNoMu110_IDTight=NOVAL_I;
        PFMETNoMu120_PFMHTNoMu120_IDTight=NOVAL_I;
        PFMETNoMu130_PFMHTNoMu130_IDTight=NOVAL_I;
        PFMETNoMu140_PFMHTNoMu140_IDTight=NOVAL_I;
        MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight=NOVAL_I;
        MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight=NOVAL_I;
        MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight=NOVAL_I;
        MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight=NOVAL_I;
        L1ETMHadSeeds=NOVAL_I;
        CaloMHT90=NOVAL_I;
        CaloMET80_NotCleaned=NOVAL_I;
        CaloMET90_NotCleaned=NOVAL_I;
        CaloMET100_NotCleaned=NOVAL_I;
        CaloMET110_NotCleaned=NOVAL_I;
        CaloMET250_NotCleaned=NOVAL_I;
        CaloMET70_HBHECleaned=NOVAL_I;
        CaloMET80_HBHECleaned=NOVAL_I;
        CaloMET90_HBHECleaned=NOVAL_I;
        CaloMET100_HBHECleaned=NOVAL_I;
        CaloMET250_HBHECleaned=NOVAL_I;
        CaloMET300_HBHECleaned=NOVAL_I;
        CaloMET350_HBHECleaned=NOVAL_I;
        PFMET200_NotCleaned=NOVAL_I;
        PFMET200_HBHECleaned=NOVAL_I;
        PFMET250_HBHECleaned=NOVAL_I;
        PFMET300_HBHECleaned=NOVAL_I;
        PFMET200_HBHE_BeamHaloCleaned=NOVAL_I;
        PFMETTypeOne200_HBHE_BeamHaloCleaned=NOVAL_I;
        MET105_IsoTrk50=NOVAL_I;
        MET120_IsoTrk50=NOVAL_I;
        SingleJet30_Mu12_SinglePFJet40=NOVAL_I;
        Mu12_DoublePFJets40_CaloBTagCSV_p33=NOVAL_I;
        Mu12_DoublePFJets100_CaloBTagCSV_p33=NOVAL_I;
        Mu12_DoublePFJets200_CaloBTagCSV_p33=NOVAL_I;
        Mu12_DoublePFJets350_CaloBTagCSV_p33=NOVAL_I;
        Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33=NOVAL_I;
        Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33=NOVAL_I;
        Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33=NOVAL_I;
        DoublePFJets40_CaloBTagCSV_p33=NOVAL_I;
        DoublePFJets100_CaloBTagCSV_p33=NOVAL_I;
        DoublePFJets200_CaloBTagCSV_p33=NOVAL_I;
        DoublePFJets350_CaloBTagCSV_p33=NOVAL_I;
        DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33=NOVAL_I;
        DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33=NOVAL_I;
        DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33=NOVAL_I;
        Photon300_NoHE=NOVAL_I;
        Mu8_TrkIsoVVL=NOVAL_I;
        Mu8_DiEle12_CaloIdL_TrackIdL_DZ=NOVAL_I;
        Mu8_DiEle12_CaloIdL_TrackIdL=NOVAL_I;
        Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ=NOVAL_I;
        Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350=NOVAL_I;
        Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ=NOVAL_I;
        Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL=NOVAL_I;
        Mu17_TrkIsoVVL=NOVAL_I;
        Mu19_TrkIsoVVL=NOVAL_I;
        BTagMu_AK4DiJet20_Mu5=NOVAL_I;
        BTagMu_AK4DiJet40_Mu5=NOVAL_I;
        BTagMu_AK4DiJet70_Mu5=NOVAL_I;
        BTagMu_AK4DiJet110_Mu5=NOVAL_I;
        BTagMu_AK4DiJet170_Mu5=NOVAL_I;
        BTagMu_AK4Jet300_Mu5=NOVAL_I;
        BTagMu_AK8DiJet170_Mu5=NOVAL_I;
        BTagMu_AK8Jet300_Mu5=NOVAL_I;
        Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ=NOVAL_I;
        Ele23_Ele12_CaloIdL_TrackIdL_IsoVL=NOVAL_I;
        Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ=NOVAL_I;
        Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL=NOVAL_I;
        Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL=NOVAL_I;
        Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ=NOVAL_I;
        Mu12_DoublePhoton20=NOVAL_I;
        TriplePhoton_20_20_20_CaloIdLV2=NOVAL_I;
        TriplePhoton_20_20_20_CaloIdLV2_R9IdVL=NOVAL_I;
        TriplePhoton_30_30_10_CaloIdLV2=NOVAL_I;
        TriplePhoton_30_30_10_CaloIdLV2_R9IdVL=NOVAL_I;
        TriplePhoton_35_35_5_CaloIdLV2_R9IdVL=NOVAL_I;
        Photon25=NOVAL_I;
        Photon33=NOVAL_I;
        Photon50=NOVAL_I;
        Photon75=NOVAL_I;
        Photon90=NOVAL_I;
        Photon120=NOVAL_I;
        Photon150=NOVAL_I;
        Photon175=NOVAL_I;
        Photon200=NOVAL_I;
        Photon50_R9Id90_HE10_IsoM=NOVAL_I;
        Photon75_R9Id90_HE10_IsoM=NOVAL_I;
        Photon90_R9Id90_HE10_IsoM=NOVAL_I;
        Photon120_R9Id90_HE10_IsoM=NOVAL_I;
        Photon165_R9Id90_HE10_IsoM=NOVAL_I;
        Photon90_CaloIdL_PFHT700=NOVAL_I;
        Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90=NOVAL_I;
        Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95=NOVAL_I;
        Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55=NOVAL_I;
        Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55=NOVAL_I;
        Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55=NOVAL_I;
        Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55=NOVAL_I;
        Dimuon0_Jpsi_L1_NoOS=NOVAL_I;
        Dimuon0_Jpsi_NoVertexing_NoOS=NOVAL_I;
        Dimuon0_Jpsi=NOVAL_I;
        Dimuon0_Jpsi_NoVertexing=NOVAL_I;
        Dimuon0_Jpsi_L1_4R_0er1p5R=NOVAL_I;
        Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R=NOVAL_I;
        Dimuon0_Jpsi3p5_Muon2=NOVAL_I;
        Dimuon0_Upsilon_L1_4p5=NOVAL_I;
        Dimuon0_Upsilon_L1_5=NOVAL_I;
        Dimuon0_Upsilon_L1_4p5NoOS=NOVAL_I;
        Dimuon0_Upsilon_L1_4p5er2p0=NOVAL_I;
        Dimuon0_Upsilon_L1_4p5er2p0M=NOVAL_I;
        Dimuon0_Upsilon_NoVertexing=NOVAL_I;
        Dimuon0_Upsilon_L1_5M=NOVAL_I;
        Dimuon0_LowMass_L1_0er1p5R=NOVAL_I;
        Dimuon0_LowMass_L1_0er1p5=NOVAL_I;
        Dimuon0_LowMass=NOVAL_I;
        Dimuon0_LowMass_L1_4=NOVAL_I;
        Dimuon0_LowMass_L1_4R=NOVAL_I;
        Dimuon0_LowMass_L1_TM530=NOVAL_I;
        Dimuon0_Upsilon_Muon_L1_TM0=NOVAL_I;
        Dimuon0_Upsilon_Muon_NoL1Mass=NOVAL_I;
        TripleMu_5_3_3_Mass3p8to60_DZ=NOVAL_I;
        TripleMu_10_5_5_DZ=NOVAL_I;
        TripleMu_12_10_5=NOVAL_I;
        Tau3Mu_Mu7_Mu1_TkMu1_Tau15=NOVAL_I;
        Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1=NOVAL_I;
        Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15=NOVAL_I;
        Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1=NOVAL_I;
        DoubleMu3_DZ_PFMET50_PFMHT60=NOVAL_I;
        DoubleMu3_DZ_PFMET70_PFMHT70=NOVAL_I;
        DoubleMu3_DZ_PFMET90_PFMHT90=NOVAL_I;
        DoubleMu3_Trk_Tau3mu_NoL1Mass=NOVAL_I;
        DoubleMu4_Jpsi_Displaced=NOVAL_I;
        DoubleMu4_Jpsi_NoVertexing=NOVAL_I;
        DoubleMu4_JpsiTrkTrk_Displaced=NOVAL_I;
        DoubleMu43NoFiltersNoVtx=NOVAL_I;
        DoubleMu48NoFiltersNoVtx=NOVAL_I;
        Mu43NoFiltersNoVtx_Photon43_CaloIdL=NOVAL_I;
        Mu48NoFiltersNoVtx_Photon48_CaloIdL=NOVAL_I;
        DoubleMu20_7_Mass0to30_L1_DM4=NOVAL_I;
        DoubleMu20_7_Mass0to30_L1_DM4EG=NOVAL_I;
        HT425=NOVAL_I;
        HT430_DisplacedDijet40_DisplacedTrack=NOVAL_I;
        HT430_DisplacedDijet60_DisplacedTrack=NOVAL_I;
        HT430_DisplacedDijet80_DisplacedTrack=NOVAL_I;
        HT400_DisplacedDijet40_DisplacedTrack=NOVAL_I;
        HT650_DisplacedDijet60_Inclusive=NOVAL_I;
        HT550_DisplacedDijet80_Inclusive=NOVAL_I;
        HT550_DisplacedDijet60_Inclusive=NOVAL_I;
        HT650_DisplacedDijet80_Inclusive=NOVAL_I;
        HT750_DisplacedDijet80_Inclusive=NOVAL_I;
        DiJet110_35_Mjj650_PFMET110=NOVAL_I;
        DiJet110_35_Mjj650_PFMET120=NOVAL_I;
        DiJet110_35_Mjj650_PFMET130=NOVAL_I;
        TripleJet110_35_35_Mjj650_PFMET110=NOVAL_I;
        TripleJet110_35_35_Mjj650_PFMET120=NOVAL_I;
        TripleJet110_35_35_Mjj650_PFMET130=NOVAL_I;
        VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg=NOVAL_I;
        VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg=NOVAL_I;
        VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg=NOVAL_I;
        Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned=NOVAL_I;
        Ele28_eta2p1_WPTight_Gsf_HT150=NOVAL_I;
        Ele28_HighEta_SC20_Mass55=NOVAL_I;
        DoubleMu20_7_Mass0to30_Photon23=NOVAL_I;
        Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5=NOVAL_I;
        Ele15_IsoVVVL_PFHT450_PFMET50=NOVAL_I;
        Ele15_IsoVVVL_PFHT450=NOVAL_I;
        Ele50_IsoVVVL_PFHT450=NOVAL_I;
        Ele15_IsoVVVL_PFHT600=NOVAL_I;
        Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60=NOVAL_I;
        Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60=NOVAL_I;
        Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5=NOVAL_I;
        Mu15_IsoVVVL_PFHT450_PFMET50=NOVAL_I;
        Mu15_IsoVVVL_PFHT450=NOVAL_I;
        Mu50_IsoVVVL_PFHT450=NOVAL_I;
        Mu15_IsoVVVL_PFHT600=NOVAL_I;
        Dimuon10_PsiPrime_Barrel_Seagulls=NOVAL_I;
        Dimuon20_Jpsi_Barrel_Seagulls=NOVAL_I;
        Dimuon10_Upsilon_Barrel_Seagulls=NOVAL_I;
        Dimuon12_Upsilon_eta1p5=NOVAL_I;
        Dimuon14_Phi_Barrel_Seagulls=NOVAL_I;
        Dimuon18_PsiPrime=NOVAL_I;
        Dimuon25_Jpsi=NOVAL_I;
        Dimuon18_PsiPrime_noCorrL1=NOVAL_I;
        Dimuon24_Upsilon_noCorrL1=NOVAL_I;
        Dimuon24_Phi_noCorrL1=NOVAL_I;
        Dimuon25_Jpsi_noCorrL1=NOVAL_I;
        DiMu9_Ele9_CaloIdL_TrackIdL_DZ=NOVAL_I;
        DiMu9_Ele9_CaloIdL_TrackIdL=NOVAL_I;
        DoubleIsoMu20_eta2p1=NOVAL_I;
        DoubleIsoMu24_eta2p1=NOVAL_I;
        TrkMu12_DoubleTrkMu5NoFiltersNoVtx=NOVAL_I;
        TrkMu16_DoubleTrkMu6NoFiltersNoVtx=NOVAL_I;
        TrkMu17_DoubleTrkMu8NoFiltersNoVtx=NOVAL_I;
        Mu8=NOVAL_I;
        Mu17=NOVAL_I;
        Mu19=NOVAL_I;
        Mu17_Photon30_IsoCaloId=NOVAL_I;
        Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30=NOVAL_I;
        Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30=NOVAL_I;
        Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30=NOVAL_I;
        Ele8_CaloIdM_TrackIdM_PFJet30=NOVAL_I;
        Ele17_CaloIdM_TrackIdM_PFJet30=NOVAL_I;
        Ele23_CaloIdM_TrackIdM_PFJet30=NOVAL_I;
        Ele50_CaloIdVT_GsfTrkIdT_PFJet165=NOVAL_I;
        Ele115_CaloIdVT_GsfTrkIdT=NOVAL_I;
        Ele135_CaloIdVT_GsfTrkIdT=NOVAL_I;
        Ele145_CaloIdVT_GsfTrkIdT=NOVAL_I;
        Ele200_CaloIdVT_GsfTrkIdT=NOVAL_I;
        Ele250_CaloIdVT_GsfTrkIdT=NOVAL_I;
        Ele300_CaloIdVT_GsfTrkIdT=NOVAL_I;
        PFHT300PT30_QuadPFJet_75_60_45_40=NOVAL_I;
        PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0=NOVAL_I;
        PFHT380_SixPFJet32_DoublePFBTagCSV_2p2=NOVAL_I;
        PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2=NOVAL_I;
        PFHT380_SixPFJet32=NOVAL_I;
        PFHT430_SixPFJet40_PFBTagCSV_1p5=NOVAL_I;
        PFHT430_SixPFJet40=NOVAL_I;
        PFHT350=NOVAL_I;
        PFHT350MinPFJet15=NOVAL_I;
        Photon60_R9Id90_CaloIdL_IsoL=NOVAL_I;
        Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL=NOVAL_I;
        Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15=NOVAL_I;
        FullTrack_Multiplicity85=NOVAL_I;
        FullTrack_Multiplicity100=NOVAL_I;
        FullTrack_Multiplicity130=NOVAL_I;
        FullTrack_Multiplicity155=NOVAL_I;
        ECALHT800=NOVAL_I;
        DiSC30_18_EIso_AND_HE_Mass70=NOVAL_I;
        Physics=NOVAL_I;
        Physics_part0=NOVAL_I;
        Physics_part1=NOVAL_I;
        Physics_part2=NOVAL_I;
        Physics_part3=NOVAL_I;
        Physics_part4=NOVAL_I;
        Physics_part5=NOVAL_I;
        Physics_part6=NOVAL_I;
        Physics_part7=NOVAL_I;
        Random=NOVAL_I;
        ZeroBias=NOVAL_I;
        ZeroBias_part0=NOVAL_I;
        ZeroBias_part1=NOVAL_I;
        ZeroBias_part2=NOVAL_I;
        ZeroBias_part3=NOVAL_I;
        ZeroBias_part4=NOVAL_I;
        ZeroBias_part5=NOVAL_I;
        ZeroBias_part6=NOVAL_I;
        ZeroBias_part7=NOVAL_I;
        AK4CaloJet30=NOVAL_I;
        AK4CaloJet40=NOVAL_I;
        AK4CaloJet50=NOVAL_I;
        AK4CaloJet80=NOVAL_I;
        AK4CaloJet100=NOVAL_I;
        AK4CaloJet120=NOVAL_I;
        AK4PFJet30=NOVAL_I;
        AK4PFJet50=NOVAL_I;
        AK4PFJet80=NOVAL_I;
        AK4PFJet100=NOVAL_I;
        AK4PFJet120=NOVAL_I;
        HISinglePhoton10_Eta3p1ForPPRef=NOVAL_I;
        HISinglePhoton20_Eta3p1ForPPRef=NOVAL_I;
        HISinglePhoton30_Eta3p1ForPPRef=NOVAL_I;
        HISinglePhoton40_Eta3p1ForPPRef=NOVAL_I;
        HISinglePhoton50_Eta3p1ForPPRef=NOVAL_I;
        HISinglePhoton60_Eta3p1ForPPRef=NOVAL_I;
        Photon20_HoverELoose=NOVAL_I;
        Photon30_HoverELoose=NOVAL_I;
        Photon40_HoverELoose=NOVAL_I;
        Photon50_HoverELoose=NOVAL_I;
        Photon60_HoverELoose=NOVAL_I;
        EcalCalibration=NOVAL_I;
        HcalCalibration=NOVAL_I;
        L1UnpairedBunchBptxMinus=NOVAL_I;
        L1UnpairedBunchBptxPlus=NOVAL_I;
        L1NotBptxOR=NOVAL_I;
        L1MinimumBiasHF_OR=NOVAL_I;
        L1MinimumBiasHF0OR=NOVAL_I;
        L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142=NOVAL_I;
        HcalNZS=NOVAL_I;
        HcalPhiSym=NOVAL_I;
        HcalIsolatedbunch=NOVAL_I;
        IsoTrackHB=NOVAL_I;
        IsoTrackHE=NOVAL_I;
        ZeroBias_FirstCollisionAfterAbortGap=NOVAL_I;
        ZeroBias_IsolatedBunches=NOVAL_I;
        ZeroBias_FirstCollisionInTrain=NOVAL_I;
        ZeroBias_LastCollisionInTrain=NOVAL_I;
        ZeroBias_FirstBXAfterTrain=NOVAL_I;
        Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1=NOVAL_I;
        Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1=NOVAL_I;
        Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1=NOVAL_I;
        Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1=NOVAL_I;
        Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1=NOVAL_I;
        Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1=NOVAL_I;
        DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg=NOVAL_I;
        DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg=NOVAL_I;
        DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg=NOVAL_I;
        DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg=NOVAL_I;
        DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg=NOVAL_I;
        DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg=NOVAL_I;
        DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg=NOVAL_I;
        DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg=NOVAL_I;
        DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg=NOVAL_I;
        DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg=NOVAL_I;
        DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg=NOVAL_I;
        DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg=NOVAL_I;
        IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr=NOVAL_I;
        MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90=NOVAL_I;
        MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100=NOVAL_I;
        MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110=NOVAL_I;
        MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120=NOVAL_I;
        MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130=NOVAL_I;
        MediumChargedIsoPFTau50_Trk30_eta2p1_1pr=NOVAL_I;
        MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr=NOVAL_I;
        MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1=NOVAL_I;
        IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1=NOVAL_I;
        IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1=NOVAL_I;
        Ele16_Ele12_Ele8_CaloIdL_TrackIdL=NOVAL_I;
        Rsq0p35=NOVAL_I;
        Rsq0p40=NOVAL_I;
        RsqMR300_Rsq0p09_MR200=NOVAL_I;
        RsqMR320_Rsq0p09_MR200=NOVAL_I;
        RsqMR300_Rsq0p09_MR200_4jet=NOVAL_I;
        RsqMR320_Rsq0p09_MR200_4jet=NOVAL_I;
        L1_DoubleJet30_Mass_Min400_Mu10=NOVAL_I;
        IsoMu27_LooseChargedIsoPFTau20_SingleL1=NOVAL_I;
        IsoMu27_MediumChargedIsoPFTau20_SingleL1=NOVAL_I;
        IsoMu27_TightChargedIsoPFTau20_SingleL1=NOVAL_I;
        Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50=NOVAL_I;
        Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3=NOVAL_I;
        Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3=NOVAL_I;
        PFMET100_PFMHT100_IDTight_PFHT60=NOVAL_I;
        PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60=NOVAL_I;
        PFMETTypeOne100_PFMHT100_IDTight_PFHT60=NOVAL_I;
        Mu18_Mu9_SameSign=NOVAL_I;
        Mu18_Mu9_SameSign_DZ=NOVAL_I;
        Mu18_Mu9=NOVAL_I;
        Mu18_Mu9_DZ=NOVAL_I;
        Mu20_Mu10_SameSign=NOVAL_I;
        Mu20_Mu10_SameSign_DZ=NOVAL_I;
        Mu20_Mu10=NOVAL_I;
        Mu20_Mu10_DZ=NOVAL_I;
        Mu23_Mu12_SameSign=NOVAL_I;
        Mu23_Mu12_SameSign_DZ=NOVAL_I;
        Mu23_Mu12=NOVAL_I;
        Mu23_Mu12_DZ=NOVAL_I;
        DoubleMu2_Jpsi_DoubleTrk1_Phi=NOVAL_I;
        DoubleMu2_Jpsi_DoubleTkMu0_Phi=NOVAL_I;
        DoubleMu3_DCA_PFMET50_PFMHT60=NOVAL_I;
        TripleMu_5_3_3_Mass3p8to60_DCA=NOVAL_I;
        QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1=NOVAL_I;
        QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1=NOVAL_I;
        QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1=NOVAL_I;
        QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1=NOVAL_I;
        QuadPFJet98_83_71_15_BTagCSV_p013_VBF2=NOVAL_I;
        QuadPFJet103_88_75_15_BTagCSV_p013_VBF2=NOVAL_I;
        QuadPFJet105_88_76_15_BTagCSV_p013_VBF2=NOVAL_I;
        QuadPFJet111_90_80_15_BTagCSV_p013_VBF2=NOVAL_I;
        QuadPFJet98_83_71_15=NOVAL_I;
        QuadPFJet103_88_75_15=NOVAL_I;
        QuadPFJet105_88_76_15=NOVAL_I;
        QuadPFJet111_90_80_15=NOVAL_I;
        AK8PFJet330_PFAK8BTagCSV_p17=NOVAL_I;
        AK8PFJet330_PFAK8BTagCSV_p1=NOVAL_I;
        Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55=NOVAL_I;
        Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55=NOVAL_I;
    }
    
  } hlt;
    class CaloMETData {
    public:
      CaloMETData() { init(); };
      
      int phi;
      int pt;
      int sumEt;
    
    unsigned int it;
    
      void init() {
      it = -1;
        phi=NOVAL_F;
        pt=NOVAL_F;
        sumEt=NOVAL_F;
    }
      /*  bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    } */
    
  } calomet;
    class FilterData {
    public:
      FilterData() { init(); };
      
      int HBHENoiseFilter;
      int HBHENoiseIsoFilter;
      int CSCTightHaloFilter;
      int CSCTightHaloTrkMuUnvetoFilter;
      int CSCTightHalo2015Filter;
      int globalTightHalo2016Filter;
      int globalSuperTightHalo2016Filter;
      int HcalStripHaloFilter;
      int hcalLaserEventFilter;
      int EcalDeadCellTriggerPrimitiveFilter;
      int EcalDeadCellBoundaryEnergyFilter;
      int ecalBadCalibFilter;
      int goodVertices;
      int eeBadScFilter;
      int ecalLaserCorrFilter;
      int trkPOGFilters;
      int chargedHadronTrackResolutionFilter;
      int muonBadTrackFilter;
      int BadChargedCandidateFilter;
      int BadPFMuonFilter;
      int BadChargedCandidateSummer16Filter;
      int BadPFMuonSummer16Filter;
      int trkPOG_manystripclus53X;
      int trkPOG_toomanystripclus53X;
      int trkPOG_logErrorTooManyClusters;
      int METFilters;
    
    unsigned int it;
    
      void init() {
      it = -1;
        HBHENoiseFilter=NOVAL_I;
        HBHENoiseIsoFilter=NOVAL_I;
        CSCTightHaloFilter=NOVAL_I;
        CSCTightHaloTrkMuUnvetoFilter=NOVAL_I;
        CSCTightHalo2015Filter=NOVAL_I;
        globalTightHalo2016Filter=NOVAL_I;
        globalSuperTightHalo2016Filter=NOVAL_I;
        HcalStripHaloFilter=NOVAL_I;
        hcalLaserEventFilter=NOVAL_I;
        EcalDeadCellTriggerPrimitiveFilter=NOVAL_I;
        EcalDeadCellBoundaryEnergyFilter=NOVAL_I;
        ecalBadCalibFilter=NOVAL_I;
        goodVertices=NOVAL_I;
        eeBadScFilter=NOVAL_I;
        ecalLaserCorrFilter=NOVAL_I;
        trkPOGFilters=NOVAL_I;
        chargedHadronTrackResolutionFilter=NOVAL_I;
        muonBadTrackFilter=NOVAL_I;
        BadChargedCandidateFilter=NOVAL_I;
        BadPFMuonFilter=NOVAL_I;
        BadChargedCandidateSummer16Filter=NOVAL_I;
        BadPFMuonSummer16Filter=NOVAL_I;
        trkPOG_manystripclus53X=NOVAL_I;
        trkPOG_toomanystripclus53X=NOVAL_I;
        trkPOG_logErrorTooManyClusters=NOVAL_I;
        METFilters=NOVAL_I;
    }
    /*    bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    } */
    
  } filter;
    class PhotonVars  {
    public:
      PhotonVars() { init(); };
      unsigned int size; 
      std::vector<float> eCorr;
      std::vector<float> energyErr;
      std::vector<float> eta;
      std::vector<float> hoe;
      std::vector<float> mass;
      std::vector<float> mvaID;
      std::vector<float> pfRelIso03_all;
      std::vector<float> pfRelIso03_chg;
      std::vector<float> phi;
      std::vector<float> pt;
      std::vector<float> r9;
      std::vector<float> sieie;
      std::vector<float> charge;
      std::vector<float> cutBasedBitmap;
      std::vector<float> electronIdx;
      std::vector<float> jetIdx;
      std::vector<float> pdgId;
      std::vector<float> vidNestedWPBitmap;
      std::vector<float> electronVeto;
      std::vector<float> isScEtaEB;
      std::vector<float> isScEtaEE;
      std::vector<float> mvaID_WP80;
      std::vector<float> mvaID_WP90;
      std::vector<float> pixelSeed;
      std::vector<float> genPartIdx;
      std::vector<float> genPartFlav;
      std::vector<float> cleanmask;
    
    unsigned int it;
    
      void init() {
      it = -1;
      size=9999;
        init_vec(eCorr);
        init_vec(energyErr);
        init_vec(eta);
        init_vec(hoe);
        init_vec(mass);
        init_vec(mvaID);
        init_vec(pfRelIso03_all);
        init_vec(pfRelIso03_chg);
        init_vec(phi);
        init_vec(pt);
        init_vec(r9);
        init_vec(sieie);
        init_vec(charge);
        init_vec(cutBasedBitmap);
        init_vec(electronIdx);
        init_vec(jetIdx);
        init_vec(pdgId);
        init_vec(vidNestedWPBitmap);
        init_vec(electronVeto);
        init_vec(isScEtaEB);
        init_vec(isScEtaEE);
        init_vec(mvaID_WP80);
        init_vec(mvaID_WP90);
        init_vec(pixelSeed);
        init_vec(genPartIdx);
        init_vec(genPartFlav);
        init_vec(cleanmask);
      //   init_vec(nPhoton);
    }
        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } pho;
    class ElectronVars {
    public:
      ElectronVars() { init(); };
     unsigned int size; 
      std::vector<float> deltaEtaSC;
      std::vector<float> dr03EcalRecHitSumEt;
      std::vector<float> dr03HcalDepth1TowerSumEt;
      std::vector<float> dr03TkSumPt;
      std::vector<float> dxy;
      std::vector<float> dxyErr;
      std::vector<float> dz;
      std::vector<float> dzErr;
      std::vector<float> eCorr;
      std::vector<float> eInvMinusPInv;
      std::vector<float> energyErr;
      std::vector<float> eta;
      std::vector<float> hoe;
      std::vector<float> ip3d;
      std::vector<float> mass;
      std::vector<float> miniPFRelIso_all;
      std::vector<float> miniPFRelIso_chg;
      std::vector<float> mvaFall17Iso;
      std::vector<float> mvaFall17noIso;
      std::vector<float> pfRelIso03_all;
      std::vector<float> pfRelIso03_chg;
      std::vector<float> phi;
      std::vector<float> pt;
      std::vector<float> r9;
      std::vector<float> sieie;
      std::vector<float> sip3d;
      std::vector<float> mvaTTH;
      std::vector<float> charge;
      std::vector<float> cutBased;
      std::vector<float> jetIdx;
      std::vector<float> pdgId;
      std::vector<float> photonIdx;
      std::vector<float> tightCharge;
      std::vector<float> vidNestedWPBitmap;
      std::vector<float> convVeto;
      std::vector<float> cutBased_HEEP;
      std::vector<float> isPFcand;
      std::vector<float> lostHits;
      std::vector<float> mvaFall17Iso_WP80;
      std::vector<float> mvaFall17Iso_WP90;
      std::vector<float> mvaFall17Iso_WPL;
      std::vector<float> mvaFall17noIso_WP80;
      std::vector<float> mvaFall17noIso_WP90;
      std::vector<float> mvaFall17noIso_WPL;
      std::vector<float> genPartIdx;
      std::vector<float> genPartFlav;
      std::vector<float> cleanmask;
    
    unsigned int it;
    
      void init() {
      it = -1;
      size=9999;
        init_vec(deltaEtaSC);
        init_vec(dr03EcalRecHitSumEt);
        init_vec(dr03HcalDepth1TowerSumEt);
        init_vec(dr03TkSumPt);
        init_vec(dxy);
        init_vec(dxyErr);
        init_vec(dz);
        init_vec(dzErr);
        init_vec(eCorr);
        init_vec(eInvMinusPInv);
        init_vec(energyErr);
        init_vec(eta);
        init_vec(hoe);
        init_vec(ip3d);
        init_vec(mass);
        init_vec(miniPFRelIso_all);
        init_vec(miniPFRelIso_chg);
        init_vec(mvaFall17Iso);
        init_vec(mvaFall17noIso);
        init_vec(pfRelIso03_all);
        init_vec(pfRelIso03_chg);
        init_vec(phi);
        init_vec(pt);
        init_vec(r9);
        init_vec(sieie);
        init_vec(sip3d);
        init_vec(mvaTTH);
        init_vec(charge);
        init_vec(cutBased);
        init_vec(jetIdx);
        init_vec(pdgId);
        init_vec(photonIdx);
        init_vec(tightCharge);
        init_vec(vidNestedWPBitmap);
        init_vec(convVeto);
        init_vec(cutBased_HEEP);
        init_vec(isPFcand);
        init_vec(lostHits);
        init_vec(mvaFall17Iso_WP80);
        init_vec(mvaFall17Iso_WP90);
        init_vec(mvaFall17Iso_WPL);
        init_vec(mvaFall17noIso_WP80);
        init_vec(mvaFall17noIso_WP90);
        init_vec(mvaFall17noIso_WPL);
        init_vec(genPartIdx);
        init_vec(genPartFlav);
        init_vec(cleanmask);
     //   init_vec(nElectron);
    }
        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } ele;
    class TauVars {
    public:
      TauVars() { init(); };
       unsigned int size;
      std::vector<int> chargedIso;
      std::vector<int> dxy;
      std::vector<int> dz;
      std::vector<int> eta;
      std::vector<int> leadTkDeltaEta;
      std::vector<int> leadTkDeltaPhi;
      std::vector<int> leadTkPtOverTauPt;
      std::vector<int> mass;
      std::vector<int> neutralIso;
      std::vector<int> phi;
      std::vector<int> photonsOutsideSignalCone;
      std::vector<int> pt;
      std::vector<int> puCorr;
      std::vector<int> rawAntiEle;
      std::vector<int> rawIso;
      std::vector<int> rawIsodR03;
      std::vector<int> rawMVAnewDM2017v2;
      std::vector<int> rawMVAoldDM;
      std::vector<int> rawMVAoldDM2017v1;
      std::vector<int> rawMVAoldDM2017v2;
      std::vector<int> rawMVAoldDMdR032017v2;
      std::vector<int> charge;
      std::vector<int> decayMode;
      std::vector<int> jetIdx;
      std::vector<int> rawAntiEleCat;
      std::vector<int> idAntiEle;
      std::vector<int> idAntiMu;
      std::vector<int> idDecayMode;
      std::vector<int> idDecayModeNewDMs;
      std::vector<int> idMVAnewDM2017v2;
      std::vector<int> idMVAoldDM;
      std::vector<int> idMVAoldDM2017v1;
      std::vector<int> idMVAoldDM2017v2;
      std::vector<int> idMVAoldDMdR032017v2;
      std::vector<int> cleanmask;
      std::vector<int> genPartIdx;
      std::vector<int> genPartFlav;
      std::vector<int> nTau;
    
    unsigned int it;
    
      void init() {
      it = -1;
      size=9999;
        init_vec(chargedIso);
        init_vec(dxy);
        init_vec(dz);
        init_vec(eta);
        init_vec(leadTkDeltaEta);
        init_vec(leadTkDeltaPhi);
        init_vec(leadTkPtOverTauPt);
        init_vec(mass);
        init_vec(neutralIso);
        init_vec(phi);
        init_vec(photonsOutsideSignalCone);
        init_vec(pt);
        init_vec(puCorr);
        init_vec(rawAntiEle);
        init_vec(rawIso);
        init_vec(rawIsodR03);
        init_vec(rawMVAnewDM2017v2);
        init_vec(rawMVAoldDM);
        init_vec(rawMVAoldDM2017v1);
        init_vec(rawMVAoldDM2017v2);
        init_vec(rawMVAoldDMdR032017v2);
        init_vec(charge);
        init_vec(decayMode);
        init_vec(jetIdx);
        init_vec(rawAntiEleCat);
        init_vec(idAntiEle);
        init_vec(idAntiMu);
        init_vec(idDecayMode);
        init_vec(idDecayModeNewDMs);
        init_vec(idMVAnewDM2017v2);
        init_vec(idMVAoldDM);
        init_vec(idMVAoldDM2017v1);
        init_vec(idMVAoldDM2017v2);
        init_vec(idMVAoldDMdR032017v2);
        init_vec(cleanmask);
        init_vec(genPartIdx);
        init_vec(genPartFlav);
        init_vec(nTau);
    }
        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } tau;
    class MuonVars {
    public:
      MuonVars() { init(); };
      unsigned int size; 
      std::vector<float> dxy;
      std::vector<float> dxyErr;
      std::vector<float> dz;
      std::vector<float> dzErr;
      std::vector<float> eta;
      std::vector<float> ip3d;
      std::vector<float> mass;
      std::vector<float> miniPFRelIso_all;
      std::vector<float> miniPFRelIso_chg;
      std::vector<float> pfRelIso03_all;
      std::vector<float> pfRelIso03_chg;
      std::vector<float> pfRelIso04_all;
      std::vector<float> phi;
      std::vector<float> pt;
      std::vector<float> ptErr;
      std::vector<float> segmentComp;
      std::vector<float> sip3d;
      std::vector<float> mvaTTH;
      std::vector<float> charge;
      std::vector<float> jetIdx;
      std::vector<float> nStations;
      std::vector<float> nTrackerLayers;
      std::vector<float> pdgId;
      std::vector<float> tightCharge;
      std::vector<float> highPtId;
      std::vector<float> isPFcand;
      std::vector<float> mediumId;
      std::vector<float> softId;
      std::vector<float> tightId;
      std::vector<float> genPartIdx;
      std::vector<float> genPartFlav;
      std::vector<float> cleanmask;
    
      unsigned int it;
    
    void init() {
      it = -1;
      size=9999;
        init_vec(dxy);
        init_vec(dxyErr);
        init_vec(dz);
        init_vec(dzErr);
        init_vec(eta);
        init_vec(ip3d);
        init_vec(mass);
        init_vec(miniPFRelIso_all);
        init_vec(miniPFRelIso_chg);
        init_vec(pfRelIso03_all);
        init_vec(pfRelIso03_chg);
        init_vec(pfRelIso04_all);
        init_vec(phi);
        init_vec(pt);
        init_vec(ptErr);
        init_vec(segmentComp);
        init_vec(sip3d);
        init_vec(mvaTTH);
        init_vec(charge);
        init_vec(jetIdx);
        init_vec(nStations);
        init_vec(nTrackerLayers);
        init_vec(pdgId);
        init_vec(tightCharge);
        init_vec(highPtId);
        init_vec(isPFcand);
        init_vec(mediumId);
        init_vec(softId);
        init_vec(tightId);
        init_vec(genPartIdx);
        init_vec(genPartFlav);
        init_vec(cleanmask);
//        init_vec(nMuon);
    }
    
   bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
} mu;

    class SubjetVars {
    public:
      SubjetVars() { init(); };
      
    
    unsigned int it;
    
      void init() {
      it = -1;
    }
/*        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }*/
    
  } subjet;
    class SoftActivityJetVars {
    public:
      SoftActivityJetVars() { init(); };
      unsigned int size;  
      std::vector<double> eta;
      std::vector<double> phi;
      std::vector<double> pt;
      std::vector<double> nSoftActivityJet;
    
    unsigned int it;
    
      void init() {
      it = -1;
      size=9999;
        init_vec(eta);
        init_vec(phi);
        init_vec(pt);
        init_vec(nSoftActivityJet);
    }
        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } softactjet;
    class GenDressedLepton {
    public:
      GenDressedLepton() { init(); };
      unsigned int size; 
      std::vector<double> eta;
      std::vector<double> mass;
      std::vector<double> phi;
      std::vector<double> pt;
      std::vector<double> pdgId;
      std::vector<double> nGenDressedLepton;
    
    unsigned int it;
    
      void init() {
      it = -1;
      size=9999;
        init_vec(eta);
        init_vec(mass);
        init_vec(phi);
        init_vec(pt);
        init_vec(pdgId);
        init_vec(nGenDressedLepton);
    }
        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } gendreslep;
    class FatJetVars {
    public:
      FatJetVars() { init(); };
      unsigned int size; 
      std::vector<double> area;
      std::vector<double> btagCMVA;
      std::vector<double> btagCSVV2;
      std::vector<double> btagDeepB;
      std::vector<double> btagHbb;
      std::vector<double> eta;
      std::vector<double> mass;
      std::vector<double> msoftdrop;
      std::vector<double> n2b1;
      std::vector<double> n3b1;
      std::vector<double> phi;
      std::vector<double> pt;
      std::vector<double> tau1;
      std::vector<double> tau2;
      std::vector<double> tau3;
      std::vector<double> tau4;
      std::vector<double> jetId;
      std::vector<double> subJetIdx1;
      std::vector<double> subJetIdx2;
      std::vector<double> nFatJet;
    
    unsigned int it;
    
      void init() {
      it = -1;
      size=9999;
        init_vec(area);
        init_vec(btagCMVA);
        init_vec(btagCSVV2);
        init_vec(btagDeepB);
        init_vec(btagHbb);
        init_vec(eta);
        init_vec(mass);
        init_vec(msoftdrop);
        init_vec(n2b1);
        init_vec(n3b1);
        init_vec(phi);
        init_vec(pt);
        init_vec(tau1);
        init_vec(tau2);
        init_vec(tau3);
        init_vec(tau4);
        init_vec(jetId);
        init_vec(subJetIdx1);
        init_vec(subJetIdx2);
        init_vec(nFatJet);
    }
        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } fatjet;
    class GenJetAK8Vars {
    public:
      GenJetAK8Vars() { init(); };
      unsigned int size; 
      std::vector<double> eta;
      std::vector<double> mass;
      std::vector<double> phi;
      std::vector<double> pt;
      std::vector<double> partonFlavour;
      std::vector<double> hadronFlavour;
      std::vector<double> nGenJetAK8;
    
    unsigned int it;
    
      void init() {
      it = -1;
       size=9999;
        init_vec(eta);
        init_vec(mass);
        init_vec(phi);
        init_vec(pt);
        init_vec(partonFlavour);
        init_vec(hadronFlavour);
        init_vec(nGenJetAK8);
    }
        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } genAK8;
    class GenJetVars {
    public:
      GenJetVars() { init(); };
      unsigned int size; 
      std::vector<double> eta;
      std::vector<double> mass;
      std::vector<double> phi;
      std::vector<double> pt;
      std::vector<double> partonFlavour;
      std::vector<double> hadronFlavour;
      std::vector<double> nGenJetAK8;
      std::vector<double> nGenJet;
    
    unsigned int it;
    
      void init() {
      it = -1;
      size=9999;
        init_vec(eta);
        init_vec(mass);
        init_vec(phi);
        init_vec(pt);
        init_vec(partonFlavour);
        init_vec(hadronFlavour);
        init_vec(nGenJetAK8);
        init_vec(nGenJet);
    }
        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } genjet;
    class GenPartVars {
    public:
      GenPartVars() { init(); };
      unsigned int size; 
      std::vector<double> eta;
      std::vector<double> mass;
      std::vector<double> phi;
      std::vector<double> pt;
      std::vector<double> genPartIdxMother;
      std::vector<double> pdgId;
      std::vector<double> status;
      std::vector<double> statusFlags;
      std::vector<double> nGenPart;
    
    unsigned int it;
    
      void init() {
      it = -1;
      size=9999;
        init_vec(eta);
        init_vec(mass);
        init_vec(phi);
        init_vec(pt);
        init_vec(genPartIdxMother);
        init_vec(pdgId);
        init_vec(status);
        init_vec(statusFlags);
        init_vec(nGenPart);
    }
        bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } genpart;
    class SubGenJetAK8Vars {
    public:
      SubGenJetAK8Vars() { init(); };
      unsigned int size; 
      std::vector<double> eta;
      std::vector<double> mass;
      std::vector<double> phi;
      std::vector<double> pt;
      std::vector<double> nSubGenJetAK8;
    
    unsigned int it;
    
      void init() {
      it = -1;
      size=9999;
        init_vec(eta);
        init_vec(mass);
        init_vec(phi);
        init_vec(pt);
        init_vec(nSubGenJetAK8);
    }
    bool Loop() {
      if (size==9999) return 0;
      ++it;
      if (it<size) {
        return 1;
      } else {
        it=-1;
        return 0;
      }
    }
    
  } subjetsAK8;
  
};

#endif

