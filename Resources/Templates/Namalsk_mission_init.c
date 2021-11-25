void SpawnDesignators()
{
	Spawn_BK_L16_Designators();
	Spawn_BK_T12_Designators();
	Spawn_BK_M06_Designators();
	Spawn_BK_T07_Designators();
	Spawn_BK_L02_Designators();
	Spawn_BK_L01_Designators();
	Spawn_Athena_Research_Institute_Designators();
	Spawn_Sebjan_Uranium_Mine_Designators();
	Spawn_Refugee_Camp_Vorkuta_Designators();
	Spawn_Refugee_Camp_Sebjan_Designators();
	Spawn_Vorkuta_Town_Designators();
	Spawn_Jalovisko_Fields_Designators();
	Spawn_Sebjan_Valley_Designators();
	Spawn_Athena1_Designators();
}

void Spawn_BK_L16_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 11);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"5967.580078 17.901400 6665.549805",
			"5965.979980 14.370800 6694.859863",
			"5995.149902 21.210100 6596.140137",
			"5972.509766 20.542601 6635.209961",
			"5997.879883 18.336700 6654.450195"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"5990.580078 17.901400 6674.149902",
			"6017.100098 14.370800 6702.040039",
			"6008.180176 21.210100 6602.660156",
			"5989.689941 20.542601 6625.189941",
			"5961.959961 18.336700 6695.850098"
		};
	}
	
	if (dice == 3)
	{	
		designatorPositions = {
			"5956.959961 17.901400 6666.459961",
			"5976.250000 14.370800 6697.290039",
			"6013.390137 21.210100 6572.169922",
			"5991.919922 20.542601 6611.370117",
			"5985.319824 18.336700 6738.000000"
		};
	}

	if (dice == 4)
	{
		designatorPositions = {
			"5970.060059 17.901400 6742.720215",
			"5969.089844 14.370800 6664.500000",
			"5997.790039 21.210100 6602.810059"
		};
	}

	if (dice == 5)
	{
		designatorPositions = {
			"5985.350098 13.392200 6716.850098",
			"5996.509766 19.731400 6650.799805",
			"5967.490234 20.733101 6632.600098"
		};
	}
	
	if (dice == 6)
	{
		designatorPositions = {
			"5997.470215 21.236200 6588.520020",
			"5997.910156 21.219601 6592.020020",
			"5998.870117 21.201000 6595.859863"
		};
	}
	
	if (dice == 7)
	{
		designatorPositions = {
			"5961.330078 21.045900 6631.589844",
			"6017.410156 13.915200 6691.669922"
		};
	}
	
	if (dice == 8)
	{
		designatorPositions = {
			"6009.399902 20.806900 6574.520020",
			"5998.029785 20.788300 6624.759766"
		};
	}
	
	if (dice == 9)
	{
		designatorPositions = {
			"6017.089844 17.102900 6627.899902"
		};
	}
	
	if (dice == 10)
	{
		designatorPositions = {
			"5984.990234 21.222401 6585.750000"
		};
	}
	
	if (dice == 11)
	{
		designatorPositions = {
			"5965.870117 14.201600 6705.330078"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("BK-L16", "5967.580078 17.901400 6665.549805", 600, designatorPositions);
}

void Spawn_BK_T12_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 8);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"4079.620117 71.463097 9249.419922",
			"4083.510010 71.506203 9220.599609",
			"4056.280029 71.494102 9228.129883"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"4064.820068 71.489098 9243.290039",
			"4098.209961 71.473396 9252.509766",
			"4045.000000 71.405998 9214.650391"
		};
	}
	
	if (dice == 3)
	{	
		designatorPositions = {
			"4059.949951 69.841499 9261.629883",
			"4072.780029 71.521400 9211.059570",
			"4081.250000 71.489098 9234.879883"
		};
	}

	if (dice == 4)
	{
		designatorPositions = {
			"4079.139893 71.483498 9251.740234",
			"4082.889893 71.513496 9216.009766"
		};
	}

	if (dice == 5)
	{
		designatorPositions = {
			"4053.300049 71.502098 9216.889648",
			"4087.530029 71.489098 9254.290039"
		};
	}
	
	if (dice == 6)
	{
		designatorPositions = {
			"4083.219971 71.517097 9213.790039"
		};
	}
	
	if (dice == 7)
	{
		designatorPositions = {
			"4072.199951 71.489098 9234.700195"
		};
	}
	
	if (dice == 8)
	{
		designatorPositions = {
			"4056.280029 69.745102 9263.370117"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("BK-T12", "4079.620117 71.463097 9249.419922", 600, designatorPositions);
}

void Spawn_BK_M06_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 11);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"4841.379883 14.632100 10810.500000",
			"4807.990234 14.632100 10791.400391",
			"4867.850098 14.632100 10897.299805",
			"4809.750000 14.632100 10829.400391"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"4830.140137 14.632100 10814.799805",
			"4825.910156 14.632100 10814.700195",
			"4811.729980 14.632100 10829.099609",
			"4809.399902 14.632100 10831.000000"
		};
	}
	
	if (dice == 3)
	{	
		designatorPositions = {
			"4868.709961 13.196300 10803.000000",
			"4823.799805 14.518700 10827.900391",
			"4806.129883 14.965400 10780.200195",
			"4831.709961 14.264000 10875.000000"
		};
	}

	if (dice == 4)
	{
		designatorPositions = {
			"4795.109863 14.727600 10798.200195",
			"4855.859863 13.781800 10803.200195",
			"4849.279785 14.166500 10882.299805",
			"4811.089844 14.655400 10847.599609"
		};
	}

	if (dice == 5)
	{
		designatorPositions = {
			"4819.569824 14.651200 10790.700195",
			"4846.529785 14.237200 10849.799805",
			"4794.089844 14.727600 10827.000000"
		};
	}
	
	if (dice == 6)
	{
		designatorPositions = {
			"4849.959961 12.930700 10760.200195",
			"4802.000000 14.351000 10867.099609",
			"4902.850098 12.717900 10872.099609"
		};
	}
	
	if (dice == 7)
	{
		designatorPositions = {
			"4819.700195 14.646700 10793.400391",
			"4832.930176 14.542600 10814.099609"
		};
	}
	
	if (dice == 8)
	{
		designatorPositions = {
			"4837.799805 14.216200 10869.799805",
			"4807.629883 14.722200 10831.099609"
		};
	}
	
	if (dice == 9)
	{
		designatorPositions = {
			"4832.180176 14.376300 10844.599609"
		};
	}
	
	if (dice == 10)
	{
		designatorPositions = {
			"4826.750000 14.637600 10795.299805"
		};
	}
	
	if (dice == 11)
	{
		designatorPositions = {
			"4871.270020 14.112900 10860.000000"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("BK-M06", "4841.379883 14.632100 10810.500000", 600, designatorPositions);
}

void Spawn_BK_T07_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 8);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"4428.600098 15.920400 10760.599609",
			"4404.049805 15.927600 10775.099609",
			"4394.169922 15.927000 10723.200195"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"4434.600098 16.014900 10742.900391",
			"4380.509766 15.927600 10743.000000",
			"4409.000000 15.927600 10731.500000"
		};
	}
	
	if (dice == 3)
	{
		designatorPositions = {
			"4403.649902 16.014900 10762.200195",
			"4433.479980 15.927600 10739.700195",
			"4406.649902 15.927600 10733.099609"
		};
	}
	
	if (dice == 4)
	{
		designatorPositions = {
			"4440.810059 16.014900 10722.299805",
			"4440.569824 15.927600 10727.299805",
			"4440.330078 15.927600 10732.500000"
		};
	}
	
	if (dice == 5)
	{
		designatorPositions = {
			"4402.080078 16.014900 10775.400391",
			"4422.720215 15.927600 10711.500000"
		};
	}
	
	if (dice == 6)
	{
		designatorPositions = {
			"4408.129883 15.927600 10737.799805",
			"4428.339844 15.917700 10742.900391"
		};
	}
	
	if (dice == 7)
	{
		designatorPositions = {
			"4450.509766 16.127600 10739.000000"
		};
	}
	
	if (dice == 8)
	{
		designatorPositions = {
			"4410.259766 15.917600 10718.700195"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("BK-T07", "4428.600098 15.920400 10760.599609", 600, designatorPositions);
}

void Spawn_BK_L02_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 7);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"3428.659912 216.934998 6720.330078",
			"3472.000000 217.313004 6703.200195",
			"3409.739990 216.871002 6749.209961"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"3406.850098 217.212006 6689.149902",
			"3448.750000 217.011993 6729.850098",
			"3411.030029 216.897995 6737.709961"
		};
	}
	
	if (dice == 3)
	{
		designatorPositions = {
			"3482.080078 217.307999 6709.720215",
			"3447.080078 217.061005 6710.979980",
			"3394.719971 217.121002 6709.540039"
		};
	}
	
	if (dice == 4)
	{
		designatorPositions = {
			"3448.429932 217.067001 6709.950195",
			"3448.429932 217.067001 6709.950195"
		};
	}
	
	if (dice == 5)
	{
		designatorPositions = {
			"3400.530029 216.977997 6729.410156",
			"3445.510010 217.076996 6699.180176"
		};
	}
	
	if (dice == 6)
	{
		designatorPositions = {
			"3446.129883 217.001999 6726.419922"
		};
	}
	
	if (dice == 7)
	{
		designatorPositions = {
			"3410.780029 216.897995 6709.569824"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("BK-L02", "3428.659912 216.934998 6720.330078", 600, designatorPositions);
}

void Spawn_BK_L01_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 5);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"4080.979980 374.950989 6645.529785",
			"4181.450195 391.112000 6642.229980",
			"4138.549805 377.735992 6683.160156",
			"4207.060059 391.697998 6603.129883"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"4060.239990 374.326996 6653.209961",
			"4175.149902 386.053009 6666.890137",
			"4128.640137 377.778015 6699.350098",
			"4154.069824 391.141998 6644.410156"
		};
	}
	
	if (dice == 3)
	{
		designatorPositions = {
			"4158.240234 377.269989 6710.220215",
			"4175.930176 391.027008 6596.560059",
			"4128.640137 377.778015 6699.350098",
			"4154.069824 391.141998 6644.410156"
		};
	}
	
	if (dice == 4)
	{
		designatorPositions = {
			"4076.419922 366.873993 6704.220215",
			"4103.339844 376.273987 6689.180176",
			"4141.220215 377.915009 6679.819824",
			"4192.390137 391.721985 6588.319824"
		};
	}
	
	if (dice == 5)
	{
		designatorPositions = {
			"4085.429932 377.541992 6633.359863",
			"4155.540039 387.066986 6555.290039",
			"4210.290039 380.095001 6689.580078",
			"4100.580078 370.088989 6720.939941"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("BK-L01", "4080.979980 374.950989 6645.529785", 600, designatorPositions);
}

void Spawn_Athena_Research_Institute_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 5);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"4507.180176 87.886299 8202.490234",
			"4504.870117 87.929703 8228.429688",
			"4231.950195 78.514603 8081.220215",
			"4236.709961 78.568398 8123.149902",
			"4311.850098 79.753601 8049.379883"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"4387.569824 79.396301 8134.100098",
			"4409.080078 79.618103 8070.640137",
			"4099.890137 83.017601 8054.649902",
			"4189.040039 78.863098 8072.770020",
			"4241.580078 78.979797 8025.629883"
		};
	}
	
	if (dice == 3)
	{
		designatorPositions = {
			"4369.689941 79.000603 8110.060059",
			"4351.419922 78.972198 8106.569824",
			"4331.569824 78.769897 8103.859863",
			"4305.959961 78.637604 8099.160156",
			"4282.750000 78.532799 8095.060059"
		};
	}
	
	if (dice == 4)
	{
		designatorPositions = {
			"4378.339844 78.854301 8142.459961",
			"4402.709961 79.461304 8072.120117",
			"4369.040039 79.689796 8048.729980",
			"4276.020020 79.120300 8013.529785",
			"4282.750000 78.532799 8095.060059"
		};
	}
	
	if (dice == 5)
	{
		designatorPositions = {
			"4080.370117 83.010902 8046.640137",
			"4149.009766 79.102898 8062.939941",
			"4090.459961 84.247803 8081.700195",
			"4154.609863 78.848602 8001.939941",
			"4169.049805 79.084198 8094.129883"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Athena Research Institute", "4507.180176 87.886299 8202.490234", 600, designatorPositions);
}

void Spawn_Sebjan_Uranium_Mine_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 4);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"4907.149902 50.927700 8016.970215",
			"5105.339844 40.701599 8204.679688",
			"5042.060059 51.037102 7996.410156",
			"4885.040039 50.937599 7960.779785"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"4698.490234 50.927700 8040.950195",
			"4686.979980 50.937599 7982.700195",
			"4913.930176 50.903099 8043.919922",
			"5033.419922 50.937599 7965.890137"
		};
	}
	
	if (dice == 3)
	{
		designatorPositions = {
			"4950.149902 42.006001 8137.470215",
			"4888.180176 48.551201 8227.500000",
			"5075.629883 49.770500 8064.370117",
			"4821.770020 50.937599 8067.060059"
		};
	}
	
	if (dice == 4)
	{
		designatorPositions = {
			"4990.439941 40.107601 8168.009766",
			"5094.609863 40.442699 8175.200195",
			"5068.029785 51.216202 7937.020020",
			"5003.979980 41.798302 8274.370117"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Sebjan Uranium Mine", "4907.149902 50.927700 8016.970215", 600, designatorPositions);
}

void Spawn_Refugee_Camp_Vorkuta_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 6);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"7278.609863 46.417599 10551.400391",
			"7316.109863 46.449200 10527.099609"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"7281.970215 46.417599 10512.700195",
			"7341.120117 46.146000 10554.500000"
		};
	}
	
	if (dice == 3)
	{
		designatorPositions = {
			"7296.859863 46.065701 10484.299805"
		};
	}
	
	if (dice == 4)
	{
		designatorPositions = {
			"7297.250000 46.417599 10535.299805"
		};
	}
	
	if (dice == 5)
	{
		designatorPositions = {
			"7331.649902 46.330898 10519.900391"
		};
	}
	
	if (dice == 6)
	{
		designatorPositions = {
			"7277.259766 46.423500 10508.799805"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Refugee Camp Vorkuta", "7278.609863 46.417599 10551.400391", 600, designatorPositions);
}

void Spawn_Refugee_Camp_Sebjan_Designators()
{	
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	int dice = Math.RandomIntInclusive(1, 8);
	array<string> designatorPositions;
	
	if (dice == 1)
	{
		designatorPositions = {
			"5148.129883 75.080299 8974.769531",
			"5196.509766 74.654198 8996.309570",
			"5162.549805 75.187202 8939.860352"
		};
	}

	if (dice == 2)
	{
		designatorPositions = {
			"5162.060059 75.109398 8954.530273",
			"5169.939941 74.906998 8983.589844",
			"5190.609863 74.668503 8971.509766"
		};
	}
	
	if (dice == 3)
	{
		designatorPositions = {
			"5184.160156 74.787804 8938.820313",
			"5177.950195 74.738503 9008.269531",
			"5162.310059 75.056702 8969.070313"
		};
	}
	
	if (dice == 4)
	{
		designatorPositions = {
			"5223.680176 75.089897 9015.349609",
			"5146.640137 74.950401 8989.709961",
			"5145.770020 75.094597 8917.480469"
		};
	}
	
	if (dice == 5)
	{
		designatorPositions = {
			"5149.660156 75.061798 8977.250000",
			"5149.830078 75.163101 8950.750000"
		};
	}
	
	if (dice == 6)
	{
		designatorPositions = {
			"5174.459961 75.011200 8962.730469",
			"5169.509766 74.985298 8933.839844"
		};
	}
	
	if (dice == 7)
	{
		designatorPositions = {
			"5164.200195 75.102997 8952.879883"
		};
	}
	
	if (dice == 8)
	{
		designatorPositions = {
			"5170.049805 74.866501 8991.040039"
		};
	}

	Get_ab_DesignatorManager().CreatePredefinedDesignatorController("Refugee Camp Sebjan", "5148.129883 75.080299 8974.769531", 600, designatorPositions);
}

void Spawn_Vorkuta_Town_Designators()
{
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	chance = 0.5;
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Vorkuta Town 1", "6789.689941 15.920100 11271.299805", 500, 8, Math.RandomIntInclusive(1, 2));
	}
	
	chance = 0.5;
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Vorkuta Town 2", "6886.740234 16.356400 11208.599609", 500, 8, Math.RandomIntInclusive(1, 2));
	}
	
	chance = 0.5;
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Vorkuta Town 3", "6654.000000 16.060900 11014.400391", 500, 8, Math.RandomIntInclusive(1, 2));
	}
	
	chance = 0.5;
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Vorkuta Town 4", "6720.399902 16.118700 10994.700195", 500, 8, Math.RandomIntInclusive(1, 2));
	}
	
	chance = 0.5;
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Vorkuta Town 5", "6823.720215 17.145700 11050.900391", 500, 8, Math.RandomIntInclusive(1, 2));
	}
	
	chance = 0.5;
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Vorkuta Town 6", "6833.569824 17.228701 10924.700195", 500, 8, Math.RandomIntInclusive(1, 2));
	}
	
	chance = 0.5;
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Vorkuta Town 7", "6965.470215 16.449499 11341.299805", 500, 8, Math.RandomIntInclusive(1, 2));
	}
	
	chance = 0.5;
	
	if (Math.RandomFloat01() < chance)
	{
		Get_ab_DesignatorManager().CreateRandomDesignatorController("Vorkuta Town 8", "6590.750000 19.726700 10910.200195", 500, 8, Math.RandomIntInclusive(1, 2));
	}
}

void Spawn_Jalovisko_Fields_Designators()
{
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	Get_ab_DesignatorManager().CreateRandomDesignatorController("Jalovisko Fields", "7804.879883 17.237801 11004.900391", 500, 100, Math.RandomIntInclusive(1, 3));
}

void Spawn_Sebjan_Valley_Designators()
{
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	Get_ab_DesignatorManager().CreateRandomDesignatorController("Sebjan Valley", "5487.600098 36.991699 9031.620117", 500, 150, Math.RandomIntInclusive(2, 5));
}

void Spawn_Athena1_Designators()
{
	float chance = 0.5;
	
	if (Math.RandomFloat01() >= chance) return;
	
	Get_ab_DesignatorManager().CreateRandomDesignatorController("Athena 1", "3776.159912 146.106995 8247.000000", 500, 25, Math.RandomIntInclusive(2, 4));
} 

void main()
{
	/*
	
		Your original main() content here
	
	*/
	
	SpawnDesignators();
};