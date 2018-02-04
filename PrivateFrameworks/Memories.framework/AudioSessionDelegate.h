/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface AudioSessionDelegate : NSObject <AVAudioSessionDelegate> {
    bool  _interruptions;
    bool  _isUsingAudioInput;
    bool  _isUsingSpeaker;
    bool  _preventSessionChanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interruptions;
@property (nonatomic) bool isUsingAudioInput;
@property (nonatomic) bool isUsingSpeaker;
@property (nonatomic) bool preventSessionChanges;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (bool)becomeActiveWithWantsAudioInput:(bool)arg1;
- (bool)becomeInactive;
- (void)beginInterruption;
- (void)dealloc;
- (void)endInterruptionWithFlags:(unsigned long long)arg1;
- (void)ignoreInterruptionsMode;
- (id)init;
- (bool)inputIsAvailable;
- (void)inputIsAvailableChanged:(bool)arg1;
- (bool)interruptions;
- (bool)isUsingAudioInput;
- (bool)isUsingSpeaker;
- (void)normalInterruptionsMode;
- (bool)preventSessionChanges;
- (void)routeDidChange;
- (void)sdf;
- (void)setInterruptions:(bool)arg1;
- (void)setIsUsingAudioInput:(bool)arg1;
- (void)setIsUsingSpeaker:(bool)arg1;
- (void)setPreventSessionChanges:(bool)arg1;
- (float)sliderToDB:(float)arg1;
- (float)volumeDBtoSlider:(float)arg1;

@end
