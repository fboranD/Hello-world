import ROOT
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/ntuple/B2GTTreeNtupleExtra_MC_25ns_80X_QCD.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/Validation/CMSSW_8_0_20/src/B2GTTreeNtupleExtra_MC_25ns_80X_QCD.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/Validation/CMSSW_8_0_24_patch1/src/B2GTTreeNtupleExtra_MC_80X.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/Validation/CMSSW_8_0_26_patch2/src/B2GTTreeNtupleExtra_MC_80X.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/CMSSW_8_0_26_patch2/src/B2GTTreeNtupleExtra_MC_80X_GJets.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/CMSSW_8_0_26_patch2/src/B2GTTreeNtupleExtra_MC_80X_FastSim_test.root")
File = ROOT.TFile.Open("/eos/user/f/fboran/RazorAnalysis/new_CMSSW_8_0_28/CMSSW_8_0_28/src/BoostedRazorAnalysis/Analyzer/common/test94X_NANO.root")
tree = File.Get("Events")
text_file = open("DataStruct.txt","w")
	
def printvars( varname, vartype, prefix, keep_prefix ):
    if varname.startswith(prefix):
        short = varname if keep_prefix else varname[len(prefix):]
        #if "Keys" in varname:
        #    text_file.write( "    std::vector<std::vector<int> > "+short+";\n")
        #elif isvector:
		
        if "nTau" in vartype:
            text_file.write( "      std::vector<int> "+short+";\n")
        elif "Tau_" in vartype:
            text_file.write( "      std::vector<int> "+short+";\n")
        elif "Photon_"  in vartype:
            text_file.write( "      std::vector<float> "+short+";\n")
 	elif "nPhoton_"  in vartype:
            text_file.write( "      std::vector<float> "+short+";\n")
	elif "Electron_"  in vartype:
            text_file.write( "      std::vector<float> "+short+";\n")
   	elif "nElectron_"  in vartype:
            text_file.write( "      std::vector<float> "+short+";\n")
        elif "Muon_"  in vartype:
            text_file.write( "      std::vector<float> "+short+";\n")
 	elif "nMuon_"  in vartype:
            text_file.write( "      std::vector<float> "+short+";\n")
        elif "Subjet_" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif  "nSubjet"  in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
  	elif "SoftActivityJet_" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "nSoftActivityJet" in vartype:
    	    text_file.write( "      std::vector<double> "+short+";\n")
	elif "GenDressedLepton_" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "nGenDressedLepton" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "FatJet_" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "nFatJet" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "GenJetAK8_" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "nGenJetAK8" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "GenJet_" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "nGenJet" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "GenPart_" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "nGenPart" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "SubGenJetAK8_" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
	elif "nSubGenJetAK8" in vartype:
            text_file.write( "      std::vector<double> "+short+";\n")
        elif "HLT_" in vartype:
            text_file.write( "      int "+short+";\n")
	elif "Flag_" in vartype:
            text_file.write( "      int "+short+";\n")
	elif "Pileup_" in vartype:
            text_file.write( "      int "+short+";\n")
	elif "PuppiMET_" in vartype:
            text_file.write( "      int "+short+";\n")
	elif "RawMET_" in vartype:
            text_file.write( "      int "+short+";\n")
	elif "CaloMET_" in vartype:
            text_file.write( "      int "+short+";\n")
    return

