/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKSegmentedControl : UIControl {
    int  _segmentedControlStyle;
    bool  mAllowsEmptySelection;
    bool  mAllowsMultipleSelection;
    NSMutableArray * mButtonSegments;
    UIFont * mFont;
    NSMutableArray * mItems;
    long long  mLastPressedSegmentIndex;
    NSIndexSet * mSelectedSegmentIndices;
    UIColor * mSelectedTintColor;
    int  mStyle;
    void * mUserData;
}

@property (nonatomic) bool allowsEmptySelection;
@property (nonatomic) bool allowsMultipleSelection;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) long long lastPressedSegmentIndex;
@property (nonatomic, readonly) unsigned long long numberOfSegments;
@property (nonatomic, readonly) int segmentedControlStyle;
@property (nonatomic, copy) NSIndexSet *selectedSegmentIndices;
@property (nonatomic, retain) UIColor *selectedTintColor;
@property (nonatomic) void*userData;

- (bool)allowsEmptySelection;
- (bool)allowsMultipleSelection;
- (void)dealloc;
- (id)font;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 style:(int)arg2;
- (id)initWithItems:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (long long)lastPressedSegmentIndex;
- (unsigned long long)numberOfSegments;
- (id)p_backgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (id)p_fullBleedBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (id)p_losengeBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (void)p_setButtonAttributedTitle:(id)arg1 color:(id)arg2 forState:(unsigned long long)arg3 button:(id)arg4;
- (void)p_setSegmentedControlStyle:(int)arg1;
- (void)p_setSelectedTintColor:(id)arg1;
- (void)p_updateSegmentProperties;
- (unsigned long long)segmentWithTag:(long long)arg1;
- (int)segmentedControlStyle;
- (id)selectedSegmentIndices;
- (id)selectedTintColor;
- (void)setAllowsEmptySelection:(bool)arg1;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 forSegment:(unsigned long long)arg3;
- (void)setEnabled:(bool)arg1 forSegment:(unsigned long long)arg2;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setSegmentedControlStyle:(int)arg1;
- (void)setSelectedSegmentIndices:(id)arg1;
- (void)setSelectedTintColor:(id)arg1;
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setUserData:(void*)arg1;
- (void)sizeToFit;
- (void)sizeToFitWidth:(float)arg1;
- (long long)tagForSegment:(unsigned long long)arg1;
- (void)tappedSegment:(id)arg1;
- (void)tintColorDidChange;
- (void*)userData;

@end
