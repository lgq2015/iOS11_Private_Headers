/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGameControllerPropertiesMessage : MRProtocolMessage {
    void * _properties;
}

@property (nonatomic, readonly) unsigned long long controllerID;
@property (nonatomic, readonly) void*properties;

- (unsigned long long)controllerID;
- (void)dealloc;
- (id)initWithGameControllerProperties:(void*)arg1 controllerID:(unsigned long long)arg2;
- (void*)properties;
- (unsigned long long)type;

@end
