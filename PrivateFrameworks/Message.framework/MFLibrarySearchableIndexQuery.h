/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexQuery : NSObject <MFCancelable, NSProgressReporting> {
    NSProgress * _internalProgress;
    NSLock * _lock;
    NSString * _logPrefixString;
    NSProgress * _progress;
    CSSearchQuery * _query;
    NSString * _queryStatusString;
    NSString * _queryString;
    NSMutableArray * _resultsBlocks;
    MFPromise * _resultsPromise;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logPrefixString;
@property (readonly) NSProgress *progress;
@property (nonatomic, retain) CSSearchQuery *query;
@property (nonatomic, retain) NSString *queryStatusString;
@property (nonatomic, readonly, copy) NSString *queryString;
@property (readonly) Class superclass;

+ (id)_modifierStringFromModifiers:(unsigned long long)arg1;
+ (id)_operandStringForOperand:(long long)arg1;
+ (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3;
+ (double)intervalForSpotlightFailureSimulation;
+ (id)queryStringByJoiningQueries:(id)arg1 withOperand:(long long)arg2;
+ (id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3;
+ (id)queryWithString:(id)arg1 context:(id)arg2;
+ (id)searchWordsForPhrase:(id)arg1;

- (void)_cancel;
- (void)_completed;
- (void)_failedWithError:(id)arg1;
- (void)_foundItems:(id)arg1;
- (bool)_isCancellationError:(id)arg1;
- (void)_performClientWork:(id /* block */)arg1;
- (void)_removeAllResultsBlocks;
- (void)_searchQueryDidComplete;
- (void)_searchQueryDidFailWithError:(id)arg1;
- (void)_searchQueryDidFindItems:(id)arg1;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addResultsBlock:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)logPrefixString;
- (id)progress;
- (id)query;
- (id)queryStatusString;
- (id)queryString;
- (void)setLogPrefixString:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryStatusString:(id)arg1;
- (void)start;
- (id)truncatedDescription;

@end
