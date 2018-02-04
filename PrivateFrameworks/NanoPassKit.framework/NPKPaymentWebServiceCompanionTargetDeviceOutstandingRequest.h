/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentWebServiceCompanionTargetDeviceOutstandingRequest : NSObject {
    id  _completionHandler;
    id /* block */  _errorHandler;
    NSString * _messageIdentifier;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, copy) id completionHandler;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (id)completionHandler;
- (id /* block */)errorHandler;
- (id)messageIdentifier;
- (void)setCompletionHandler:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end
