/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKChronoPalette : NSObject {
    UIColor * _alternativeTickColor;
    UIColor * _backgroundColor;
    UIColor * _chronoHandColor;
    UIColor * _dateComplicationColor;
    UIColor * _foregroundColor;
    UIColor * _glyphBackgroundColor;
    UIColor * _glyphColor;
    UIColor * _inlayColor;
    UIColor * _labelColor;
    double  _largeTickValue;
    unsigned long long  _paletteColor;
    bool  _showsShadows;
    double  _smallTickValue;
    UIColor * _tickColor;
}

@property (nonatomic, readonly) UIColor *alternativeTickColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *chronoHandColor;
@property (nonatomic, readonly) UIColor *dateComplicationColor;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, readonly) UIColor *glyphBackgroundColor;
@property (nonatomic, readonly) UIColor *glyphColor;
@property (nonatomic, readonly) UIColor *inlayColor;
@property (nonatomic, readonly) UIColor *labelColor;
@property (nonatomic, readonly) double largeTickValue;
@property (nonatomic, readonly) bool showsShadows;
@property (nonatomic, readonly) double smallTickValue;
@property (nonatomic, readonly) UIColor *tickColor;

+ (id)interpolationFromPalette:(id)arg1 toPalette:(id)arg2 fraction:(double)arg3;
+ (id)paletteWithColor:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_initWithColor:(unsigned long long)arg1;
- (id)alternativeTickColor;
- (id)backgroundColor;
- (id)chronoHandColor;
- (id)dateComplicationColor;
- (id)foregroundColor;
- (id)glyphBackgroundColor;
- (id)glyphColor;
- (id)inlayColor;
- (id)labelColor;
- (double)largeTickValue;
- (bool)showsShadows;
- (double)smallTickValue;
- (id)tickColor;

@end
