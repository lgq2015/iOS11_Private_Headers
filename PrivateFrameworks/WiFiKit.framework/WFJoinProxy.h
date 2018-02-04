/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFJoinProxy : NSObject <WFWiFiJoinProxy> {
    struct __WiFiDeviceClient { } * _device;
    id /* block */  _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct __WiFiDeviceClient { }*device;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_joinComplete:(int)arg1 userInfo:(struct __CFDictionary { }*)arg2 network:(struct __WiFiNetwork { }*)arg3;
- (struct __WiFiDeviceClient { }*)device;
- (id /* block */)handler;
- (void)joinNetwork:(struct __WiFiNetwork { }*)arg1 handler:(id /* block */)arg2;
- (void)setDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
