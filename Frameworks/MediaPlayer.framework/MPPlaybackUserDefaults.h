/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackUserDefaults : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _allowsHighQualityMusicStreamingOnCellular;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    int  _musicEQPreset;
    long long  _musicRepeatType;
    long long  _musicShuffleType;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  _notifyTokens;
    bool  _soundCheckEnabled;
    NSObject<OS_dispatch_queue> * _userDefaultsMutationQueue;
}

@property (nonatomic, readonly) bool allowsHighQualityMusicStreamingOnCellular;
@property (nonatomic, readonly) int musicEQPreset;
@property (nonatomic) long long musicRepeatType;
@property (nonatomic) long long musicShuffleType;
@property (nonatomic, readonly) unsigned long long preferredVideosAssetQualityOnCellular;
@property (nonatomic, readonly) unsigned long long preferredVideosAssetQualityOnWifi;
@property (getter=isPrivateListeningEnabled, nonatomic, copy) NSNumber *privateListeningEnabled;
@property (nonatomic, readonly) bool shouldUseNewQueueManagement;
@property (nonatomic, readonly) bool soundCheckEnabled;

+ (id)standardUserDefaults;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addNotificationObserver:(id /* block */)arg1 forUserDefaultKey:(struct __CFString { }*)arg2;
- (int)_calculateCurrentMusicEQPreset;
- (long long)_calculateCurrentMusicRepeatType;
- (long long)_calculateCurrentMusicShuffleType;
- (void)_mobileiPodPrefsDidChange;
- (void)_postRepeatShuffleTypeGlobalNotification;
- (bool)allowsHighQualityMusicStreamingOnCellular;
- (void)dealloc;
- (id)init;
- (id)isPrivateListeningEnabled;
- (int)musicEQPreset;
- (long long)musicRepeatType;
- (long long)musicShuffleType;
- (unsigned long long)preferredVideosAssetQualityOnCellular;
- (unsigned long long)preferredVideosAssetQualityOnWifi;
- (void)setMusicRepeatType:(long long)arg1;
- (void)setMusicShuffleType:(long long)arg1;
- (void)setPrivateListeningEnabled:(id)arg1;
- (bool)shouldUseNewQueueManagement;
- (bool)soundCheckEnabled;

@end
