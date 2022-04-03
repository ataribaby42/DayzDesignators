void SpawnRandomDesignators()
{
	float chance = 0.5;
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Vybor Fields", "3639.000000 319.420990 9652.299805", 500, 150, Math.RandomIntInclusive(1, 2));
	}
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Old Fields", "6569.830078 392.261993 8603.440430", 500, 150, Math.RandomIntInclusive(1, 2));
	}
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Shachovka Forrest", "9089.700195 315.509003 7558.310059", 500, 150, Math.RandomIntInclusive(1, 2));
	}
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Msta Forrest", "11346.000000 154.634003 6198.950195", 500, 150, Math.RandomIntInclusive(1, 2));
	}
}

void SpawnVeresnikDesignators()
{
	int dice = Math.RandomIntInclusive(1, 2);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"4507.129883 317.524994 8292.820313",
			"4548.640137 319.440002 8347.700195",
			"4457.129883 315.381012 8276.610352",
			"4546.459961 319.705994 8281.910156",
			"4547.680176 318.511993 8309.370117",
			"4496.410156 318.277008 8317.440430",
		};
	}
	
	if (dice == 2)
	{
		designatorPositions = {
			"4504.589844 317.524994 8280.660156",
			"4548.640137 319.440002 8347.700195",
			"4459.640137 315.381012 8299.759766",
			"4565.270020 319.705994 8269.790039",
			"4533.029785 318.511993 8303.629883",
			"4514.350098 318.277008 8319.469727"
		};
	}
	
	if (dice == 3)
	{	
		designatorPositions = {
			"4537.169922 319.378998 8351.879883",
			"4561.970215 319.438995 8366.429688",
			"4545.910156 319.019012 8321.040039",
			"4579.290039 320.239990 8327.959961",
			"4552.290039 319.186005 8257.389648",
			"4584.350098 320.200989 8283.790039",
			"4515.370117 317.760010 8284.469727",
			"4494.279785 316.321991 8302.940430",
			"4439.390137 315.092987 8273.490234",
			"4484.100098 315.859985 8271.019531",
			"4459.700195 315.393005 8304.719727"
		};
	}

	if (dice == 4)
	{
		designatorPositions = {
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
	}

	if (dice == 5)
	{
		designatorPositions = {
			"4472.950195 315.657013 8257.030273",
			"4463.169922 315.588013 8249.969727",
			"4449.919922 315.251007 8271.790039",
			"4424.020020 314.915009 8275.519531",
			"4467.990234 315.481995 8269.059570",
			"4452.629883 314.983002 8313.750000",
			"4436.339844 314.526001 8329.839844",
			"4481.270020 314.901001 8370.490234",
			"4469.839844 315.598999 8303.290039",
			"4501.419922 317.393005 8278.950195",
			"4510.470215 317.161011 8254.540039",
			"4530.919922 317.994995 8282.389648",
			"4524.879883 318.446014 8303.320313",
			"4595.939941 320.235992 8231.650391",
			"4568.799805 320.007996 8257.950195",
			"4559.870117 319.200989 8297.839844",
			"4591.049805 320.191986 8193.809570",
			"4566.029785 319.490997 8346.959961",
			"4543.040039 319.087006 8327.080078",
			"4595.959961 320.941010 8347.910156",
			"4579.540039 318.750000 8412.860352",
			"4516.689941 317.817993 8349.019531",
			"4646.839844 323.045013 8221.719727",
			"4699.950195 325.803009 8299.599609",
			"4532.490234 316.954010 8196.200195"
		};
	}
	
	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Veresnik Military Base", "4537.540039 318.433014 8297.910156", 600, designatorPositions);
}

