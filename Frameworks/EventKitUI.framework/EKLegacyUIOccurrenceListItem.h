/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKLegacyUIOccurrenceListItem : UIView {
    unsigned int  _cancelled;
    unsigned int  _declined;
    unsigned int  _designator;
    UIImage * _dot;
    UIColor * _dotColor;
    unsigned int  _indentsWithoutDot;
    unsigned int  _isAllDay;
    unsigned int  _isBirthday;
    unsigned int  _isEndDate;
    bool  _isSelected;
    NSString * _location;
    unsigned int  _needsReply;
    unsigned int  _showsColors;
    unsigned int  _tentative;
    NSString * _timeString;
    NSString * _title;
}

+ (id)_allDayLocalizedString;
+ (void)_calculateWidths;
+ (id)_cellEndsLocalizedString;
+ (void)_invalidateWidths;
+ (id)_noonLocalizedString;
+ (double)defaultHeight;
+ (double)hourWidth;
+ (double)timeWidthIncludingDots:(bool)arg1;
+ (double)xMidpointForCalendarDot;

- (void).cxx_destruct;
- (id)_dot;
- (id)_selectedBackgroundImage;
- (unsigned int)designator;
- (void)drawBoldText:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forWidth:(double)arg3 font:(id)arg4 lineBreakMode:(long long)arg5 staticColor:(bool)arg6;
- (void)drawDeemphasizedText:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forWidth:(double)arg3 font:(id)arg4 lineBreakMode:(long long)arg5 staticColor:(bool)arg6;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawText:(id)arg1 withDefaultColor:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 forWidth:(double)arg4 font:(id)arg5 lineBreakMode:(long long)arg6 staticColor:(bool)arg7;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAllDay;
- (bool)isCancelled;
- (bool)isHighlighted;
- (id)outlineImageWithColor:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setDeclined:(bool)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setDotColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIndentsForMissingDot:(bool)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setIsBirthday:(bool)arg1;
- (void)setIsEndDate:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNeedsReply:(bool)arg1;
- (void)setShowsColors:(bool)arg1;
- (void)setTentative:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)setUpStaticDrawingColor;
- (bool)showDisclosure;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (void)updateWithEvent:(id)arg1;

@end
