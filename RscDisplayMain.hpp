class RscControlsGroupNoScrollbars;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };
        class GroupMultiplayer: GroupSingleplayer {
			h = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";
            class Controls: Controls {
                class ServerBrowser;
                class JoinMainServer: ServerBrowser {
                    idc = -1;
                    text = "14th SOB Server";
                    tooltip = "Connect to 14th SOB Server";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['nae-ugs4.armahosts.com', 2312, '14th']";
				};	
            };
        };
    };
};