void SpawnBasnaDesignators()
{
	int dice = Math.RandomIntInclusive(1, 2);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"4028.820068 377.441010 11717.400391",
			"4025.750000 377.602997 11762.400391",
			"3997.199951 377.230988 11794.599609",
			"4014.229980 377.084015 11855.000000",
			"4054.530029 371.289001 11649.200195",
			"4087.510010 380.971008 11723.099609",
			"4071.389893 384.390991 11827.500000"
		};
	}
	
	if (dice == 2)
	{
		designatorPositions = {
			"4003.330078 372.079987 11705.700195",
			"4002.580078 377.230988 11776.599609",
			"4017.850098 377.187012 11819.900391",
			"4009.669922 377.013000 11874.099609",
			"4061.020020 371.289001 11615.799805",
			"4150.459961 372.638000 11625.099609",
			"4093.639893 380.980011 11741.400391"
		};
	}
	
	if (dice == 3)
	{	
		designatorPositions = {
			"4161.589844 373.311005 11638.099609",
			"4128.669922 372.213989 11617.500000",
			"4025.600098 371.300995 11640.599609",
			"4048.120117 371.183990 11656.099609",
			"4115.419922 376.980988 11676.900391",
			"4151.479980 385.121002 11748.799805",
			"4096.240234 381.010986 11728.400391",
			"4043.610107 377.441010 11695.200195",
			"4026.060059 377.454987 11742.700195",
			"4003.360107 371.209991 11624.000000",
			"3960.389893 370.654999 11731.500000",
			"4027.610107 377.231995 11795.200195",
			"3986.189941 377.226013 11808.299805",
			"3995.429932 377.230988 11771.400391",
			"4016.639893 377.181000 11823.400391",
			"4023.080078 377.058990 11853.500000",
			"4019.340088 377.011993 11888.700195",
			"3988.689941 377.114990 11851.000000"

		};
	}

	if (dice == 4)
	{
		designatorPositions = {
			"4150.899902 372.766998 11640.200195",
			"4138.379883 373.186005 11611.799805",
			"4074.050049 371.458008 11637.400391",
			"4021.260010 371.300995 11635.000000",
			"4048.250000 371.123993 11660.500000",
			"4025.580078 376.954010 11699.799805",
			"4033.189941 377.447998 11732.000000",
			"4121.950195 381.050995 11703.700195",
			"4157.339844 385.134003 11752.299805",
			"4084.570068 380.959015 11723.500000",
			"4101.759766 385.136993 11788.200195",
			"4068.020020 380.893005 11781.000000",
			"4063.560059 384.027008 11819.200195",
			"4032.580078 377.278015 11791.700195",
			"3998.510010 377.230988 11802.500000",
			"3993.709961 377.304993 11762.900391",
			"3970.850098 370.709991 11717.500000",
			"3967.010010 377.187988 11789.500000",
			"4009.729980 377.182007 11827.099609",
			"4034.639893 377.006012 11855.599609",
			"4020.889893 377.007996 11887.799805",
			"3977.659912 376.389008 11861.700195",
			"4071.010010 379.184998 11867.500000"
		};
	}

	if (dice == 5)
	{
		designatorPositions = {
			"4150.899902 372.766998 11640.200195",
			"4138.379883 373.186005 11611.799805",
			"4074.050049 371.458008 11637.400391",
			"4021.260010 371.300995 11635.000000",
			"4048.250000 371.123993 11660.500000",
			"4042.409912 377.441010 11695.000000",
			"4039.610107 377.441986 11736.200195",
			"4121.950195 381.050995 11703.700195",
			"4157.339844 385.134003 11752.299805",
			"4084.570068 380.959015 11723.500000",
			"4101.759766 385.136993 11788.200195",
			"4068.020020 380.893005 11781.000000",
			"4063.560059 384.027008 11819.200195",
			"4028.120117 377.248993 11777.400391",
			"3996.860107 377.230988 11786.000000",
			"3993.709961 377.304993 11762.900391",
			"3970.850098 370.709991 11717.500000",
			"3967.010010 377.187988 11789.500000",
			"4002.850098 377.210999 11817.500000",
			"4027.090088 377.050995 11852.299805",
			"4020.889893 377.007996 11887.799805",
			"3977.659912 376.389008 11861.700195",
			"4071.010010 379.184998 11867.500000",
			"4087.340088 370.213989 11546.400391",
			"4022.610107 369.795990 11588.200195",
			"3988.439941 368.700989 11618.599609",
			"3985.530029 370.459015 11649.200195",
			"3927.780029 369.872986 11718.599609",
			"3944.060059 371.356995 11772.400391",
			"3938.649902 373.320007 11830.099609",
			"3961.959961 368.979004 11910.700195",
			"4019.270020 365.483002 11920.700195",
			"4066.429932 357.554993 11926.299805",
			"4108.310059 374.412994 11878.799805",
			"4170.169922 391.785004 11797.799805",
			"4199.470215 390.721008 11733.700195",
			"4184.879883 382.574005 11688.400391",
			"4141.390137 374.518005 11590.599609",
			"4109.689941 373.250000 11566.000000"
		};
	}
	
	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Basna Military Base", "4039.590088 377.136993 11700.700195", 600, designatorPositions);
}

