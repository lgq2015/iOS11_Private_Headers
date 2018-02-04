/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSSwitchControlSettings : NSObject {
    double  _autoHideTimeout;
    double  _autoScanningInterval;
    double  _autoTapTimeout;
    NSArray * _cursorSizes;
    double  _dwellDuration;
    double  _holdDuration;
    double  _ignoreRepeatDuration;
    double  _longPressDuration;
    unsigned long long  _numberOfScanLoops;
    double  _pauseOnFirstItemInterval;
    NSArray * _postActivationScanLocations;
    double  _repeatActionInterval;
    NSArray * _scanningStyles;
    bool  _soundEffectsEnabled;
    bool  _speechEnabled;
    NSArray * _tapBehaviors;
}

@property (nonatomic) double autoHideTimeout;
@property (nonatomic) double autoScanningInterval;
@property (nonatomic) double autoTapTimeout;
@property (nonatomic, copy) NSArray *cursorSizes;
@property (nonatomic) double dwellDuration;
@property (nonatomic) double holdDuration;
@property (nonatomic) double ignoreRepeatDuration;
@property (nonatomic) double longPressDuration;
@property (nonatomic) unsigned long long numberOfScanLoops;
@property (nonatomic) double pauseOnFirstItemInterval;
@property (nonatomic, copy) NSArray *postActivationScanLocations;
@property (nonatomic) double repeatActionInterval;
@property (nonatomic, copy) NSArray *scanningStyles;
@property (nonatomic) bool soundEffectsEnabled;
@property (nonatomic) bool speechEnabled;
@property (nonatomic, copy) NSArray *tapBehaviors;

- (void).cxx_destruct;
- (double)autoHideTimeout;
- (double)autoScanningInterval;
- (double)autoTapTimeout;
- (id)cursorSizes;
- (id)description;
- (id)dictionaryRepresentation;
- (double)dwellDuration;
- (double)holdDuration;
- (double)ignoreRepeatDuration;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (double)longPressDuration;
- (unsigned long long)numberOfScanLoops;
- (double)pauseOnFirstItemInterval;
- (id)postActivationScanLocations;
- (double)repeatActionInterval;
- (id)scanningStyles;
- (void)setAutoHideTimeout:(double)arg1;
- (void)setAutoScanningInterval:(double)arg1;
- (void)setAutoTapTimeout:(double)arg1;
- (void)setCursorSizes:(id)arg1;
- (void)setDwellDuration:(double)arg1;
- (void)setHoldDuration:(double)arg1;
- (void)setIgnoreRepeatDuration:(double)arg1;
- (void)setLongPressDuration:(double)arg1;
- (void)setNumberOfScanLoops:(unsigned long long)arg1;
- (void)setPauseOnFirstItemInterval:(double)arg1;
- (void)setPostActivationScanLocations:(id)arg1;
- (void)setRepeatActionInterval:(double)arg1;
- (void)setScanningStyles:(id)arg1;
- (void)setSoundEffectsEnabled:(bool)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)setTapBehaviors:(id)arg1;
- (bool)soundEffectsEnabled;
- (bool)speechEnabled;
- (id)tapBehaviors;

@end
