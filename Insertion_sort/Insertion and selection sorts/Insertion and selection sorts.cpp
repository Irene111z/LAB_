double dur_arr[M];
long F = 0;
double aver_dur = 0;

for (int i = 0; i < M; i++)
{
	auto start = std::chrono::high_resolution_clock::now();

	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> duration = end - start;

	//std::cout << "Duration " << i << " = " << duration.count() << "s\n";
	dur_arr[i] = duration.count();
}
for (int i = 0; i < M; i++)
{
	std::cout << "Duration " << i << " = " << dur_arr[i] << "s\n";
	if (i <= 350 & i >= 150)
		aver_dur += dur_arr[i];
}
cout << "Среднее значение времени : " << aver_dur / 200 << endl;