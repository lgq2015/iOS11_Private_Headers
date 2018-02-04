/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerStoreQueueDescriptor : MPMusicPlayerQueueDescriptor {
    NSString * _startItemID;
    NSMutableDictionary * _storeFronts;
    NSArray * _storeIDs;
}

@property (nonatomic, copy) NSString *startItemID;
@property (nonatomic, copy) NSArray *storeIDs;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetStoreFronts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIDs:(id)arg1;
- (void)setEndTime:(double)arg1 forItemWithStoreID:(id)arg2;
- (void)setSourceStorefront:(id)arg1 forItemWithStoreID:(id)arg2;
- (void)setStartItemID:(id)arg1;
- (void)setStartTime:(double)arg1 forItemWithStoreID:(id)arg2;
- (void)setStoreIDs:(id)arg1;
- (id)startItemID;
- (id)storeIDs;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)playbackContext;

@end
