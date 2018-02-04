/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchModel : NSObject <SPQueryTaskDelegate> {
    NSObject<SPSearchAgentDelegate> * _delegate;
    bool  _forceStableResults;
    bool  _infinitePatience;
    NSString * _lastQueryString;
    SPQueryResponse * _lastResponse;
    bool  _queryComplete;
    bool  _queryDidFinish;
    SPQueryTask * _queryTask;
    SFResultSection * _searchThroughSection;
    bool  _springBoardIsActive;
    long long  _updatesDisabled;
}

@property (retain) NSObject<SPSearchAgentDelegate> *delegate;
@property bool forceStableResults;
@property bool infinitePatience;
@property (retain) SPQueryResponse *lastResponse;
@property bool queryComplete;
@property bool queryDidFinish;
@property (retain) SPQueryTask *queryTask;
@property (readonly) SFResultSection *searchThroughSection;
@property (readonly) NSArray *sections;
@property bool springBoardIsActive;
@property (readonly) bool wantsCompletions;

+ (void)preheat;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)arg1;
+ (id)sharedFullZWKInstance;
+ (id)sharedGeneralInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_suggestionsReadyForDisplay;
- (void)activate;
- (void)clear;
- (void)deactivate;
- (id)delegate;
- (void)didReceiveResponse:(id)arg1;
- (void)disableUpdates;
- (void)enableUpdates;
- (bool)forceStableResults;
- (bool)infinitePatience;
- (void)invalidate;
- (void)invalidateCurrentQuery;
- (void)invalidateQuery:(id)arg1;
- (id)lastResponse;
- (bool)queryComplete;
- (bool)queryDidFinish;
- (id)queryTask;
- (void)resultsDidBecomeInvalid:(id)arg1;
- (id)searchThroughSection;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setForceStableResults:(bool)arg1;
- (void)setInfinitePatience:(bool)arg1;
- (void)setLastResponse:(id)arg1;
- (void)setQueryComplete:(bool)arg1;
- (void)setQueryDidFinish:(bool)arg1;
- (void)setQueryTask:(id)arg1;
- (void)setSpringBoardIsActive:(bool)arg1;
- (bool)springBoardIsActive;
- (void)updateWithResponse:(id)arg1;
- (void)updatesDispabled;
- (void)updatesEnabled;
- (bool)wantsCompletions;

@end
