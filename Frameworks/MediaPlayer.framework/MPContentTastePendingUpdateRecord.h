/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentTastePendingUpdateRecord : NSObject {
    NSUUID * _UUID;
    NSString * _playlistGlobalID;
    long long  _storeAdamID;
    unsigned long long  _tasteType;
    long long  _type;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSString *playlistGlobalID;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) unsigned long long tasteType;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)UUID;
- (void)_initializeWithType:(long long)arg1 tasteType:(unsigned long long)arg2;
- (id)init;
- (id)initWithPlaylistGlobalID:(id)arg1 tasteType:(unsigned long long)arg2;
- (id)initWithStoreAdamID:(long long)arg1 tasteType:(unsigned long long)arg2;
- (id)playlistGlobalID;
- (long long)storeAdamID;
- (unsigned long long)tasteType;
- (long long)type;

@end
