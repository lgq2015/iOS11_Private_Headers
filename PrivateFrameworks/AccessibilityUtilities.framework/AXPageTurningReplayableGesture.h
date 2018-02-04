/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXPageTurningReplayableGesture : AXReplayableGesture {
    bool  _isLandscape;
    bool  _isLeftToRightSwipe;
}

@property (nonatomic) bool isLandscape;
@property (nonatomic) bool isLeftToRightSwipe;

- (bool)arePointsDeviceRelative;
- (void)encodeWithCoder:(id)arg1;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (id)initForLeftToRightSwipe:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isLandscape;
- (bool)isLeftToRightSwipe;
- (unsigned long long)numberOfEvents;
- (struct CGPoint { double x1; double x2; })pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (void)setIsLandscape:(bool)arg1;
- (void)setIsLeftToRightSwipe:(bool)arg1;
- (double)timeAtEventIndex:(unsigned long long)arg1;
- (void)updateForLandscape:(bool)arg1;

@end