def printinits( varname, vartype, prefix, keep_prefix ):
    if varname.startswith(prefix):
    	short = varname if keep_prefix else varname[len(prefix):]
    	#if isvector or "Keys" in varname:
        #	text_file.write( "      init_vec("+short+");\n")
    	#else:
        if "HLT_" in vartype:
                text_file.write( "        "+short+"=NOVAL_I;\n")
	elif "Flag_" in vartype:
                text_file.write( "        "+short+"=NOVAL_I;\n")
	elif "Pileup_"  in vartype:
                text_file.write( "        "+short+"=NOVAL_F;\n")
	elif  "PuppiMET_" in vartype:
                text_file.write( "        "+short+"=NOVAL_F;\n")
	elif  "RawMET_" in vartype:
                text_file.write( "        "+short+"=NOVAL_F;\n")
	elif  "CaloMET_" in vartype:
                text_file.write( "        "+short+"=NOVAL_F;\n")
       	elif "Photon_" in vartype:
            	text_file.write( "        init_vec("+short+");\n")
	elif "nPhoton" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "Electron_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nElectron" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "Muon_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nMuon" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "Tau_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nTau" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "Photon_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nPhoton" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "Subjet_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nSubjet" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "SoftActivityJet_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nSoftActivityJet" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "GenDressedLepton_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nGenDressedLepton" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "FatJet_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nFatJet" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "GenJetAK8_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nGenJetAK8" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "GenJet_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nGenJet" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "GenPart_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nGenPart" in vartype:
                text_file.write( "        init_vec("+short+");\n") 
	elif "SubGenJetAK8_" in vartype:
                text_file.write( "        init_vec("+short+");\n")
	elif "nSubGenJetAK8" in vartype:
                text_file.write( "        init_vec("+short+");\n") 
    return

def printclass( tree, classname, name, prefix_list, add_loop ):
    text_file.write( "  class "+classname+" {\n")
    text_file.write( "    public:\n")
    text_file.write( "      "+classname+"() { init(); };\n")
    text_file.write( "      \n")
    # print variables
    for prefix in prefix_list:
        for branch in tree.GetListOfBranches(): printvars( branch.GetName(), branch.GetName(), prefix,  (prefix_list[0] != prefix) )
    text_file.write( "    \n")
    if add_loop:
        text_file.write( "    unsigned int it;\n")
        text_file.write( "    \n")
    text_file.write( "      void init() {\n")
    if add_loop: text_file.write( "      it = -1;\n")
    # initialize variables
    for prefix in prefix_list:
        for branch in tree.GetListOfBranches(): printinits( branch.GetName(), branch.GetName(), prefix, (prefix_list[0] != prefix) )
    text_file.write( "    }\n")
    if add_loop:
        text_file.write( "    ")
        text_file.write( "    bool Loop() {\n")
        text_file.write( "      if (size==9999) return 0;\n")
        text_file.write( "      ++it;\n")
        text_file.write( "      if (it<size) {\n")
        text_file.write( "        return 1;\n")
        text_file.write( "      } else {\n")
        text_file.write( "        it=-1;\n")
        text_file.write( "        return 0;\n")
        text_file.write( "      }\n")
        text_file.write( "    }\n")
    text_file.write( "    \n")
    text_file.write( "  } "+name+";\n")
    text_file.write( "  ")
    return


# Now print the contents for common/DataStruct.h
text_file.write( """#ifndef DataStruct_h
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
\n""")


printclass( tree, "METData",             "rawmet",          ["RawMET_"],                                0 )
printclass( tree, "PuppiMETData",        "puppimet",        ["PuppiMet_"],                              0 )
printclass( tree, "PileupData",          "pu",              ["Pileup_"],                                0 )
printclass( tree, "HLTData",             "hlt",             ["HLT_"],                                   0 )
printclass( tree, "CaloMETData",         "calomet",         ["CaloMET_"],                               1 )
printclass( tree, "FilterData",          "filter",          ["Flag_"],                                  1 )
printclass( tree, "PhotonVars",          "pho",             ["Photon_", "nPhoton"],                     1 )
printclass( tree, "ElectronVars",        "ele",             ["Electron_", "nElectron"],                 1 )
printclass( tree, "TauVars",             "tau",             ["Tau_", "nTau"],                            1 )
printclass( tree, "MuonVars",            "mu",              ["Muon_", "nMuon"],                          0 )
printclass( tree, "SubjetVars",          "subjet",          ["Subjet_", "nSubjet"],                      1 )
printclass( tree, "SoftActivityJetVars", "softactjet",      ["SoftActivityJet_", "nSoftActivityJet"],    1 )
printclass( tree, "GenDressedLepton",    "gendreslep",      ["GenDressedLepton_", "nGenDressedLepton"],  1 )
printclass( tree, "FatJetVars",          "fatjet",          ["FatJet_", "nFatJet"],                       1 )
printclass( tree, "GenJetAK8Vars",       "genAK8",          ["GenJetAK8_", "nGenJetAK8"],                 1 )
printclass( tree, "GenJetVars",          "genjet",          ["GenJet_", "nGenJet"],                       1 )
printclass( tree, "GenPartVars",         "genpart",         ["GenPart_", "nGenPart"],                     1 )
printclass( tree, "SubGenJetAK8Vars",    "subjetsAK8",      ["SubGenJetAK8_", "nSubGenJetAK8"],            1 )


