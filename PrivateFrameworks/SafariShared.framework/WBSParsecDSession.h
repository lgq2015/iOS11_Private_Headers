/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession> {
    WBSCompletionQuery * _currentQuery;
    unsigned long long  _currentQueryID;
    <WBSParsecSearchSessionDelegate> * _delegate;
    WBSParsecDFeedbackDispatcher * _feedbackDispatcher;
    GEOUserSessionEntity * _geoUserSessionEntity;
    PARSession * _parsecdSession;
    NSObject<OS_dispatch_queue> * _requestProcessingQueue;
    double  _uiScale;
    bool  _valid;
}

@property (nonatomic, retain) WBSCompletionQuery *currentQuery;
@property unsigned long long currentQueryID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSParsecSearchSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <WBSParsecFeedbackDispatcher> *feedbackDispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PARSession *parsecdSession;
@property (readonly) Class superclass;
@property (setter=setUIScale:, nonatomic) double uiScale;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_updateAutoFillTLDsIfNeededForSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)sharedCorrectionsProcessor;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedPARSession;
+ (bool)shouldUseSearchFoundation;

- (void).cxx_destruct;
- (void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4;
- (id)_parsecResultsFromRawResponse:(id)arg1 identifiersToSFSearchResults:(id)arg2 identifiersToSFResultSections:(id)arg3;
- (id)_parsecResultsFromResponse:(id)arg1;
- (void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)arg1;
- (id)currentQuery;
- (unsigned long long)currentQueryID;
- (id)delegate;
- (id)feedbackDispatcher;
- (void)fetchCardDetailsForResult:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithParsecdSession:(id)arg1;
- (bool)isValid;
- (id)parsecdSession;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)setCurrentQuery:(id)arg1;
- (void)setCurrentQueryID:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParsecdSession:(id)arg1;
- (void)setUIScale:(double)arg1;
- (double)uiScale;

@end
