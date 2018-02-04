/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate> {
    NSString * _commentText;
    SUConcernItem * _concern;
    unsigned long long  _itemIdentifier;
}

@property (retain) NSString *commentText;
@property (retain) SUConcernItem *concern;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long itemIdentifier;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) Class superclass;

- (id)_httpBody;
- (id)commentText;
- (id)concern;
- (void)dealloc;
- (id)initWithConcern:(id)arg1;
- (unsigned long long)itemIdentifier;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
- (void)setCommentText:(id)arg1;
- (void)setConcern:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;

@end
