{
   gSystem->Load("./plotter_fromTTree_C.so");

   SetIO("../outRoot/recoKinematicsT3m_MC_2022_HLT_Tau3Mu.root", "Tau3Mu_HLTemul_tree", "/eos/user/c/cbasile/www/Tau3Mu_Run3/MCstudies/2022/RecoLevel/");

   // muons ID
   draw_many_histos({"tau_mu1_MediumID", "tau_mu2_MediumID", "tau_mu3_MediumID"}, {"mu1", "mu2", "mu3"},"#mu medium ID", 2, -0.5,1.5, "Muons_MediumID", true);
   draw_many_histos({"tau_mu1_SoftID_PV", "tau_mu2_SoftID_PV", "tau_mu3_SoftID_PV"}, {"mu1", "mu2", "mu3"},"#mu soft ID", 2, -0.5,1.5, "Muons_SoftID_PV", true);
   draw_many_histos({"tau_mu1_TightID_PV", "tau_mu2_TightID_PV", "tau_mu3_TightID_PV"}, {"mu1", "mu2", "mu3"},"#mu tight ID", 2, -0.5,1.5, "Muons_TightID_PV", true);
   draw_many_histos({"tau_mu1_MediumID", "tau_mu1_SoftID_PV", "tau_mu1_TightID_PV" }, {"mu1", "mu2", "mu3"},"#mu_{1} ID", 2, -0.5,1.5, "Muon1_IDs", true);
   // muons kinematics
   draw_many_histos({"tau_mu1_pt", "tau_mu2_pt", "tau_mu3_pt"}, {"mu1", "mu2", "mu3"},"p_{T}(#mu) (GeV)", 50, 0.,50., "Muons_pT");
   draw_many_histos({"tau_mu1_eta", "tau_mu2_eta", "tau_mu3_eta"}, {"mu1", "mu2", "mu3"},"#eta (#mu)", 70, -3.5, 3.5, "Muons_eta");
   draw_one_histo("tau_mu12_dZ", "mu","#Delta z(#mu_{1}, #mu_{2}) (cm)", 40, 0., 5., "tau_mu12_dZ", true);
   draw_one_histo("tau_mu23_dZ", "mu","#Delta z(#mu_{2}, #mu_{3}) (cm)", 40, 0., 5., "tau_mu23_dZ", true);
   draw_one_histo("tau_mu13_dZ", "mu","#Delta z(#mu_{1}, #mu_{3}) (cm)", 40, 0., 5., "tau_mu13_dZ", true);

   // Tau
   draw_one_histo("n_tau", "Tau_vc", "#(#tau -> 3 #mu) candidates", 10, 0., 10., "Ntau_cand", true);
   draw_one_histo("tau_fit_mass", "Tau_vc", "M(3 #mu) (GeV)", 50, 1.6, 2.0, "Tau_fit_M");
   draw_one_histo("tau_fit_pt", "Tau_vc", "p_{T}(3 #mu) (GeV)", 40, 10, 100, "Tau_fit_pT");
   draw_one_histo("tau_fit_eta", "Tau_vc", "#eta (3 #mu)", 70, -3.5, 3.5, "Tau_fit_eta");
   draw_one_histo("tau_fit_phi", "Tau_vc", "#phi (3 #mu)", 62, -3.1, 3.1, "Tau_fit_phi");
   draw_one_histo("tau_relIso", "Tau_vc", "rel. isolation (3 #mu)", 50, 0, 2., "Tau_relIso", true);
   draw_one_histo("tau_dimuon_mass", "Tau_vc", "di-muon fit mass", 100, 0, 95., "Tau_dimuon_mass");
   draw_one_histo("tau_Lxy_sign_BS", "Tau_vc", "L_{xy}(BS;3#mu-vtx)/#sigma", 40, 0, 30, "Tau_Lxysign");
   draw_one_histo("tau_fit_mt", "Tau_vc", "M_{T}(3 #mu)", 50, 0., 200., "Tau_Mt");
   draw_one_histo("tau_fit_vprob", "Tau_vc", "vtx-probability(3 #mu)", 20, 0., 1., "Tau_Vprob");
   draw_one_histo("tau_cosAlpha_BS", "Tau_vc", "cos_{#alpha}(3#mu vtx, BS)", 100, -1., 1., "Tau_cosAlpha_BS", true);

   // Tau + MET
   draw_one_histo("tau_met_Dphi", "PuppiMET", "#Delta #phi (3 #mu, MET)", 30, 0., 6., "Dphi_PuppiMET");
   draw_one_histo("tau_met_pt", "PuppiMET", " p_{T}(MET) (GeV)", 100, 0., 300., "pT_PuppiMET");
   draw_one_histo("tau_met_ratio_pt", "PuppiMET", " p_{T}^{3 #mu}/p_{T}^{MET} ", 100, 0., 40., "pTratio_PuppiMET", true);
   draw_one_histo("miss_pz_min", "PuppiMET", " min p_{z}^{#nu} (GeV)", 100, -400., 400., "miss_pz_min");
   draw_one_histo("miss_pz_max", "PuppiMET", " max p_{z}^{#nu} (GeV)", 100, -1500., 1500., "miss_pz_max");

   // W
   draw_one_histo("W_pt", "W", "p_{T}(W) (GeV)", 100, 0., 200., "W_pt");


}
