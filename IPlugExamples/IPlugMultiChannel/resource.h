#define PLUG_MFR "AcmeInc"
#define PLUG_NAME "IPlugMultiChannel"

#define PLUG_CLASS_NAME IPlugMultiChannel

#define BUNDLE_MFR "AcmeInc"
#define BUNDLE_NAME "IPlugMultiChannel"

#define PLUG_ENTRY IPlugMultiChannel_Entry
#define PLUG_VIEW_ENTRY IPlugMultiChannel_ViewEntry

#define PLUG_ENTRY_STR "IPlugMultiChannel_Entry"
#define PLUG_VIEW_ENTRY_STR "IPlugMultiChannel_ViewEntry"

#define VIEW_CLASS IPlugMultiChannel_View
#define VIEW_CLASS_STR "IPlugMultiChannel_View"

// Format        0xMAJR.MN.BG - in HEX! so version 10.1.5 would be 0x000A0105
#define PLUG_VER 0x00010000
#define VST3_VER_STR "1.0.0"

// http://service.steinberg.de/databases/plugin.nsf/plugIn?openForm
// 4 chars, single quotes. At least one capital letter
#define PLUG_UNIQUE_ID 'Ipmc'
// make sure this is not the same as BUNDLE_MFR
#define PLUG_MFR_ID 'Acme'

// ProTools stuff
#define PLUG_MFR_DIGI "AcmeInc\nAcmeInc\nAcme"
#define PLUG_NAME_DIGI "IPlugMultiChannel\nIPEF"
#define EFFECT_TYPE_DIGI "SoundField"

/* "None", "EQ", "Dynamics", "PitchShift", "Reverb", "Delay", "Modulation", 
"Harmonic" "NoiseReduction" "Dither" "SoundField" "Effect" 
instrument determined by PLUG _IS _INST
*/

#define PLUG_CHANNEL_IO "1-1 2-2 3-3 4-4"

#define PLUG_LATENCY 0
#define PLUG_IS_INST 0

// if this is 0 RTAS can't get tempo info
#define PLUG_DOES_MIDI 0

#define PLUG_DOES_STATE_CHUNKS 0

// Unique IDs for each image resource.
//#define KNOB_ID 101

// Image resource locations for this plug.
//#define KNOB_FN "resources/img/knob.png"

// GUI default dimensions
#define GUI_WIDTH 300
#define GUI_HEIGHT 300

// on MSVC, you must define SA_API in the resource editor preprocessor macros as well as the c++ ones
#if defined(SA_API) && !defined(OS_IOS)
#include "app_wrapper/app_resource.h"
#endif

// vst3 stuff
#define MFR_URL "www.olilarkin.co.uk"
#define MFR_EMAIL "spam@me.com"
#define EFFECT_TYPE_VST3 "Fx|Spatial"

/* "Fx|Analyzer"", "Fx|Delay", "Fx|Distortion", "Fx|Dynamics", "Fx|EQ", "Fx|Filter",
"Fx", "Fx|Instrument", "Fx|InstrumentExternal", "Fx|Spatial", "Fx|Generator",
"Fx|Mastering", "Fx|Modulation", "Fx|PitchShift", "Fx|Restoration", "Fx|Reverb",
"Fx|Surround", "Fx|Tools", "Instrument", "Instrument|Drum", "Instrument|Sampler",
"Instrument|Synth", "Instrument|Synth|Sampler", "Instrument|External", "Spatial",
"Spatial|Fx", "OnlyRT", "OnlyOfflineProcess", "Mono", "Stereo",
"Surround"
*/
