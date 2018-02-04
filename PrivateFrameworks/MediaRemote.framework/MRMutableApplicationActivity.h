/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMutableApplicationActivity : MRApplicationActivity

@property (nonatomic, copy) NSString *primaryApplicationDisplayID;
@property (nonatomic, copy) NSString *secondaryApplicationDisplayID;
@property (nonatomic) bool shouldPrepareAppPlaybackQueue;
@property (nonatomic) int status;

- (void)setPrimaryApplicationDisplayID:(id)arg1;
- (void)setSecondaryApplicationDisplayID:(id)arg1;
- (void)setShouldPrepareAppPlaybackQueue:(bool)arg1;
- (void)setStatus:(int)arg1;

@end
