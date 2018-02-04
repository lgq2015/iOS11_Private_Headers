/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAutomaticPassPresentationSuppressor : NSObject {
    NSDate * _backgroundedDate;
    NSMutableIndexSet * _backgrounedSuppressionIdentifiers;
    unsigned long long  _nextRequestToken;
    NSMutableSet * _permissionRequestCompletionBlocks;
    long long  _permissionState;
    PKAssertion * _suppressionAssertion;
    NSMutableIndexSet * _suppressionRequestTokens;
    NSObject<OS_dispatch_queue> * _suppressorQueue;
}

@property (nonatomic, readonly) bool isSuppressing;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(id /* block */)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_requestPermissionAndAquireSupressionAssertionIfNeededWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)endSuppressionWithRequestToken:(unsigned long long)arg1;
- (id)init;
- (bool)isSuppressing;
- (unsigned long long)requestSuppressionWithResponseHandler:(id /* block */)arg1;

@end