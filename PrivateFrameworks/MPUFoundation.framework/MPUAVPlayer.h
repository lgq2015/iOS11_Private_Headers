/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUAVPlayer : MPAVController

@property (getter=_playlistManager, nonatomic, retain) MPUAVPlaylistManager *playlistManager;

+ (Class)playlistManagerClass;

- (id)_playlistManager;

@end
