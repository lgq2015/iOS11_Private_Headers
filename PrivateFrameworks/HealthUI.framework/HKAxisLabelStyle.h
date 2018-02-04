/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxisLabelStyle : NSObject <NSCopying> {
    UIFont * _font;
    long long  _horizontalAlignment;
    <HKNumberFormatter> * _numberFormatter;
    UIColor * _textColor;
    long long  _verticalAlignment;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic, retain) <HKNumberFormatter> *numberFormatter;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic) long long verticalAlignment;

+ (id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4;
+ (id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 numberFormatter:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)font;
- (long long)horizontalAlignment;
- (id)numberFormatter;
- (void)setFont:(id)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (id)textColor;
- (long long)verticalAlignment;

@end
