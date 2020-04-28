%struct=uiimport('o3Scaled.mat')
%% Run function with radii 0.1257, and false flag for visualization and merging clusters.

[Clusters, Results]=DDC_ver01_1_CAMS(O3Scaled(:), 0.1257, 0, 0)
%% Run function with radii 0.1257, and true flag for visualization and merging clusters.

%[Clusters, Results]=DDC_ver01_1_CAMS(O3Scaled(:), 0.1257, 1, 1)
%% Run function with radii 0.1257, and false flag for visualization and true flag for merging.

%[Clusters, Results]=DDC_ver01_1_CAMS(O3Scaled(:), 0.1257, 1, 0)
%% Run function with radii 0.1257, and true flag for visualization and false flag for merging.

%[Clusters, Results]=DDC_ver01_1_CAMS(O3Scaled(:), 0.1257, 0, 1)
