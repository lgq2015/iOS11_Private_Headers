/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSession : NSObject <SFFeedbackListener, SFResourceLoader> {
    PARBag * _bag;
    PARSearchClient * _client;
    PARSessionConfiguration * _configuration;
    <PARSessionDelegate> * _delegate;
    NSFileManager * _fileManager;
    GEOSearchFoundationFeedbackListener * _mapsListener;
    PARRanker * _ranker;
}

@property (retain) PARBag *bag;
@property (nonatomic, retain) PARSearchClient *client;
@property (nonatomic, retain) PARSessionConfiguration *configuration;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property <PARSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) PARRanker *ranker;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 startImmediately:(bool)arg3;
+ (id)sharedPARSessionWithConfiguration:(id)arg1;
+ (id)sharedSession;

- (void).cxx_destruct;
- (id)awaitBag;
- (id)bag;
- (void)captureMapsResultsDisplayedFeedback:(id)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (id)client;
- (id)configuration;
- (id)connection;
- (id)delegate;
- (void)didAppendLateSections:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didGoToSearch:(id)arg1;
- (void)didGoToSite:(id)arg1;
- (void)didGradeLookupHintRelevancy:(id)arg1;
- (void)didGradeResultRelevancy:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (unsigned long long)enabledStatus;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2 delegate:(id)arg3 startImmediately:(bool)arg4;
- (bool)loadCard:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)loadImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)loadMoreResults:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadTask:(id)arg1;
- (id)ranker;
- (void)reportEvent:(id)arg1;
- (void)reportFeedback:(id)arg1 queryId:(unsigned long long)arg2;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRanker:(id)arg1;
- (void)start;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (id)taskWithRequest:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_sharedParsecSession;

@end
