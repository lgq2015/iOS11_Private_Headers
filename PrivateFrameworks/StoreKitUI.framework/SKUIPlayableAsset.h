/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPlayableAsset : NSObject {
    bool  _ITunesStream;
    NSURL * _contentURL;
    double  _initialPlaybackTime;
    NSURL * _keyCertificateURL;
    NSURL * _keyServerURL;
    double  _playbackDuration;
    bool  _shouldUseITunesStoreSecureKeyDelivery;
    long long  _storeItemIdentifier;
}

@property (getter=isITunesStream, nonatomic, readonly) bool ITunesStream;
@property (nonatomic, copy) NSURL *contentURL;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic, readonly, retain) NSURL *keyCertificateURL;
@property (nonatomic, readonly, retain) NSURL *keyServerURL;
@property (nonatomic) double playbackDuration;
@property (nonatomic) bool shouldUseITunesStoreSecureKeyDelivery;
@property (nonatomic) long long storeItemIdentifier;

- (void).cxx_destruct;
- (id)contentURL;
- (id)init;
- (id)initWithContentURL:(id)arg1;
- (id)initWithVideo:(id)arg1;
- (id)initWithVideoViewElement:(id)arg1 assetViewElement:(id)arg2;
- (double)initialPlaybackTime;
- (bool)isITunesStream;
- (id)keyCertificateURL;
- (id)keyServerURL;
- (double)playbackDuration;
- (void)setContentURL:(id)arg1;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setPlaybackDuration:(double)arg1;
- (void)setShouldUseITunesStoreSecureKeyDelivery:(bool)arg1;
- (void)setStoreItemIdentifier:(long long)arg1;
- (bool)shouldUseITunesStoreSecureKeyDelivery;
- (long long)storeItemIdentifier;

@end
