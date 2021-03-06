/********************************************************************
* eventDict.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error eventDict.h/C is only for compilation. Abort cint.
#endif
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define G__ANSIHEADER
#define G__DICTIONARY
#define G__PRIVATE_GVALUE
#include "G__ci.h"
#include "FastAllocString.h"
extern "C" {
extern void G__cpp_setup_tagtableeventDict();
extern void G__cpp_setup_inheritanceeventDict();
extern void G__cpp_setup_typetableeventDict();
extern void G__cpp_setup_memvareventDict();
extern void G__cpp_setup_globaleventDict();
extern void G__cpp_setup_memfunceventDict();
extern void G__cpp_setup_funceventDict();
extern void G__set_cpp_environmenteventDict();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "Trigger.h"
#include "Detector.h"
#include "Settings.h"
#include "Spectra.h"
#include "IceModel.h"
#include "Primaries.h"
#include "Report.h"
#include "Event.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__eventDictLN_TClass;
extern G__linked_taginfo G__eventDictLN_TBuffer;
extern G__linked_taginfo G__eventDictLN_TMemberInspector;
extern G__linked_taginfo G__eventDictLN_vectorlEdoublecOallocatorlEdoublegRsPgR;
extern G__linked_taginfo G__eventDictLN_basic_ofstreamlEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__eventDictLN_string;
extern G__linked_taginfo G__eventDictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_Detector;
extern G__linked_taginfo G__eventDictLN_Settings;
extern G__linked_taginfo G__eventDictLN_Report;
extern G__linked_taginfo G__eventDictLN_Trigger;
extern G__linked_taginfo G__eventDictLN_vectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRcOallocatorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRsPgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRcOallocatorlEvectorlEvectorlEdoublecOallocatorlEdoublegRsPgRcOallocatorlEvectorlEdoublecOallocatorlEdoublegRsPgRsPgRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_Vector;
extern G__linked_taginfo G__eventDictLN_Position;
extern G__linked_taginfo G__eventDictLN_IceModel;
extern G__linked_taginfo G__eventDictLN_TF1;
extern G__linked_taginfo G__eventDictLN_Parameters;
extern G__linked_taginfo G__eventDictLN_Surface_antenna;
extern G__linked_taginfo G__eventDictLN_Antenna;
extern G__linked_taginfo G__eventDictLN_Antenna_string;
extern G__linked_taginfo G__eventDictLN_vectorlEAntennacOallocatorlEAntennagRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEAntennacOallocatorlEAntennagRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_ARA_station;
extern G__linked_taginfo G__eventDictLN_vectorlEAntenna_stringcOallocatorlEAntenna_stringgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEAntenna_stringcOallocatorlEAntenna_stringgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlESurface_antennacOallocatorlESurface_antennagRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlESurface_antennacOallocatorlESurface_antennagRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_InstalledStation;
extern G__linked_taginfo G__eventDictLN_vectorlEintcOallocatorlEintgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlEvectorlEintcOallocatorlEintgRsPgRcOallocatorlEvectorlEintcOallocatorlEintgRsPgRsPgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEvectorlEintcOallocatorlEintgRsPgRcOallocatorlEvectorlEintcOallocatorlEintgRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_IdealStation;
extern G__linked_taginfo G__eventDictLN_vectorlEARA_stationcOallocatorlEARA_stationgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEARA_stationcOallocatorlEARA_stationgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlEInstalledStationcOallocatorlEInstalledStationgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEInstalledStationcOallocatorlEInstalledStationgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlEIdealStationcOallocatorlEIdealStationgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEIdealStationcOallocatorlEIdealStationgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__eventDictLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__eventDictLN_TGraph;
extern G__linked_taginfo G__eventDictLN_TRandom3;
extern G__linked_taginfo G__eventDictLN_Spectra;
extern G__linked_taginfo G__eventDictLN_Primaries;
extern G__linked_taginfo G__eventDictLN_Secondaries;
extern G__linked_taginfo G__eventDictLN_EarthModel;
extern G__linked_taginfo G__eventDictLN_Interaction;
extern G__linked_taginfo G__eventDictLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__eventDictLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__eventDictLN_TH2D;
extern G__linked_taginfo G__eventDictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__eventDictLN_TF2;
extern G__linked_taginfo G__eventDictLN_pairlEunsignedsPintcOintgR;
extern G__linked_taginfo G__eventDictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_TCanvas;
extern G__linked_taginfo G__eventDictLN_TF3;
extern G__linked_taginfo G__eventDictLN_Signal;
extern G__linked_taginfo G__eventDictLN_RaySolver;
extern G__linked_taginfo G__eventDictLN_Y;
extern G__linked_taginfo G__eventDictLN_Event;
extern G__linked_taginfo G__eventDictLN_Surface_antenna_r;
extern G__linked_taginfo G__eventDictLN_Antenna_r;
extern G__linked_taginfo G__eventDictLN_vectorlEPositioncOallocatorlEPositiongRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEPositioncOallocatorlEPositiongRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_String_r;
extern G__linked_taginfo G__eventDictLN_vectorlEAntenna_rcOallocatorlEAntenna_rgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEAntenna_rcOallocatorlEAntenna_rgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_Station_r;
extern G__linked_taginfo G__eventDictLN_vectorlEString_rcOallocatorlEString_rgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEString_rcOallocatorlEString_rgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlESurface_antenna_rcOallocatorlESurface_antenna_rgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlESurface_antenna_rcOallocatorlESurface_antenna_rgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlETGraphmUcOallocatorlETGraphmUgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlETGraphmUcOallocatorlETGraphmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlEStation_rcOallocatorlEStation_rgRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEStation_rcOallocatorlEStation_rgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__eventDictLN_vectorlEInteractioncOallocatorlEInteractiongRsPgR;
extern G__linked_taginfo G__eventDictLN_reverse_iteratorlEvectorlEInteractioncOallocatorlEInteractiongRsPgRcLcLiteratorgR;

/* STUB derived class for protected member access */