#printclass( tree, "EventData",           "evt",             ["evt_", "SUSY_"],           			0 	)
##printclass( tree, "METData",             "met",             ["MET_"],            0 )
#printclass( tree, "PuppiMETData",        "puppimet",        ["PuppiMet_"],               			0 	)
#printclass( tree, "PileupData",          "pu",              ["Pileup_"],                 			0 	)
#printclass( tree, "RawMETData",          "rawmet",          ["RawMET_"],                 			0       )
#printclass( tree, "CaloMETData",         "calomet",         ["CaloMET_"],                			0       )
##printclass( tree, "VertexData",          "vtx",             ["vtx_"],            0 )
##printclass( tree, "SystScaleData",       "syst_scale",      ["scale_"],          1 )
##printclass( tree, "SystPDFData",         "syst_pdf",        ["pdf_"],            1 )
##printclass( tree, "SystAlphaSData",      "syst_alphas",     ["alphas_"],         1 )
##printclass( tree, "SystMETUncData",      "syst_met",        ["metsyst_"],        1 )
##printclass( tree, "SystPuppiMETUncData", "syst_puppimet",   ["puppimetsyst_"],   1 )
#printclass( tree, "FilterData",          "filter",          ["Flag_"],             	 			0 	)
#printclass( tree, "HLTData",             "hlt",             ["HLT_"],                    			0 	)
##printclass( tree, "GenVars",             "gen",             ["gen_"],            1 )
#printclass( tree, "PhotonVars",          "pho",             ["Photon_", "nPhoton"],      			1 	)
#printclass( tree, "ElectronVars",        "ele",             ["Electron_", "nElectron"],  			1	)
#printclass( tree, "TauVars",             "tau",             ["Tau_", "nTau"],            			1 	)	
#printclass( tree, "MuonVars",            "mu",              ["Muon_", "nMuon"],          			1 	)
#printclass( tree, "SubjetVars",          "subjet",          ["Subjet_", "nSubjet"],      			1       )
#printclass( tree, "SoftActivityJetVars", "softactjet",      ["SoftActivityJet_", "nSoftActivityJet"],      	1       )
#printclass( tree, "GenDressedLepton",    "gendreslep",      ["GenDressedLepton_", "nGenDressedLepton"],         1       )
#printclass( tree, "FatJetVars",          "fatjet",          ["FatJet_", "nFatJet"],                        	1       )
#printclass( tree, "GenJetAK8Vars",       "genAK8",          ["GenJetAK8_", "nGenJetAK8"],                       1       )
#printclass( tree, "GenJetVars",          "genjet",          ["GenJet_", "nGenJet"],                             1       )
#printclass( tree, "GenPartVars",         "genpart",         ["GenPart_", "nGenPart"],                           1       )
#printclass( tree, "SubGenJetAK8Vars",    "subjetsAK8",      ["SubGenJetAK8_", "nSubGenJetAK8"],                 1       )
##printclass( tree, "SVVars",              "SV",             ["SV_", "nSV"],                                  	 1       )  
##printclass( tree, "JetVars",             "jet",             ["Jet_", "nJet"],                                   1       )  ?
##printclass( tree, "AK4JetVars",          "jetsAK4",         ["jetAK4CHS_"],      1 )
##printclass( tree, "AK8JetVars",          "jetsAK8",         ["jetAK8CHS_"],      1 )
##printclass( tree, "AK8SubjetVars",       "subjetsAK8",      ["subjetAK8CHS_"],   1 )
##printclass( tree, "AK8GenJetVars",       "genjetsAK8",      ["genjetAK8SD_"],    1 )

text_file.write( """
};

#endif\n
""")

#for branch in tree.GetListOfBranches(): print branch.GetName()
#for branch in tree.GetListOfBranches():
#	if "[" in branch.GetTitle():
#		print branch.GetName()
text_file.close()
