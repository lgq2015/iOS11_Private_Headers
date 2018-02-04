/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying> {
    long long  _numberOfSkipsUsed;
    NSArray * _trackPlaybackDescriptorQueue;
}

@property (nonatomic, readonly) long long numberOfSkipsUsed;
@property (nonatomic, readonly, copy) NSArray *trackPlaybackDescriptorQueue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfSkipsUsed;
- (id)playbackContextDictionary;
- (id)trackPlaybackDescriptorQueue;

@end
