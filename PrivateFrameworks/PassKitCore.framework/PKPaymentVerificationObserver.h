/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentVerificationObserver : NSObject {
    <PKPaymentVerificationObserverDelegate> * _delegate;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _observing;
    PKPaymentPass * _pass;
    NSObject<OS_dispatch_source> * _timer;
    PKVerificationChannel * _verificationChannel;
}

@property (nonatomic) <PKPaymentVerificationObserverDelegate> *delegate;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, readonly, retain) PKPaymentPass *pass;
@property (nonatomic, readonly, retain) PKVerificationChannel *verificationChannel;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)initWithPaymentPass:(id)arg1 verificationChannel:(id)arg2 identifier:(id)arg3;
- (id)pass;
- (void)setDelegate:(id)arg1;
- (void)startObservingVerificationSourceWithTimeout:(double)arg1;
- (void)stop;
- (id)verificationChannel;

@end
