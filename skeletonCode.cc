#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include "TTreeIndex.h"
#include "TChain.h"
#include "TH1.h"
#include "TF1.h"
#include "TF2.h"
#include "TFile.h"
#include "TRandom.h"
#include "TRandom2.h"
#include "TRandom3.h"
#include "TTree.h"
#include "TLegend.h"
#include "TLine.h"
#include "TROOT.h"
#include "TPostScript.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TText.h"
#include "TProfile.h"
#include "TGraphErrors.h"
#include "TStyle.h"
#include "TMath.h"
#include <unistd.h>
#include "TVector3.h"
#include "TRotation.h"
#include "TSpline.h"
#include "Math/Integrator.h"

//#include <fftw3.h>

using namespace std;

#include "Tools.h"
#include "Constants.h"
#include "Vector.h"
#include "Position.h"
#include "EarthModel.h"
#include "IceModel.h"
#include "Efficiencies.h"
#include "Spectra.h"
#include "Event.h"
#include "Trigger.h"
#include "Detector.h"
#include "Settings.h"
#include "counting.hh"
#include "Primaries.h"
#include "Report.h"

#include "Ray.h"

class EarthModel; //class


int main(int argc, char **argv) {    // this is for manual power threshold value



    string readfile;
  if (argc<2) { // no setup file input, use default
      readfile = "outputs/AraOut.root";
  }
  else if (argc == 2) { // read file!!
      readfile = string( argv[1] );
  }
  else { // no mode for argc > 2!
      cout<<"too many info! just use default AraOut.root file!"<<endl;
      readfile = "outputs/AraOut.root";
  }

  //TODO : Modify this code to take in multiple input files using TChain

  //  Settings *settings = new Settings();

  //  Detector *detector=new Detector(settings->DETECTOR); // builds antenna array, 0 for testbed
  //  Detector *detector=0; // builds antenna array, 0 for testbed
  Detector *detector = 0;
  Settings *settings = 0;
  Spectra *spectra = 0;
  IceModel *icemodel = 0;
  Event *event = 0;
  Report *report = 0;
  Trigger *trigger = 0;
  cout<<"construct detector"<<endl;


  TFile *AraFile=new TFile(( readfile ).c_str());
  //TFile *AraFile=new TFile((outputdir+"/AraOut.root").c_str());
  cout<<"AraFile"<<endl;
  TTree *AraTree=(TTree*)AraFile->Get("AraTree");
  TTree *AraTree2=(TTree*)AraFile->Get("AraTree2");
  cout<<"AraTree"<<endl;
  AraTree->SetBranchAddress("detector",&detector);
  AraTree->SetBranchAddress("settings",&settings);
  AraTree->SetBranchAddress("spectra",&spectra);
  AraTree->SetBranchAddress("icemodel",&icemodel);
  AraTree->SetBranchAddress("trigger",&trigger);
  AraTree2->SetBranchAddress("event",&event);
  AraTree2->SetBranchAddress("report",&report);
  cout<<"branch detector"<<endl;

  AraTree->GetEvent(0);
  cout<<"getevent"<<endl;
  cout << "I'm here.\n";
  //cout << "GetGain(700,5,0,0) is " << detector->GetGain(700., 5., 0., 0) << "\n";
  //cout << "GetGain(10,5,0,0) is " << detector->GetGain(10., 5., 0., 0) << "\n";

  // cout<<"station x is "<<detector->stations[0].GetX()<<endl;
  // cout<<"string x is "<<detector->stations[0].strings[0].GetX()<<endl;
  // cout<<"antenna x is "<<detector->stations[0].strings[0].antennas[0].GetX()<<endl;
  //cout<<"antenna Gain(700,5,0) is "<<detector->stations[0].strings[0].antennas[0].GetG(detector,700.,5.,0.)<<endl;

  //Get the station coordinates and string coordinates printed out.

/* This should be a part of the skeleton code, in case you want to look back

  cout<<"station x is "<<detector->stations[0].GetX()<<endl;
  cout<<"station y is "<<detector->stations[0].GetY()<<endl;
  cout<<"station z is "<<detector->stations[0].GetZ()<<endl;
  double depth = detector->stations[0].GetZ();
  for (int i = 0; i < detector->params.number_of_strings;i++){
    cout<<" String "<<i<<" X = "<<(double)detector->stations[0].strings[i].GetX()<<endl;
    cout<<" String "<<i<<" Y = "<<(double)detector->stations[0].strings[i].GetY()<<endl;
    for (int j = 0; j < detector->params.number_of_antennas_string;j++){
      cout<<" String "<<i<<" Antenna "<<j<<" Z = "<<(double)detector->stations[0].strings[i].antennas[j].GetZ() - depth<<endl;
    }
  }
*/

  cout<<"params.number_of_stations : "<<detector->params.number_of_stations<<endl;
  cout<<"params.station_spacing : "<<detector->params.station_spacing<<endl;

  cout<<"\n"<<endl;
  cout<<"Settings->NNU : "<<settings->NNU<<endl;
  cout<<"Settings->DETECTOR : "<<settings->DETECTOR<<endl;
  cout<<"Settings->EXPONENT : "<<settings->EXPONENT<<endl;


  cout<<"random energy from Spectra : "<<spectra->GetNuEnergy()<<endl;

  cout<<"Detector static const double freq_init : "<<detector->Getfreq_init()<<endl;


  cout<<"Detector -> freq_forfft[0] : "<<detector->freq_forfft[0]<<endl;
  cout<<"Detector -> freq_forfft[9] : "<<detector->freq_forfft[9]<<endl;
  cout<<"Detector -> freq_forfft[100] : "<<detector->freq_forfft[100]<<endl;

  cout<<"icemodel surface : "<<icemodel->Surface(0.,0.)<<endl;

  AraTree2->GetEvent(0);
  cout<<"nnu x : "<<event->Nu_Interaction[0].nnu.GetX()<<endl;
  AraTree2->GetEvent(1);
  cout<<"nnu x : "<<event->Nu_Interaction[0].nnu.GetX()<<endl;

  cout<<"Vmmhz size "<<report->stations[0].strings[0].antennas[0].vmmhz.size()<<endl;
  cout<<"Vmmhz value "<<report->stations[0].strings[0].antennas[0].vmmhz[1].size()<<endl;



  int nnu_pass = 0; // number of nu events which passed PickUnbiased.
  double posnuX;
  double posnuY;
  double posnuZ;
  double posnuR;
  double posnuTheta;
  double posnuPhi;

  double dirnuX;
  double dirnuY;
  double dirnuZ;
  double dirnuR;
  double dirnuTheta;
  double dirnuPhi;

  string current;

  vector <double> vmmhz1m;
  vector <int> signalBin;

  double emfrac;
  double hadfrac;





  double posnuX_max=-icemodel->R_EARTH;
  double posnuY_max=-icemodel->R_EARTH;

  double posnuX_min=icemodel->R_EARTH;
  double posnuY_min=icemodel->R_EARTH;


  ofstream outputFile;
  char nameofOutputFile[200];
  sprintf(nameofOutputFile,"eventInfo.txt");
  outputFile.open(nameofOutputFile);

  ///////////////////////////////////////////
  //  test Detector class
  ///////////////////////////////////////////

  int bin = settings->NFOUR/2;
  double wf_time_offset = -450.;// in ns


  if ( settings->DETECTOR != 0 ) {


      for (int inu=0;inu<settings->NNU;inu++) { // loop over neutrinos


          AraTree2->GetEvent(inu); // this is for report and event class
          AraTree->GetEvent(inu); // this is for trigger, detector and other classes

          // save X, Y of posnus which passed PickUnbiased
          if ( report->stations[0].Global_Pass > 0) {
              //The position of all the events
              posnuX = event->Nu_Interaction[0].posnu.GetX();
              posnuY = event->Nu_Interaction[0].posnu.GetY();
              posnuZ = event->Nu_Interaction[0].posnu.GetZ();
              posnuR = event->Nu_Interaction[0].posnu.R();
              posnuTheta = event->Nu_Interaction[0].posnu.Theta();
              posnuPhi = event->Nu_Interaction[0].posnu.Phi();

              // if (posnuX[nnu_pass] > posnuX_max) posnuX_max = posnuX[nnu_pass];
              // if (posnuX[nnu_pass] < posnuX_min) posnuX_min = posnuX[nnu_pass];
              //
              // if (posnuY[nnu_pass] > posnuY_max) posnuY_max = posnuY[nnu_pass];
              // if (posnuY[nnu_pass] < posnuY_min) posnuY_min = posnuY[nnu_pass];

              dirnuX = event->Nu_Interaction[0].nnu.GetX();
              dirnuY = event->Nu_Interaction[0].nnu.GetY();
              dirnuZ = event->Nu_Interaction[0].nnu.GetZ();
              dirnuR = event->Nu_Interaction[0].nnu.R();
              dirnuTheta = event->Nu_Interaction[0].nnu.Theta();
              dirnuPhi = event->Nu_Interaction[0].nnu.Phi();

              emfrac = event->Nu_Interaction[0].emfrac;
              hadfrac = event->Nu_Interaction[0].hadfrac;

              //signalBin = report->signal_bin;
              current = event->Nu_Interaction[0].current;
              outputFile<<"Event Number "<<nnu_pass<<endl;

              outputFile<<"Position (Cartesian) (X,Y,Z) :"<<posnuX<<", "<<posnuY<<", "<<posnuZ<<endl;
              outputFile<<"Position (Spherical) (R, Theta, Phi) :"<<posnuR<<" "<<posnuTheta<<" "<<posnuPhi<<endl;
              outputFile<<"Direction (Cartesian)  :"<<dirnuX<<", "<<dirnuY<<", "<<dirnuZ<<endl;
              outputFile<<"Position (Spherical)  :"<<dirnuR<<" "<<dirnuTheta<<" "<<dirnuPhi<<endl;
              outputFile<<"Em frac : "<<emfrac<<" Hadronic frac : "<<hadfrac<<endl;
              outputFile<<"Type of Interaction "<<current;
              outputFile<<endl;
              outputFile<<" Waveforms - without Diode Convolution"<<endl;
              for (int i = 0; i < 4; i++){
                for (int j = 0; j < 4; j++){
                  for (int l=0; l<bin; l++) {
                    outputFile<<report->stations[0].strings[i].antennas[j].V_mimic[l]<<" ";
                  }
                }
              }
              outputFile<<endl;



              outputFile<<endl;
              outputFile<<endl;

              nnu_pass++;

          }
      }


  }


}
