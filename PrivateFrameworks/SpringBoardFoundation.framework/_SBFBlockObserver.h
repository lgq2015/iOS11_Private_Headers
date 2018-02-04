/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFBlockObserver : NSObject <SBFObserver> {
    id /* block */  _completionBlock;
    id /* block */  _failureBlock;
    id /* block */  _resultBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithResultBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
