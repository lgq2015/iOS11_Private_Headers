/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUContentSizeLayoutConstraint : NSLayoutConstraint {
    double  _defaultSizeConstant;
    double  _fontSizeMultiplier;
    bool  _isBaselineConstraint;
    bool  _isLineNumberConstraint;
    unsigned long long  _numberOfLines;
    MPUNotificationObserver * _preferredContentSizeDidChangeObserver;
    UILabel * _targetLabel;
    NSString * _textStyle;
    double  _textStyleDefaultLeading;
}

@property (nonatomic) double defaultSizeConstant;
@property (nonatomic) double fontSizeMultiplier;
@property (nonatomic, copy) NSString *textStyle;

+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 multiplier:(double)arg6 nonStandardLeading:(double)arg7;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 nonStandardLeading:(double)arg6;
+ (id)constraintWithAutoupdatingBaselineOfView:(id)arg1 toView:(id)arg2 attribute:(long long)arg3 withTextStyle:(id)arg4 nonStandardLeading:(double)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 autoupdatingConstantFromLabel:(id)arg7 textStyle:(id)arg8 numberOfLines:(unsigned long long)arg9;
+ (id)contentSizeAutoupdatingConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 textStyle:(id)arg7 defaultSizeConstant:(double)arg8;

- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (double)defaultSizeConstant;
- (double)fontSizeMultiplier;
- (void)setDefaultSizeConstant:(double)arg1;
- (void)setFontSizeMultiplier:(double)arg1;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;

@end
