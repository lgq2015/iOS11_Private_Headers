/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTracklistEntryPositionKey : NSObject {
    NSString * _deviceIdentifier;
    NSString * _generation;
}

@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *generation;

+ (id)positionKeyWithDeviceIdentifier:(id)arg1 generation:(id)arg2;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)deviceIdentifier;
- (id)generation;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setGeneration:(id)arg1;

@end
