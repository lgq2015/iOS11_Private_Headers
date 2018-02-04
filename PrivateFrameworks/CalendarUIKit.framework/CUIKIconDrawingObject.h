/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKIconDrawingObject : NSObject {
    NSCalendar * _calendar;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    id /* block */  _dateNameBlock;
    UIFont * _dateNameFont;
    long long  _dateNameFormatType;
    NSString * _dayNumber;
    long long  _format;
}

@property (retain) NSCalendar *calendar;
@property struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, readonly) double dateNameBaselineVerticalInset;
@property (copy) id /* block */ dateNameBlock;
@property (nonatomic, readonly) UIFont *dateNameFont;
@property long long dateNameFormatType;
@property (nonatomic, readonly) double dateNameHorizontalInset;
@property (copy) NSString *dayNumber;
@property (nonatomic, readonly) double dayNumberBaselineVerticalInset;
@property (nonatomic, readonly) UIFont *dayNumberFont;
@property (nonatomic, readonly) double dayNumberTrackingValue;
@property long long format;
@property (nonatomic, readonly) double minDateNameFontScale;
@property (nonatomic, readonly) double minDateNameLetterSpacing;
@property (nonatomic, readonly) double minFullDateNameFontScale;

+ (id)_dateNamesForCalendar:(id)arg1 type:(long long)arg2;
+ (id)_dateNamesForDateFormatter:(id)arg1 type:(long long)arg2;
+ (id)colorForDayOfWeek;
+ (id)countriesRequiringBlackDayOfWeek;
+ (bool)isBlackDayOfWeekRequiredForLocale:(id)arg1;

- (void).cxx_destruct;
- (void)_drawDateName;
- (void)_drawDayNumber;
- (void)_drawDayNumberForHomeScreenStyledIcon;
- (void)_drawDayNumberForNotificationIcon;
- (bool)_shouldUseJ207SmallerFont:(id)arg1;
- (id)_systemG2FromFont:(id)arg1;
- (id)calendar;
- (struct CGSize { double x1; double x2; })canvasSize;
- (double)dateNameBaselineVerticalInset;
- (id /* block */)dateNameBlock;
- (id)dateNameFont;
- (id)dateNameFont:(id)arg1;
- (id)dateNameFont:(id)arg1 size:(double)arg2;
- (double)dateNameFontSizeForName:(id)arg1;
- (long long)dateNameFormatType;
- (double)dateNameHorizontalInset;
- (id)dayNumber;
- (double)dayNumberBaselineVerticalInset;
- (id)dayNumberFont;
- (double)dayNumberTrackingValue;
- (void)draw;
- (long long)format;
- (id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateNameBlock:(id /* block */)arg3 dateNameFormatType:(long long)arg4 canvasSize:(struct CGSize { double x1; double x2; })arg5 format:(long long)arg6;
- (double)minDateNameFontScale;
- (double)minDateNameLetterSpacing;
- (double)minFullDateNameFontScale;
- (double)resizeAttributedString:(id)arg1 withDateName:(id)arg2 font:(id)arg3 ctx:(id)arg4 maxSize:(struct CGSize { double x1; double x2; })arg5;
- (void)setCalendar:(id)arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDateNameBlock:(id /* block */)arg1;
- (void)setDateNameFormatType:(long long)arg1;
- (void)setDayNumber:(id)arg1;
- (void)setFormat:(long long)arg1;

@end
