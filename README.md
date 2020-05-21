# DayzDesignators
<p>DayZ Standalone Designators mod inspired by meshcarver's work on ARMA 3 Nova Zona mod.</p>
<p>https://forums.bohemia.net/forums/topic/134345-large-stalker-inspired-island-nova-zona/</p>
<p>https://www.youtube.com/watch?v=nBZ12QKk2aE</p>
<p>Designators code is written by scratch by ataribaby. All models are created from scratch by ataribaby. All sounds and textures are from free sources. Respective authors are noted in credits.</p>

## RULES OF ENGAGEMENT WHILST IN A DESIGNATOR INFESTED AREA
<ul>
  <li>All staff entering this site must be authorised</li>
  <li>All staff should have Designator awareness training</li>
  <li>Obey all posted signs and do not deviate from your original plan</li>
  <li>Assume all Designators are active</li>
  <li>Assume all Designators ignoring zombies and are capabe to materialize into other objects</li>
  <li>Assume all Designators teleporting at once at regular intervals</li>
  <li>Maintain minimum distance of 25 meters from each Designator</li>
  <li>Do not at any point stop moving, make a noise or discharge your weapon</li>
  <li>Always use a buddy system and abort in the event of any visual or aural disturbance</li>
  <li>Never turn your back on a Designator- maintain visual contact at ALL TIMES</li>
</ul>

### INSTALLATION AND SETUP
This is both server and client mod. Client needs just subscribe to mod or adds it manually. 

At server side open your mission Init.c and find void main(). Put following code at the end of main function.

```
Get_ab_DesignatorManager().CreateRandomDesignatorController("Veresnik Fields", "4839.479980 330.536011 8454.200195", 500, 50, 20);

array<string> designatorPositions = {
		"4464.140137 315.640991 8250.669922",
		"4456.279785 315.337006 8264.139648",
		"4424.439941 314.873993 8269.299805",
		"4472.290039 315.575012 8286.809570",
		"4456.529785 315.414001 8315.379883",
		"4491.459961 317.023987 8273.509766",
		"4486.479980 316.333008 8326.230469",
		"4504.129883 317.686005 8297.540039",
		"4532.600098 318.393005 8298.469727",
		"4547.910156 319.480988 8345.040039",
		"4566.259766 319.893005 8382.780273",
		"4574.899902 319.507996 8330.860352",
		"4572.330078 319.339996 8351.759766",
		"4545.560059 319.109009 8316.230469",
		"4531.149902 317.933990 8278.950195",
		"4561.479980 319.721008 8249.519531",
		"4591.509766 320.345001 8242.500000",
		"4575.390137 319.764008 8292.790039",
		"4571.290039 319.854004 8221.280273",
		"4553.089844 319.207001 8287.849609",
		"4471.229980 315.656006 8301.559570"
};
  
Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Veresnik Military Base", "4537.540039 318.433014 8297.910156", 500, designatorPositions);
```

### API
**_Get_ab_DesignatorManager().CreateRandomDesignatorController(string name, vector position, float resetRadius, float radius, int designatorCount)_**

Creates circular Designator infested area with size of radius at position and randomly fills it with designatorCount Designators. Area resets everytime no players are inside resetRadius. You can name area with name parameter to see it in logs.

**_Get_ab_DesignatorManager().CreatePredefinedDesignatorController(string name, vector position, float resetRadius, ref array\<string\> designatorPositions)_**
  
Creates predefined Designator infested area with logical center position and fills it with designatorCount Designators from designatorPositions string array that contains Designator coords in vector format.  Area resets everytime no players are inside resetRadius. You can name area with name parameter to see it in logs.

### CREDITS
<ul>
  <li>Code and models by ataribaby.</li>
  <li>meshcarver for original idea.</li>
  <li>HunterCZ for great code, config, sound and modeling help.</li>
  <li>[Lusk]-lynge for great model importing help and texture tips.</li>
  <li>DayZ Modders Discord for initial help and bearings.</li>  
  <li>ZeroGaming and w3cko for testing https://www.twitch.tv/zerogaming https://www.twitch.tv/wecko</li>
  <li>Rusty Metal texture https://texturify.com/stock-photo/rusty-metal-10383.html</li>
  <li>Sounds:
    <p>https://freesound.org/people/Halph-Price/sounds/15959/</p>
    <p>https://freesound.org/people/suonho/sounds/3176/</p>
    <p>https://freesound.org/people/Tomlija/sounds/103333/</p>
    <p>https://freesound.org/people/FreqMan/sounds/32683/</p>
    <p>https://freesound.org/people/GowlerMusic/sounds/264861/</p>
    <p>https://freesound.org/people/acclivity/sounds/19220/</p>
    <p>https://freesound.org/people/Glitchedtones/sounds/375948/</p>
    <p>https://freesound.org/people/DExUS5/sounds/361686/</p>
    <p>https://freesound.org/people/klankbeeld/sounds/249907/</p>
    <p>https://freesound.org/people/DRFX/sounds/350763/</p>
    <p>https://freesound.org/people/klankbeeld/sounds/130889/</p>
    <p>https://freesound.org/people/jmichelsen/sounds/403919/</p>
    <p>https://freesound.org/people/Voices_Of_Marz/sounds/444444/</p>
    <p>https://freesound.org/people/sandufi/sounds/350858/</p>
  </li>
</ul>

### LICENSE
Mod is open source and you are free to modify, repack and publish. If you fix or enhance it please consider push it to me for intergration into official version.

Steam Workshop link: https://steamcommunity.com/sharedfiles/filedetails/?id=2097380865
