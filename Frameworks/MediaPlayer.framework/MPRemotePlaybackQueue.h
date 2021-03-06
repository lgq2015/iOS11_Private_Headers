/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemotePlaybackQueue : NSObject <MPCPlaybackContextCreating> {
    struct _MRSystemAppPlaybackQueue { } * _mediaRemotePlaybackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long replaceIntent;
@property (getter=isRequestingImmediatePlayback, nonatomic) bool requestingImmediatePlayback;
@property (nonatomic) bool shouldOverrideManuallyCuratedQueue;
@property (nonatomic, copy) NSString *siriRecommendationIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;

- (struct _MRSystemAppPlaybackQueue { }*)_mediaRemotePlaybackQueue;
- (void)dealloc;
- (id)init;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (bool)isRequestingImmediatePlayback;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)arg1;
- (void)setRequestingImmediatePlayback:(bool)arg1;
- (void)setShouldOverrideManuallyCuratedQueue:(bool)arg1;
- (void)setSiriRecommendationIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldOverrideManuallyCuratedQueue;
- (id)siriRecommendationIdentifier;
- (id)userInfo;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)getPlaybackContextWithCompletion:(id /* block */)arg1;

@end
