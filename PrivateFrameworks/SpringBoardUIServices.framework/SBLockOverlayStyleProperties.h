/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBLockOverlayStyleProperties : NSObject {
    double  _blurRadius;
    UIColor * _primaryColor;
    long long  _quality;
    UIColor * _secondaryColor;
    _UIBackdropViewSettings * _settings;
    unsigned long long  _style;
    double  _tintAlpha;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) double blurRadius;
@property (nonatomic, readonly) long long graphicsQuality;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) double tintAlpha;
@property (nonatomic, readonly) UIColor *tintColor;

- (void).cxx_destruct;
- (void)_configure;
- (id)_settingsForStyle;
- (id)_stringForQuality;
- (id)_stringForStyle;
- (double)blurRadius;
- (id)description;
- (long long)graphicsQuality;
- (id)initWithStyle:(unsigned long long)arg1 quality:(long long)arg2;
- (unsigned long long)style;
- (double)tintAlpha;
- (id)tintColor;

@end
