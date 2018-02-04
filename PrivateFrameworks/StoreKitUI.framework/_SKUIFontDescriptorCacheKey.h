/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface _SKUIFontDescriptorCacheKey : NSObject {
    NSString * _sizeCategory;
    const struct __CFString { } * _textStyle;
}

@property (nonatomic, readonly) NSString *sizeCategory;
@property (nonatomic, readonly) const struct __CFString { }*textStyle;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTextStyle:(const struct __CFString { }*)arg1 sizeCategory:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sizeCategory;
- (const struct __CFString { }*)textStyle;

@end
