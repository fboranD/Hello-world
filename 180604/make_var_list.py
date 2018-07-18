import ROOT
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/ntuple/B2GTTreeNtupleExtra_MC_25ns_80X_QCD.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/Validation/CMSSW_8_0_20/src/B2GTTreeNtupleExtra_MC_25ns_80X_QCD.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/Validation/CMSSW_8_0_24_patch1/src/B2GTTreeNtupleExtra_MC_80X.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/Validation/CMSSW_8_0_26_patch2/src/B2GTTreeNtupleExtra_MC_80X.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/CMSSW_8_0_26_patch2/src/B2GTTreeNtupleExtra_MC_80X_GJets.root")
#File = ROOT.TFile.Open("/data/jkarancs/CMSSW/SusyAnalysis/Ntuples/CMSSW_8_0_26_patch2/src/B2GTTreeNtupleExtra_MC_80X_FastSim_test.root")
File = ROOT.TFile.Open("/eos/user/f/fboran/2017DATA/CMSSW_8_0_28/src/BoostedRazorAnalysis/Analyzer/ntuple/testdata2017/test94X_NANO.root")
tree = File.Get("Events")
text_file = open("NanoAOD_Varlist.txt","w")

def printvars( tree, name, prefix_list ):
    # print variables
    for prefix in prefix_list:
        for branch in tree.GetListOfBranches():
            branchname = branch.GetName()
            if prefix in branchname:
                short = branchname if (prefix_list[0] not in prefix) else branchname[len(prefix):]
                print "  //stream.select(\""+branchname+"\", data."+name+"."+short+");"
		text_file.write("  stream.select(\""+branchname+"\", data."+name+"."+short+");\n")
    print "  "
    return
    text_file.close()

# Now print the contents for settings.h
print """//-----------------------------------------------------------------------------
// -- Declare variables to be read by treestream
//-----------------------------------------------------------------------------
// --- Structs can be filled by calling fillObjects()
// --- after the call to stream.read(...)
//-----------------------------------------------------------------------------
// -- Select variables to be read
//-----------------------------------------------------------------------------

void selectVariables(itreestream& stream, DataStruct& data) {
"""

printvars( tree, "puppimet",        ["PuppiMet_"]                )
printvars( tree, "pu",              ["Pileup_"]                  )
printvars( tree, "rawmet",          ["RawMET_"]                  )
printvars( tree, "calomet",         ["CaloMET_"]                 )
printvars( tree, "filter",          ["Flag_"]                    )
printvars( tree, "hlt",             ["HLT_"]                     )
printvars( tree, "pho",             ["Photon_", "nPhoton"]       )
printvars( tree, "ele",             ["Electron_", "nElectron"]   )
printvars( tree, "tau",             ["Tau_", "nTau"]             )
printvars( tree, "mu",              ["Muon_", "nMuon"]           )
printvars( tree, "subjet",          ["Subjet_", "nSubjet"]       )
printvars( tree, "softactjet",      ["SoftActivityJet_", "nSoftActivityJet"] )
printvars( tree, "gendreslep",      ["GenDressedLepton_", "nGenDressedLepton"] )
printvars( tree, "fatjet",          ["FatJet_", "nFatJet"]       )
printvars( tree, "genAK8",          ["GenJetAK8_", "nGenJetAK8"] )
printvars( tree, "genjet",          ["GenJet_", "nGenJet"]       )
printvars( tree, "genpart",         ["GenPart_", "nGenPart"]     )
printvars( tree, "subjetsAK8",      ["SubGenJetAK8_", "nSubGenJetAK8"] )

#printvars( tree, "evt",             ["evt_", "SUSY_"] )
#printvars( tree, "met",             ["met_"] )
#printvars( tree, "puppimet",        ["puppimet_"] )
#printvars( tree, "pu",              ["pu_"] )
#printvars( tree, "vtx",             ["vtx_"] )
#printvars( tree, "syst_scale",      ["scale_"] )
#printvars( tree, "syst_pdf",        ["pdf_"] )
#printvars( tree, "syst_alphas",     ["alphas_"] )
#printvars( tree, "syst_met",        ["metsyst_"] )
#printvars( tree, "syst_puppimet",   ["puppimetsyst_"] )
#printvars( tree, "filter",          ["Flag_"] )
#printvars( tree, "hlt",             ["HLT_"] )
#printvars( tree, "gen",             ["gen_"] )
#printvars( tree, "pho",             ["Photon_"] )
#printvars( tree, "ele",             ["Electron_"] )
#printvars( tree, "mu",              ["Muon_"] )
#printvars( tree, "tau",             ["Tau_"] )
#printvars( tree, "jetsAK4",         ["jetAK4CHS_"] )
#printvars( tree, "jetsAK8",         ["jetAK8CHS_"] )
#printvars( tree, "subjetsAK8",      ["subjetAK8CHS_"] )
#printvars( tree, "genjetsAK8",      ["genjetAK8SD_"] )

print "}"
