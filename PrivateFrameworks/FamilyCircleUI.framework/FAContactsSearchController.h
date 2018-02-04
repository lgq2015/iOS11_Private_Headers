/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAContactsSearchController : NSObject <MFContactsSearchConsumer> {
    long long  _countOfPendingResultBatches;
    <AAUIContactsSearchDelegate> * _delegate;
    bool  _didFindResults;
    MFContactsSearchManager * _searchManager;
    MFContactsSearchResultsModel * _searchResultsModel;
    NSNumber * _searchTaskID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelSearchAndNotify:(bool)arg1;
- (void)_endSearch;
- (void)beganNetworkActivity;
- (void)beginSearchWithString:(id)arg1;
- (void)cancelSearch;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
