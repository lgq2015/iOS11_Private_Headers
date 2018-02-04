/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRequest : NSObject <ASDRequestDelegate, NSSecureCoding> {
    <ASDRequestObserver> * _observer;
    <ASDRequestProxy> * _proxy;
    NSUUID * _requestID;
}

@property <ASDRequestObserver> *observer;
@property (retain) <ASDRequestProxy> *proxy;
@property (nonatomic, readonly) NSUUID *requestID;

+ (id)_sharedBroker;
+ (void)cancelAllRequestsWithErrorHandler:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_callErrorHandler:(id /* block */)arg1 withError:(id)arg2;
- (void)_callErrorHandler:(id /* block */)arg1 withError:(id)arg2 orDefaultCode:(unsigned long long)arg3;
- (void)_cancelWithErrorHandler:(id /* block */)arg1;
- (void)_notifyObserverOfCompletionWithError:(id)arg1;
- (void)_startWithErrorHandler:(id /* block */)arg1;
- (void)_submitRequestWithErrorHandler:(id /* block */)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)observer;
- (id)proxy;
- (void)receiveResponse:(id)arg1;
- (id)requestID;
- (void)setObserver:(id)arg1;
- (void)setProxy:(id)arg1;

@end
