/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPGeneralQueryTask : SPQueryTask <SPDaemonQueryDelegate> {
    bool  _didReceiveCompleteCallback;
    NSMutableArray * _mutableSections;
    NSString * _mutableSessionEntityString;
    bool  _newQuery;
    SPSearchQuery * _query;
    SPClientSession * _session;
    bool  _started;
    SPDaemonQueryToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) SPSearchQuery *query;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldPromptUserToOpenTTR;
- (void)addSections:(id)arg1;
- (void)cancel;
- (void)clearInternal:(int)arg1 invalidate:(bool)arg2;
- (id)defaultSearchThroughSection;
- (id)getTapToRadarPunchOutForRankingWithDebugLog:(id)arg1;
- (void)handleHiddenResult:(id)arg1 shownResult:(id)arg2 inSection:(id)arg3;
- (void)handleOptionsForNewSections:(id)arg1;
- (id)initForSession:(id)arg1 withQuery:(id)arg2;
- (bool)itemInLibrary:(id)arg1;
- (void)mergeSections;
- (id)query;
- (id)resultWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
- (void)searchDaemonLocalSuggestionsData:(id)arg1;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 gotResultSet:(id)arg2 replace:(bool)arg3 complete:(bool)arg4 finished:(bool)arg5 blendingDuration:(double)arg6 geoEntityString:(id)arg7;
- (void)searchDaemonRankingLog:(id)arg1;
- (void)searchDaemonSuggestionsArray:(id)arg1;
- (id)searchString;
- (id)searchThroughSection;
- (void)start;
- (id)unsafeSections;
- (id)unsafeSessionEntityString;

@end
