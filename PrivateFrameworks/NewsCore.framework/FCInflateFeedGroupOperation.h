/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCInflateFeedGroupOperation : FCOperation {
    bool  _cachedOnly;
    FCCloudContext * _context;
    FCDeflatedFeedGroup * _deflatedGroup;
    FCFeedGroup * _inflatedGroup;
    id /* block */  _inflationCompletionHandler;
}

@property (nonatomic) bool cachedOnly;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) FCDeflatedFeedGroup *deflatedGroup;
@property (nonatomic, retain) FCFeedGroup *inflatedGroup;
@property (nonatomic, copy) id /* block */ inflationCompletionHandler;

- (void).cxx_destruct;
- (void)_fetchHeadlinesWithCompletionHandler:(id /* block */)arg1;
- (void)_fetchTagsForPBGroup:(id)arg1 sharedStrings:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)cachedOnly;
- (id)context;
- (id)deflatedGroup;
- (id)inflatedGroup;
- (id /* block */)inflationCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCachedOnly:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDeflatedGroup:(id)arg1;
- (void)setInflatedGroup:(id)arg1;
- (void)setInflationCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
