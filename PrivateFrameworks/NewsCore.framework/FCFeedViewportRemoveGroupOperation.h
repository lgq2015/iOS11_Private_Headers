/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportRemoveGroupOperation : FCOperation <FCFeedViewportRemoveGroupOperationType> {
    FCFeedDescriptor * _feedDescriptor;
    NSString * _groupID;
    id /* block */  _removeGroupCompletionHandler;
    FCFeedViewport * _resultViewport;
    FCFeedViewport * _viewport;
    FCFeedViewportDiff * _viewportDiff;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, retain) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ removeGroupCompletionHandler;
@property (nonatomic, retain) FCFeedViewport *resultViewport;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCFeedViewport *viewport;
@property (nonatomic, retain) FCFeedViewportDiff *viewportDiff;

- (void).cxx_destruct;
- (id)feedDescriptor;
- (id)groupID;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)removeGroupCompletionHandler;
- (id)resultViewport;
- (void)setFeedDescriptor:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setRemoveGroupCompletionHandler:(id /* block */)arg1;
- (void)setResultViewport:(id)arg1;
- (void)setViewport:(id)arg1;
- (void)setViewportDiff:(id)arg1;
- (bool)validateOperation;
- (id)viewport;
- (id)viewportDiff;

@end