void SpawnTikhiyjzalivDesignators()
{
	int dice = Math.RandomIntInclusive(1, 2);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"748.854980 7.624980 1869.630005"
		};
	}
	
	if (dice == 2)
	{
		designatorPositions = {
			"754.119019 7.624980 1893.800049"
		};
	}
	
	if (dice == 3)
	{
		designatorPositions = {
			"747.468994 7.624980 1865.589966",
			"772.565002 7.583470 1895.130005"
		};
	}
	
	if (dice == 4)
	{
		designatorPositions = {
			"758.911011 7.624980 1875.959961",
			"754.234985 7.583470 1894.400024",
			"753.739014 7.606750 1856.510010"
		};
	}
	
	if (dice == 5)
	{
		designatorPositions = {
			"761.807007 7.624980 1872.170044",
			"742.992981 7.583470 1884.839966",
			"737.494995 7.606750 1867.839966",
			"757.562012 7.648170 1909.349976",
			"751.395996 7.674030 1840.050049"
		};
	}
	
	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Tikhiyjzaliv Kamenka Military Base", "759.947021 7.638510 1882.599976", 500, designatorPositions);
}

void SpawnRandomMilitaryDesignators()
{
	float chance = 0.5;
	
	// Pavlovo Military Base
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions1 = {
			"2173.729980 93.336700 3379.800049",
			"2081.189941 111.096001 3506.550049",
			"1938.119995 122.181000 3393.169922"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Pavlovo Military Base", "2173.729980 93.336700 3379.800049", 700, designatorPositions1);
	}
	
	// Sosnovy Military Checkpoint
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions2 = {
			"2703.149902 365.195007 6753.819824"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Sosnovy Military Checkpoint", "2703.149902 365.195007 6753.819824", 500, designatorPositions2);
	}
	
	// Myskhino Military Base
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions3 = {
			"1164.300049 186.841003 7223.859863",
			"1156.640015 186.841003 7251.770020"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Myskhino Military Base", "1164.300049 186.841003 7223.859863", 500, designatorPositions3);
	}
	
	// Tri Kresta Military Checkpoint
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions4 = {
			"343.112000 296.423004 9404.740234",
			"337.203003 296.621002 9326.849609"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Tri Kresta Military Checkpoint", "343.112000 296.423004 9404.740234", 500, designatorPositions4);
	}
	
	// Grozovy Military
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions5 = {
			"3626.350098 361.069000 14912.299805"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Grozovy Military", "3626.350098 361.069000 14912.299805", 500, designatorPositions5);
	}
	
	// Zaprudnoye Military
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions6 = {
			"4945.169922 172.850998 13003.400391",
			"4967.220215 171.796997 12959.500000"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Zaprudnoye Military", "4945.169922 172.850998 13003.400391", 500, designatorPositions6);
	}
	
	// Kamensk Military
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions7 = {
			"7072.279785 353.584991 14546.599609"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Kamensk Military", "7072.279785 353.584991 14546.599609", 500, designatorPositions7);
	}
	
	// Severograd Military Checkpoint
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions8 = {
			"7082.830078 132.403000 12738.400391",
			"7106.399902 132.020996 12708.500000"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Severograd Military Checkpoint", "7082.830078 132.403000 12738.400391", 500, designatorPositions8);
	}
	
	// Arsenovo Military
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions9 = {
			"8523.559570 204.660995 13965.900391"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Arsenovo Military", "8523.559570 204.660995 13965.900391", 500, designatorPositions9);
	}
	
	// Ostry Military
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions10 = {
			"10933.299805 221.442001 13392.599609",
			"10972.099609 221.585999 13406.299805"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Ostry Military", "10933.299805 221.442001 13392.599609", 500, designatorPositions10);
	}
	
	// Stary Sobor Military
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions11 = {
			"6305.220215 306.707001 7849.890137",
			"6335.899902 306.487000 7774.470215"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Stary Sobor Military", "6305.220215 306.707001 7849.890137", 500, designatorPositions11);
	}
	
	// Staroye Military
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions12 = {
			"10452.599609 284.532990 5957.379883"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Staroye Military", "10452.599609 284.532990 5957.379883", 500, designatorPositions12);
	}
	
	// Gorka Military
	if (Math.RandomFloat01() < chance)
	{
		array<string> designatorPositions13 = {
			"10446.000000 180.128998 9153.419922"
		};
		
		Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Gorka Military", "10446.000000 180.128998 9153.419922", 500, designatorPositions13);
	}
	
	// NWAF runway
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("NWAF runway", "4492.620117 343.569000 10341.099609", 500, 80, Math.RandomIntInclusive(1, 4));
	}
}

void main()
{
	/*
	
		Your original main() content here
	
	*/
	
	float chance = 0.5;
	
	Get_ab_DesignatorManager().SetLessIntrusiveAmbientSounds(true); 
	
	if (Math.RandomFloat01() < chance)
	{
		SpawnVeresnikDesignators();
	}
	
	if (Math.RandomFloat01() < chance)
	{
		SpawnBasnaDesignators();
	}
	
	if (Math.RandomFloat01() < chance)
	{
		SpawnTikhiyjzalivDesignators();
	}
	
	SpawnRandomDesignators();
	SpawnRandomMilitaryDesignators();
};