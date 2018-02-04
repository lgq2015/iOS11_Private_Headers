/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRequestInternal : NSObject {
    long long  _backgroundTaskIdentifier;
    SKPaymentQueueClient * _client;
    SKXPCConnection * _connection;
    <SKRequestDelegate> * _delegate;
    long long  _state;
}

- (void)dealloc;

@end
