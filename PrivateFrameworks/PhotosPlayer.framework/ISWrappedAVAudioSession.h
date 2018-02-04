/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISWrappedAVAudioSession : NSObject {
    AVAudioSession * _audioSession;
}

@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (nonatomic, readonly) NSString *category;

+ (id)auxiliarySession;
+ (id)sharedAmbientInstance;
+ (void)sharedAmbientInstanceWithLoadHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)audioSession;
- (id)category;
- (void)dealloc;
- (bool)setCategory:(id)arg1 error:(id*)arg2;

@end
