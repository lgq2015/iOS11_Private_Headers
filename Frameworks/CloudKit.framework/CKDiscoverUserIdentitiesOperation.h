/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverUserIdentitiesOperation : CKOperation {
    id /* block */  _discoverUserIdentitiesCompletionBlock;
    id /* block */  _userIdentityDiscoveredBlock;
    NSArray * _userIdentityLookupInfos;
}

@property (nonatomic, copy) id /* block */ discoverUserIdentitiesCompletionBlock;
@property (nonatomic, copy) id /* block */ userIdentityDiscoveredBlock;
@property (nonatomic, copy) NSArray *userIdentityLookupInfos;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id /* block */)discoverUserIdentitiesCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithUserIdentityLookupInfos:(id)arg1;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setDiscoverUserIdentitiesCompletionBlock:(id /* block */)arg1;
- (void)setUserIdentityDiscoveredBlock:(id /* block */)arg1;
- (void)setUserIdentityLookupInfos:(id)arg1;
- (id /* block */)userIdentityDiscoveredBlock;
- (id)userIdentityLookupInfos;

@end
