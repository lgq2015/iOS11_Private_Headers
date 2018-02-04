/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppIconState : NSObject {
    NSDictionary * _appLocation;
    NSSet * _dockedApps;
    NSSet * _folderApps;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allAppsOnSpringboard;
- (id)allDockedApps;
- (id)allFolderApps;
- (bool)appInFolderWithBundleId:(id)arg1;
- (bool)appOnDockWithBundleId:(id)arg1;
- (long long)folderPageNumberForBundleId:(id)arg1;
- (id)init;
- (id)loadIconState;
- (void)parseIconState:(id)arg1;
- (void)reload;
- (long long)springboardPageLocationForBundleId:(id)arg1;
- (long long)springboardPageNumberForBundleId:(id)arg1;

@end
