/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACAudioRoute : NSObject {
    bool  _picked;
    NSString * _routeName;
    long long  _routeSubtype;
    long long  _routeType;
    bool  _supportsVolumeControl;
    NSString * _uniqueIdentifier;
}

@property (getter=isPicked, nonatomic, readonly) bool picked;
@property (nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) long long routeSubtype;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) bool supportsVolumeControl;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (int)_routeBufferSubtypeFromMPAVRouteSubtype:(long long)arg1;
+ (int)_routeBufferTypeFromMPAVRouteType:(long long)arg1;
+ (int)_routeBufferTypeFromRouteType:(long long)arg1;
+ (long long)_routeSubtypeFromRouteBufferSubtype:(int)arg1;
+ (long long)_routeTypeFromMPAVRouteType:(long long)arg1;
+ (long long)_routeTypeFromRouteBufferType:(int)arg1;
+ (id)audioRouteFromBuffer:(id)arg1;
+ (id)audioRouteWithMPAVRoute:(id)arg1;
+ (id)audioRoutesFromBuffers:(id)arg1;
+ (id)buffersFromAudioRoutes:(id)arg1;

- (void).cxx_destruct;
- (id)buffer;
- (id)description;
- (id)initWithMPAVRoute:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAudioRoute:(id)arg1;
- (bool)isPicked;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (void)setSupportsVolumeControl:(bool)arg1;
- (bool)supportsVolumeControl;
- (id)uniqueIdentifier;

@end
