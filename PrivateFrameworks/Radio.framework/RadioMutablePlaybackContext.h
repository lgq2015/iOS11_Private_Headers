/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutablePlaybackContext : RadioPlaybackContext

@property (nonatomic) long long numberOfSkipsUsed;
@property (nonatomic, copy) NSArray *trackPlaybackDescriptorQueue;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setNumberOfSkipsUsed:(long long)arg1;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1;

@end
