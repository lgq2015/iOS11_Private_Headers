/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioAudioClip : RadioTrack

@property (nonatomic, readonly, copy) NSURL *assetURL;
@property (nonatomic, readonly) long long purchaseID;
@property (getter=isSkipable, nonatomic, readonly) bool skipable;

- (id)assetURL;
- (bool)isSkipable;
- (long long)purchaseID;

@end
