/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TURemoteVideoClient : NSObject <TURemoteVideoClient> {
    long long  _videoContextSlotIdentifier;
    CALayer * _videoLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long videoContextSlotIdentifier;
@property (nonatomic, retain) CALayer *videoLayer;

- (void).cxx_destruct;
- (void)cleanUpSubLayerForLayer:(id)arg1;
- (id)init;
- (id)initWithVideoContextSlotIdentifier:(long long)arg1;
- (void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2;
- (id)nameForSubLayer;
- (void)setVideoLayer:(id)arg1;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
- (long long)videoContextSlotIdentifier;
- (id)videoLayer;

@end
