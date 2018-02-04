/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayOccurrenceContentView : UIView {
    bool  _allDay;
    bool  _allDayDrawingStyle;
    NSAttributedString * _attributedContentString;
    bool  _birthday;
    double  _cachedLineHeight;
    UIFont * _cachedPrimaryFont;
    UIFont * _cachedSecondaryFont;
    double  _cachedSecondaryLineHeight;
    bool  _cancelled;
    UIColor * _color;
    bool  _declined;
    unsigned long long  _fontCompressionDegree;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fullTextRect;
    bool  _hideText;
    bool  _invalidatedContentString;
    NSString * _location;
    bool  _needsReply;
    int  _occurrenceBackgroundStyle;
    bool  _reduceProcessingForAnimation;
    UIColor * _secondaryTextColor;
    bool  _selected;
    UIColor * _statusTextColor;
    bool  _tentative;
    UIColor * _textBackgroundColor;
    double  _textEndY;
    NSString * _time;
    UIColor * _timeTextColor;
    NSString * _title;
    struct CGPoint { 
        double x; 
        double y; 
    }  _titleEndPoint;
    NSIndexSet * _titleMetrics;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleRect;
    UIColor * _titleTextColor;
    bool  _usesSmallText;
}

@property (getter=isAllDay, nonatomic) bool allDay;
@property (getter=isAllDayDrawingStyle, nonatomic) bool allDayDrawingStyle;
@property (getter=isBirthday, nonatomic) bool birthday;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, retain) UIColor *color;
@property (getter=isDeclined, nonatomic) bool declined;
@property (nonatomic) bool hideText;
@property (nonatomic, copy) NSString *location;
@property (nonatomic) bool needsReply;
@property (nonatomic) int occurrenceBackgroundStyle;
@property (nonatomic) bool reduceProcessingForAnimation;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic) bool selected;
@property (getter=isTentative, nonatomic) bool tentative;
@property (nonatomic, retain) UIColor *textBackgroundColor;
@property (nonatomic, copy) NSString *time;
@property (nonatomic, retain) UIColor *timeTextColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic) bool usesSmallText;

+ (void)_getLanguageAwareOutsets;
+ (double)_minimumPrimaryFontLineHeightUsingSmallText:(bool)arg1;
+ (double)attributedStringMinimumLineHeightUsingSmallText:(bool)arg1;
+ (id)defaultPrimaryTextFont;
+ (id)defaultSecondaryTextFont;
+ (id)defaultSmallPrimaryTextFont;
+ (Class)layerClass;
+ (double)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(bool)arg2;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(bool)arg1;
+ (bool)shouldShowTimeStringForOccurrence:(id)arg1;

- (void).cxx_destruct;
- (double)_attributedStringMinimumLineHeightBasedOnCurrentFontMetrics;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForText;
- (void)_invalidateCachedFonts;
- (void)_invalidateMetrics;
- (double)_primaryFontLineHeight;
- (id)_primaryTextFont;
- (double)_secondaryFontLineHeight;
- (id)_secondaryText;
- (id)_secondaryTextFont;
- (struct CGSize { double x1; double x2; })_spaceForText;
- (id)_statusText;
- (id)_statusTextFont;
- (id)_timeText;
- (id)_timeTextFont;
- (id)attributedContentString;
- (id)attributedContentStringUnconstrained:(bool)arg1;
- (id)birthdayIcon;
- (double)bottomTextOutset;
- (id)color;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hideText;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateCachedFontMetrics;
- (bool)isAllDay;
- (bool)isAllDayDrawingStyle;
- (bool)isBirthday;
- (bool)isCancelled;
- (bool)isDeclined;
- (bool)isTentative;
- (id)location;
- (double)minimumNaturalHeightAllText;
- (bool)needsReply;
- (int)occurrenceBackgroundStyle;
- (bool)reduceProcessingForAnimation;
- (id)secondaryTextColor;
- (bool)selected;
- (void)setAllDay:(bool)arg1;
- (void)setAllDayDrawingStyle:(bool)arg1;
- (void)setBirthday:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCancelled:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setDeclined:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHideText:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsReply:(bool)arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setReduceProcessingForAnimation:(bool)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTentative:(bool)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setUsesSmallText:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusTextColor;
- (id)strikethroughColor;
- (id)stringDrawingContext;
- (id)textBackgroundColor;
- (id)time;
- (id)timeTextColor;
- (id)title;
- (id)titleTextColor;
- (double)topTextOutset;
- (bool)usesSmallText;

@end
