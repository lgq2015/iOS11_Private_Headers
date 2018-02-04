/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService

+ (bool)isServiceAvailableForProviders:(id)arg1;

- (id)_libraryStatDictionary;
- (id)_providerItemsSummary;
- (bool)canProvideConsoleDescription;
- (bool)canProvideContextualViewController;
- (bool)canProvideSettingsViewController;
- (id)collectProviderItemsSummaryAndLibraryStat;
- (id)consoleDescription;
- (id)contextualViewController;
- (id)parseProviderItemsSummary:(id)arg1 error:(id*)arg2;
- (id)settingsViewController;
- (id)snapshotMemoriesRelatedResults:(id)arg1 error:(id*)arg2;
- (id)tapToRadarURLWithTitle:(id)arg1 descriptionString:(id)arg2;
- (id)title;
- (void)writeErrorsToErrorLog:(id)arg1;
- (void)writeGraphData:(id)arg1 errorLists:(id)arg2;
- (void)writeGraphStatistics:(id)arg1 errorLists:(id)arg2;
- (void)writeLibraryStatistics:(id)arg1 analysisClient:(id)arg2 errorLists:(id)arg3;
- (void)writeMemoriesSummary:(id)arg1 analysisClient:(id)arg2 errorLists:(id)arg3;

@end
