/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportExpandGroupGapOperation : FCOperation {
    FCCloudContext * _context;
    unsigned long long  _desiredHeadlineCount;
    id /* block */  _expandGapCompletionHandler;
    FCFeedDescriptor * _feedDescriptor;
    NSArray * _feedGroupEmitters;
    NSMutableDictionary * _forYouCatchUpOperationsByEdition;
    FCFeedViewportGap * _gap;
    long long  _gapExpansionPolicy;
    FCDateRange * _refreshDateRange;
    NSError * _resultError;
    FCFeedGroup * _resultInsertedGroup;
    NSArray * _resultInternalElements;
    NSDictionary * _toCursorsByEmitterID;
    FCFeedViewport * _viewport;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic) unsigned long long desiredHeadlineCount;
@property (nonatomic, copy) id /* block */ expandGapCompletionHandler;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, retain) NSArray *feedGroupEmitters;
@property (nonatomic, retain) NSMutableDictionary *forYouCatchUpOperationsByEdition;
@property (nonatomic, copy) FCFeedViewportGap *gap;
@property (nonatomic) long long gapExpansionPolicy;
@property (nonatomic, retain) FCDateRange *refreshDateRange;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, retain) FCFeedGroup *resultInsertedGroup;
@property (nonatomic, retain) NSArray *resultInternalElements;
@property (nonatomic, retain) NSDictionary *toCursorsByEmitterID;
@property (nonatomic, retain) FCFeedViewport *viewport;

- (void).cxx_destruct;
- (id)_associatedForYouCatchUpOperationForEdition:(id)arg1;
- (id)_groupsFromRefreshSessionContainingGap:(id)arg1 internalElements:(id)arg2;
- (id)context;
- (unsigned long long)desiredHeadlineCount;
- (id /* block */)expandGapCompletionHandler;
- (id)feedDescriptor;
- (id)feedGroupEmitters;
- (id)forYouCatchUpOperationsByEdition;
- (id)gap;
- (long long)gapExpansionPolicy;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)refreshDateRange;
- (id)resultError;
- (id)resultInsertedGroup;
- (id)resultInternalElements;
- (void)setContext:(id)arg1;
- (void)setDesiredHeadlineCount:(unsigned long long)arg1;
- (void)setExpandGapCompletionHandler:(id /* block */)arg1;
- (void)setFeedDescriptor:(id)arg1;
- (void)setFeedGroupEmitters:(id)arg1;
- (void)setForYouCatchUpOperationsByEdition:(id)arg1;
- (void)setGap:(id)arg1;
- (void)setGapExpansionPolicy:(long long)arg1;
- (void)setRefreshDateRange:(id)arg1;
- (void)setResultError:(id)arg1;
- (void)setResultInsertedGroup:(id)arg1;
- (void)setResultInternalElements:(id)arg1;
- (void)setToCursorsByEmitterID:(id)arg1;
- (void)setViewport:(id)arg1;
- (id)toCursorsByEmitterID;
- (id)viewport;

@end
