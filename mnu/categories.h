/* This file was automatically generated by categories.php */

/* Main Categories */
char *MainCategories[12] = {
	"AudioVideo",
	"Audio",
	"Video",
	"Development",
	"Education",
	"Game",
	"Graphics",
	"Network",
	"Office",
	"Settings",
	"System",
	"Utility",
};
Menu *MainCategoryLists[12];
#define MAIN_CATEGORY_COUNT 12

/* Additional Categories */
char *AdditionalCategories[120] = {
	"Building", /* With Development */
	"Debugger", /* With Development */
	"IDE", /* With Development */
	"GUIDesigner", /* With Development */
	"Profiling", /* With Development */
	"RevisionControl", /* With Development */
	"Translation", /* With Development */
	"Calendar", /* With Office */
	"ContactManagement", /* With Office */
	"Database", /* With Office or Development or AudioVideo */
	"Dictionary", /* With Office;TextTools */
	"Chart", /* With Office */
	"Email", /* With Office;Network */
	"Finance", /* With Office */
	"FlowChart", /* With Office */
	"PDA", /* With Office */
	"ProjectManagement", /* With Office;Development */
	"Presentation", /* With Office */
	"Spreadsheet", /* With Office */
	"WordProcessor", /* With Office */
	"2DGraphics", /* With Graphics */
	"VectorGraphics", /* With Graphics;2DGraphics */
	"RasterGraphics", /* With Graphics;2DGraphics */
	"3DGraphics", /* With Graphics */
	"Scanning", /* With Graphics */
	"OCR", /* With Graphics;Scanning */
	"Photography", /* With Graphics or Office */
	"Publishing", /* With Graphics or Office */
	"Viewer", /* With Graphics or Office */
	"TextTools", /* With Utility */
	"DesktopSettings", /* With Settings */
	"HardwareSettings", /* With Settings */
	"Printing", /* With HardwareSettings;Settings */
	"PackageManager", /* With Settings */
	"Dialup", /* With Network */
	"InstantMessaging", /* With Network */
	"Chat", /* With Network */
	"IRCClient", /* With Network */
	"FileTransfer", /* With Network */
	"HamRadio", /* With Network or Audio */
	"News", /* With Network */
	"P2P", /* With Network */
	"RemoteAccess", /* With Network */
	"Telephony", /* With Network */
	"TelephonyTools", /* With Utility */
	"VideoConference", /* With Network */
	"WebBrowser", /* With Network */
	"WebDevelopment", /* With Network or Development */
	"Midi", /* With AudioVideo;Audio */
	"Mixer", /* With AudioVideo;Audio */
	"Sequencer", /* With AudioVideo;Audio */
	"Tuner", /* With AudioVideo;Audio */
	"TV", /* With AudioVideo;Video */
	"AudioVideoEditing", /* With Audio or Video or AudioVideo */
	"Player", /* With Audio or Video or AudioVideo */
	"Recorder", /* With Audio or Video or AudioVideo */
	"DiscBurning", /* With AudioVideo */
	"ActionGame", /* With Game */
	"AdventureGame", /* With Game */
	"ArcadeGame", /* With Game */
	"BoardGame", /* With Game */
	"BlocksGame", /* With Game */
	"CardGame", /* With Game */
	"KidsGame", /* With Game */
	"LogicGame", /* With Game */
	"RolePlaying", /* With Game */
	"Simulation", /* With Game */
	"SportsGame", /* With Game */
	"StrategyGame", /* With Game */
	"Art", /* With Education */
	"Construction", /* With Education */
	"Music", /* With AudioVideo;Education */
	"Languages", /* With Education */
	"Science", /* With Education */
	"ArtificialIntelligence", /* With Education;Science */
	"Astronomy", /* With Education;Science */
	"Biology", /* With Education;Science */
	"Chemistry", /* With Education;Science */
	"ComputerScience", /* With Education;Science */
	"DataVisualization", /* With Education;Science */
	"Economy", /* With Education */
	"Electricity", /* With Education;Science */
	"Geography", /* With Education */
	"Geology", /* With Education;Science */
	"Geoscience", /* With Education;Science */
	"History", /* With Education */
	"ImageProcessing", /* With Education;Science */
	"Literature", /* With Education */
	"Math", /* With Education;Science */
	"NumericalAnalysis", /* With Education;Science;Math */
	"MedicalSoftware", /* With Education;Science */
	"Physics", /* With Education;Science */
	"Robotics", /* With Education;Science */
	"Sports", /* With Education */
	"ParallelComputing", /* With Education;Science;ComputerScience */
	"Amusement", /* With   */
	"Archiving", /* With Utility */
	"Compression", /* With Utility;Archiving */
	"Electronics", /* With   */
	"Emulator", /* With System or Game */
	"Engineering", /* With   */
	"FileTools", /* With Utility or System */
	"FileManager", /* With System;FileTools */
	"TerminalEmulator", /* With System */
	"Filesystem", /* With System */
	"Monitor", /* With System */
	"Security", /* With Settings or System */
	"Accessibility", /* With Settings or Utility */
	"Calculator", /* With Utility */
	"Clock", /* With Utility */
	"TextEditor", /* With Utility */
	"Documentation", /* With   */
	"Core", /* With   */
	"KDE", /* With QT */
	"GNOME", /* With GTK */
	"GTK", /* With   */
	"Qt", /* With   */
	"Motif", /* With   */
	"Java", /* With   */
	"ConsoleOnly", /* With   */
};
Menu *AdditionalCategoryLists[120];
#define ADDITIONAL_CATEGORY_COUNT 120

