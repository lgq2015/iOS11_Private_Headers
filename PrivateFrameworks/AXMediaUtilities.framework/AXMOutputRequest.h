/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMOutputRequest : NSObject {
    float  _hapticDuration;
    long long  _hapticID;
    float  _hapticPitch;
    float  _hapticVolume;
    bool  _interruptsAndClearsQueue;
    NSMutableArray * _soundFileURLs;
    NSMutableAttributedString * _speechSequence;
}

@property (nonatomic) float hapticDuration;
@property (nonatomic, readonly) long long hapticID;
@property (nonatomic) float hapticPitch;
@property (nonatomic) float hapticVolume;
@property (nonatomic) bool interruptsAndClearsQueue;
@property (nonatomic, readonly) NSArray *soundFileURLs;
@property (nonatomic, readonly) NSAttributedString *speechSequence;

+ (id)speechItemSeparator;

- (void).cxx_destruct;
- (void)addHapticItemWithID:(long long)arg1;
- (void)addSoundItemWithID:(long long)arg1;
- (void)addSoundItemWithURL:(id)arg1;
- (void)addSpeechItem:(id)arg1;
- (float)hapticDuration;
- (long long)hapticID;
- (float)hapticPitch;
- (float)hapticVolume;
- (bool)interruptsAndClearsQueue;
- (void)setHapticDuration:(float)arg1;
- (void)setHapticPitch:(float)arg1;
- (void)setHapticVolume:(float)arg1;
- (void)setInterruptsAndClearsQueue:(bool)arg1;
- (id)soundFileURLs;
- (id)speechSequence;

@end
