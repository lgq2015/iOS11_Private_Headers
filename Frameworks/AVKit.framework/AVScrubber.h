/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVScrubber : UISlider {
    bool  _collapsed;
    UIImageView * _currentThumbView;
    double  _currentValueChangedTime;
    <AVScrubberDelegate> * _delegate;
    bool  _didHaveLessThanFullScrubbingSpeedSinceTrackingBegin;
    float  _estimatedFrameRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    UISelectionFeedbackGenerator * _feedbackBehavior;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _hitRectInsets;
    bool  _included;
    NSArray * _loadedTimeRanges;
    UIView * _loadedTrackOverlayView;
    NSMutableArray * _previousScrubberVelocities;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousTouchLocationInView;
    float  _previousValue;
    double  _previousValueChangeTime;
    float  _rate;
    double  _resolution;
    long long  _scrubbingSpeed;
    bool  _shouldRecoverFromPrecisionScrubbingIfNeeded;
    bool  _slowKnobMovementDetected;
    double  _timestampWhenTrackingEnded;
    double  _trackingStartTime;
    NSTimer * _updateSlowKnobMovementDetectedTimer;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (nonatomic) UIImageView *currentThumbView;
@property (nonatomic) <AVScrubberDelegate> *delegate;
@property (nonatomic) float estimatedFrameRate;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, copy) NSArray *loadedTimeRanges;
@property (nonatomic, readonly) UIView *loadedTrackOverlayView;
@property (nonatomic, readonly) NSString *localizedScrubbingSpeedName;
@property (nonatomic, retain) NSMutableArray *previousScrubberVelocities;
@property (nonatomic) float rate;
@property (nonatomic) double resolution;
@property (nonatomic) long long scrubbingSpeed;
@property (nonatomic) bool shouldRecoverFromPrecisionScrubbingIfNeeded;
@property (nonatomic) bool slowKnobMovementDetected;
@property (nonatomic, readonly) double timeIntervalSinceTrackingEnded;
@property (nonatomic) double timestampWhenTrackingEnded;
@property (nonatomic, retain) NSTimer *updateSlowKnobMovementDetectedTimer;

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;

- (void).cxx_destruct;
- (void)_updateSlowKnobMovementDetected;
- (void)_updateSlowKnobMovementDetectedForTargetValue:(float)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (float)clampedEstimatedFrameRate;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (id)currentThumbView;
- (id)delegate;
- (void)endOrCancelTracking;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (float)estimatedFrameRate;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (void)layoutSubviews;
- (id)loadedTimeRanges;
- (id)loadedTrackOverlayView;
- (id)localizedScrubbingSpeedName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)previousScrubberVelocities;
- (float)rate;
- (double)resolution;
- (long long)scrubbingSpeed;
- (void)setCollapsed:(bool)arg1;
- (void)setCurrentThumbView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEstimatedFrameRate:(float)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setHitRectInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIncluded:(bool)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setPreviousScrubberVelocities:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setResolution:(double)arg1;
- (void)setScrubbingSpeed:(long long)arg1;
- (void)setShouldRecoverFromPrecisionScrubbingIfNeeded:(bool)arg1;
- (void)setSlowKnobMovementDetected:(bool)arg1;
- (void)setTimestampWhenTrackingEnded:(double)arg1;
- (void)setUpdateSlowKnobMovementDetectedTimer:(id)arg1;
- (bool)shouldRecoverFromPrecisionScrubbingIfNeeded;
- (bool)slowKnobMovementDetected;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (double)timeIntervalSinceTrackingEnded;
- (double)timestampWhenTrackingEnded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)updateSlowKnobMovementDetectedTimer;

@end
