/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKVibrantLabel : UILabel {
    bool  _enableVibrancy;
    unsigned long long  _style;
}

@property bool enableVibrancy;
@property (nonatomic) unsigned long long style;

+ (id)textColorForStyle:(unsigned long long)arg1;
+ (id)vibrantTextColorForStyle:(unsigned long long)arg1;

- (id)attributedStringForRichText:(id)arg1;
- (bool)enableVibrancy;
- (id)init;
- (bool)isVibrancyEnabled;
- (void)setEnableVibrancy:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setVibrancyEnabled:(bool)arg1;
- (id)stringForFormattedText:(id)arg1;
- (unsigned long long)style;
- (void)updateWithFormattedText:(id)arg1;
- (void)updateWithRichText:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
