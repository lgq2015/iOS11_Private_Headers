/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRConnectivitySubscriber : NSObject {
    bool  _connected;
    unsigned long long  _dropoutCounter;
}

@property (nonatomic) bool connected;
@property (nonatomic) unsigned long long dropoutCounter;

+ (bool)getDropoutCounter:(unsigned long long*)arg1;

- (void)_readConnectivityStatus;
- (bool)connected;
- (unsigned long long)dropoutCounter;
- (id)init;
- (void)setConnected:(bool)arg1;
- (void)setDropoutCounter:(unsigned long long)arg1;

@end
