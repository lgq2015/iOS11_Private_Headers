/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRClientUpdatesConfigMessage : MRProtocolMessage

@property (nonatomic, readonly) bool artworkUpdates;
@property (nonatomic, readonly) bool keyboardUpdates;
@property (nonatomic, readonly) bool nowPlayingUpdates;
@property (nonatomic, readonly) bool volumeUpdates;

- (bool)artworkUpdates;
- (void)dealloc;
- (id)initWithNowPlayingUpdates:(bool)arg1 artworkUpdates:(bool)arg2 volumeUpdates:(bool)arg3 keyboardUpdates:(bool)arg4;
- (bool)keyboardUpdates;
- (bool)nowPlayingUpdates;
- (unsigned long long)type;
- (bool)volumeUpdates;

@end
