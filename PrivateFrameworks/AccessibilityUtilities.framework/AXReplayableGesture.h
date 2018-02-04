/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXReplayableGesture : NSObject <NSCoding> {
    NSArray * _allEvents;
    bool  _arePointsDeviceRelative;
}

+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (bool)arePointsDeviceRelative;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfEvents;
- (struct CGPoint { double x1; double x2; })pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (double)timeAtEventIndex:(unsigned long long)arg1;
- (void)updateForLandscape:(bool)arg1;

@end