/* Main->Additional items  */
void add_additional_categories() {
	MenuItem *new_item;

	if(AdditionalCategoryLists[0] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Building>";
		new_item->command = "1";
		add_to_cat("Development",new_item,FALSE);
	}

	if(AdditionalCategoryLists[1] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Debugger>";
		new_item->command = "2";
		add_to_cat("Development",new_item,FALSE);
	}

	if(AdditionalCategoryLists[2] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<I D E>";
		new_item->command = "3";
		add_to_cat("Development",new_item,FALSE);
	}

	if(AdditionalCategoryLists[3] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<G U I Designer>";
		new_item->command = "4";
		add_to_cat("Development",new_item,FALSE);
	}

	if(AdditionalCategoryLists[4] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Profiling>";
		new_item->command = "5";
		add_to_cat("Development",new_item,FALSE);
	}

	if(AdditionalCategoryLists[5] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Revision Control>";
		new_item->command = "6";
		add_to_cat("Development",new_item,FALSE);
	}

	if(AdditionalCategoryLists[6] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Translation>";
		new_item->command = "7";
		add_to_cat("Development",new_item,FALSE);
	}

	if(AdditionalCategoryLists[7] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Calendar>";
		new_item->command = "8";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[8] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Contact Management>";
		new_item->command = "9";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[10] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Dictionary>";
		new_item->command = "11";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[11] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Chart>";
		new_item->command = "12";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[12] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Email>";
		new_item->command = "13";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[12] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Email>";
		new_item->command = "13";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[13] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Finance>";
		new_item->command = "14";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[14] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Flow Chart>";
		new_item->command = "15";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[15] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<P D A>";
		new_item->command = "16";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[16] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Project Management>";
		new_item->command = "17";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[16] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Project Management>";
		new_item->command = "17";
		add_to_cat("Development",new_item,FALSE);
	}

	if(AdditionalCategoryLists[17] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Presentation>";
		new_item->command = "18";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[18] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Spreadsheet>";
		new_item->command = "19";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[19] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Word Processor>";
		new_item->command = "20";
		add_to_cat("Office",new_item,FALSE);
	}

	if(AdditionalCategoryLists[20] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "< D Graphics>";
		new_item->command = "21";
		add_to_cat("Graphics",new_item,FALSE);
	}

	if(AdditionalCategoryLists[21] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Vector Graphics>";
		new_item->command = "22";
		add_to_cat("Graphics",new_item,FALSE);
	}

	if(AdditionalCategoryLists[22] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Raster Graphics>";
		new_item->command = "23";
		add_to_cat("Graphics",new_item,FALSE);
	}

	if(AdditionalCategoryLists[23] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "< D Graphics>";
		new_item->command = "24";
		add_to_cat("Graphics",new_item,FALSE);
	}

	if(AdditionalCategoryLists[24] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Scanning>";
		new_item->command = "25";
		add_to_cat("Graphics",new_item,FALSE);
	}

	if(AdditionalCategoryLists[25] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<O C R>";
		new_item->command = "26";
		add_to_cat("Graphics",new_item,FALSE);
	}

	if(AdditionalCategoryLists[29] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Text Tools>";
		new_item->command = "30";
		add_to_cat("Utility",new_item,FALSE);
	}

	if(AdditionalCategoryLists[30] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Desktop Settings>";
		new_item->command = "31";
		add_to_cat("Settings",new_item,FALSE);
	}

	if(AdditionalCategoryLists[31] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Hardware Settings>";
		new_item->command = "32";
		add_to_cat("Settings",new_item,FALSE);
	}

	if(AdditionalCategoryLists[32] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Printing>";
		new_item->command = "33";
		add_to_cat("Settings",new_item,FALSE);
	}

	if(AdditionalCategoryLists[33] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Package Manager>";
		new_item->command = "34";
		add_to_cat("Settings",new_item,FALSE);
	}

	if(AdditionalCategoryLists[34] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Dialup>";
		new_item->command = "35";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[35] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Instant Messaging>";
		new_item->command = "36";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[36] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Chat>";
		new_item->command = "37";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[37] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<I R C Client>";
		new_item->command = "38";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[38] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<File Transfer>";
		new_item->command = "39";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[40] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<News>";
		new_item->command = "41";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[41] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<P2 P>";
		new_item->command = "42";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[42] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Remote Access>";
		new_item->command = "43";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[43] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Telephony>";
		new_item->command = "44";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[44] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Telephony Tools>";
		new_item->command = "45";
		add_to_cat("Utility",new_item,FALSE);
	}

	if(AdditionalCategoryLists[45] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Video Conference>";
		new_item->command = "46";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[46] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Web Browser>";
		new_item->command = "47";
		add_to_cat("Network",new_item,FALSE);
	}

	if(AdditionalCategoryLists[48] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Midi>";
		new_item->command = "49";
		add_to_cat("Audio",new_item,FALSE);
	}

	if(AdditionalCategoryLists[49] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Mixer>";
		new_item->command = "50";
		add_to_cat("Audio",new_item,FALSE);
	}

	if(AdditionalCategoryLists[50] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Sequencer>";
		new_item->command = "51";
		add_to_cat("Audio",new_item,FALSE);
	}

	if(AdditionalCategoryLists[51] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Tuner>";
		new_item->command = "52";
		add_to_cat("Audio",new_item,FALSE);
	}

	if(AdditionalCategoryLists[52] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<T V>";
		new_item->command = "53";
		add_to_cat("Video",new_item,FALSE);
	}

	if(AdditionalCategoryLists[57] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Action Game>";
		new_item->command = "58";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[58] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Adventure Game>";
		new_item->command = "59";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[59] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Arcade Game>";
		new_item->command = "60";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[60] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Board Game>";
		new_item->command = "61";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[61] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Blocks Game>";
		new_item->command = "62";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[62] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Card Game>";
		new_item->command = "63";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[63] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Kids Game>";
		new_item->command = "64";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[64] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Logic Game>";
		new_item->command = "65";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[65] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Role Playing>";
		new_item->command = "66";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[66] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Simulation>";
		new_item->command = "67";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[67] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Sports Game>";
		new_item->command = "68";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[68] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Strategy Game>";
		new_item->command = "69";
		add_to_cat("Game",new_item,FALSE);
	}

	if(AdditionalCategoryLists[69] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Art>";
		new_item->command = "70";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[70] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Construction>";
		new_item->command = "71";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[71] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Music>";
		new_item->command = "72";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[72] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Languages>";
		new_item->command = "73";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[73] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Science>";
		new_item->command = "74";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[74] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Artificial Intelligence>";
		new_item->command = "75";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[75] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Astronomy>";
		new_item->command = "76";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[76] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Biology>";
		new_item->command = "77";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[77] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Chemistry>";
		new_item->command = "78";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[78] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Computer Science>";
		new_item->command = "79";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[79] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Data Visualization>";
		new_item->command = "80";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[80] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Economy>";
		new_item->command = "81";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[81] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Electricity>";
		new_item->command = "82";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[82] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Geography>";
		new_item->command = "83";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[83] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Geology>";
		new_item->command = "84";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[84] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Geoscience>";
		new_item->command = "85";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[85] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<History>";
		new_item->command = "86";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[86] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Image Processing>";
		new_item->command = "87";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[87] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Literature>";
		new_item->command = "88";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[88] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Math>";
		new_item->command = "89";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[89] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Numerical Analysis>";
		new_item->command = "90";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[90] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Medical Software>";
		new_item->command = "91";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[91] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Physics>";
		new_item->command = "92";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[92] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Robotics>";
		new_item->command = "93";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[93] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Sports>";
		new_item->command = "94";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[94] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Parallel Computing>";
		new_item->command = "95";
		add_to_cat("Education",new_item,FALSE);
	}

	if(AdditionalCategoryLists[96] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Archiving>";
		new_item->command = "97";
		add_to_cat("Utility",new_item,FALSE);
	}

	if(AdditionalCategoryLists[97] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Compression>";
		new_item->command = "98";
		add_to_cat("Utility",new_item,FALSE);
	}

	if(AdditionalCategoryLists[102] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<File Manager>";
		new_item->command = "103";
		add_to_cat("System",new_item,FALSE);
	}

	if(AdditionalCategoryLists[103] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Terminal Emulator>";
		new_item->command = "104";
		add_to_cat("System",new_item,FALSE);
	}

	if(AdditionalCategoryLists[104] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Filesystem>";
		new_item->command = "105";
		add_to_cat("System",new_item,FALSE);
	}

	if(AdditionalCategoryLists[105] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Monitor>";
		new_item->command = "106";
		add_to_cat("System",new_item,FALSE);
	}

	if(AdditionalCategoryLists[108] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Calculator>";
		new_item->command = "109";
		add_to_cat("Utility",new_item,FALSE);
	}

	if(AdditionalCategoryLists[109] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Clock>";
		new_item->command = "110";
		add_to_cat("Utility",new_item,FALSE);
	}

	if(AdditionalCategoryLists[110] != NULL) {
		DYNAMIC_STRUCT(new_item);
		new_item->title = "<Text Editor>";
		new_item->command = "111";
		add_to_cat("Utility",new_item,FALSE);
	}

}
