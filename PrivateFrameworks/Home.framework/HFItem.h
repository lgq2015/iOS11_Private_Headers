/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItem : NSObject {
    bool  __debug_isChildItem;
    HFItemManager * __debug_owningItemManager;
    NAFuture * _cancellableInFlightUpdateFuture;
    NSDictionary * _latestResults;
    unsigned long long  _loadingState;
}

@property (nonatomic) bool _debug_isChildItem;
@property (nonatomic) HFItemManager *_debug_owningItemManager;
@property (nonatomic) NAFuture *cancellableInFlightUpdateFuture;
@property (nonatomic, retain) NSDictionary *latestResults;
@property (nonatomic) unsigned long long loadingState;

- (void).cxx_destruct;
- (bool)_debug_isChildItem;
- (id)_debug_owningItemManager;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_finalOutcomeForSubclassOutcome:(id)arg1 previousResults:(id)arg2 updateOptions:(id)arg3;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)cancellableInFlightUpdateFuture;
- (void)copyLatestResultsFromItem:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)latestResults;
- (unsigned long long)loadingState;
- (bool)resultsContainRequiredProperties:(id)arg1;
- (void)setCancellableInFlightUpdateFuture:(id)arg1;
- (void)setLatestResults:(id)arg1;
- (void)setLoadingState:(unsigned long long)arg1;
- (void)set_debug_isChildItem:(bool)arg1;
- (void)set_debug_owningItemManager:(id)arg1;
- (id)updateWithOptions:(id)arg1;

@end
