/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIMiniMonthView : EKUIYearMonthView {
    NSDateComponents * _dateComponents;
}

@property (nonatomic, retain) NSDateComponents *dateComponents;

+ (double)heightForInterfaceOrientation:(long long)arg1;

- (void).cxx_destruct;
- (double)_gridOfDaysHeightAdjustment;
- (double)_gridOfDaysYAdjustment;
- (double)circleFrameXAdjustment;
- (double)circleFrameYAdjustment;
- (double)circleSize;
- (double)circleSizeForDoubleDigit;
- (id)dateComponents;
- (id)dayColor;
- (id)dayColorKey;
- (id)dayNumberFont;
- (double)dayTextSize;
- (double)daysXAdjustLeft;
- (double)daysYAdjustTop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForGridOfDays:(bool)arg1;
- (id)headerFont;
- (double)headerFontKerning;
- (double)headerFontMaxSize;
- (double)headerFontMinSize;
- (double)headerXAdjust;
- (id)initWithCalendar:(id)arg1 dateComponents:(id)arg2;
- (bool)opaque;
- (void)setDateComponents:(id)arg1;
- (bool)showMonthName;
- (bool)showWeekDayInitials;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)todayNumberFont;
- (double)todayNumberKerning;
- (double)todayTextSize;
- (double)todayTextYAdjustment;
- (bool)vibrant;
- (double)weekDayInitialsAdjustLeft;
- (double)weekDayInitialsAdjustTop;
- (id)weekDayInitialsFont;
- (double)xInset;
- (double)xSpacing;
- (double)yInset;
- (double)ySpacing;

@end
