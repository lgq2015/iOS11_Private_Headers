/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding> {
    UIColor * _backgroundColor;
    UIColor * _highlightedTextColor;
    UIColor * _primaryTextColor;
    UIColor * _secondaryTextColor;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIColor *highlightedTextColor;
@property (nonatomic, copy) UIColor *primaryTextColor;
@property (nonatomic, readonly) long long schemeStyle;
@property (nonatomic, copy) UIColor *secondaryTextColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)highlightedTextColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorSchemeDictionary:(id)arg1;
- (id)primaryTextColor;
- (long long)schemeStyle;
- (id)secondaryTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;

@end
