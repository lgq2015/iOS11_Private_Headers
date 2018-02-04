/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimeIntervalLabel : UIView {
    double  _currentTextTime;
    id /* block */  _didResizeHandler;
    double  _digitWidth;
    NSMutableArray * _digits;
    CLKFont * _font;
    bool  _frozen;
    NSMutableDictionary * _images;
    bool  _isShowingDigits;
    bool  _isSigned;
    UILabel * _label;
    bool  _labelWasSized;
    UILabel * _prefix;
    bool  _showSubSeconds;
    double  _staticLabelWidth;
    long long  _style;
    UILabel * _suffix;
    bool  _suffixSmallCaps;
    NSString * _text;
    struct CGSize { 
        double width; 
        double height; 
    }  _textSize;
    double  _time;
}

@property (nonatomic, readonly) double actualWidth;
@property (nonatomic, copy) id /* block */ didResizeHandler;
@property (nonatomic, retain) CLKFont *font;
@property (nonatomic) bool frozen;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic, readonly) bool showSubSeconds;
@property (nonatomic, copy) NSString *suffix;
@property (nonatomic) bool suffixSmallCaps;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } textSize;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (id)_cachedImageForDigit:(unsigned long long)arg1;
- (void)_invalidateDigitImages;
- (double)_labelWidth;
- (id)_localImageForDigit:(unsigned long long)arg1;
- (void)_localeChanged;
- (double)actualWidth;
- (void)calculateMetrics;
- (void)createDigitViews;
- (void)dealloc;
- (id /* block */)didResizeHandler;
- (id)font;
- (void)forceTime:(double)arg1;
- (id)formatTimeInterval;
- (bool)frozen;
- (id)getTimeText;
- (id)initWithMonospacedFontOfSize:(double)arg1;
- (id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2 style:(long long)arg3;
- (id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2 style:(long long)arg3 signed:(bool)arg4;
- (void)layoutSubviews;
- (id)prefix;
- (void)recalculateSize;
- (void)setDidResizeHandler:(id /* block */)arg1;
- (void)setFont:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setLabelText:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setSuffix:(id)arg1;
- (void)setSuffixSmallCaps:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTime:(double)arg1;
- (bool)shouldShowDigits;
- (bool)showSubSeconds;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFitLabelIfNeeded;
- (id)suffix;
- (bool)suffixSmallCaps;
- (id)textColor;
- (struct CGSize { double x1; double x2; })textSize;
- (double)time;

@end
