/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchIndexOperation : NSOperation {
    <PSSearchIndexOperationDelegate> * _delegate;
    PSSearchEntry * _searchEntry;
}

@property <PSSearchIndexOperationDelegate> *delegate;
@property (nonatomic, readonly) PSSearchEntry *searchEntry;

+ (id)_bundleForSearchEntry:(id)arg1 thirdPartyApp:(bool*)arg2;
+ (id)_loadSearchEntriesFromPlistForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_loadThirdPartySearchEntriesForEntry:(id)arg1 bundle:(id)arg2;
+ (id)possibleBundleRoots;
+ (void)setPossibleBundleRoots:(id)arg1;
+ (void)setTopLevelManifestBundlePath:(id)arg1;
+ (id)topLevelManifestBundlePath;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_finishedIndexingWithEntries:(id)arg1 cancelled:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithSearchEntry:(id)arg1 delegate:(id)arg2;
- (void)main;
- (id)searchEntry;
- (void)setDelegate:(id)arg1;

@end
