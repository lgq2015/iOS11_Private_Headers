/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATClientController : NSObject {
    NSDictionary * _clientMap;
    struct __CFDictionary { } * _queueMap;
}

+ (id)controllerForDataclasses:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_loadClientsForDataclasses:(id)arg1;
- (id)allClients;
- (id)clientForDataclass:(id)arg1;
- (void)dealloc;
- (id)queueForClient:(id)arg1;
- (void)resetQueues;
- (void)waitToDrain;

@end
