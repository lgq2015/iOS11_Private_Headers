/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTFontProvider : NSObject {
    bool  _isDefault;
}

+ (id)defaultFontProvider;
+ (id)preferredFontProvider;

- (id)initForProvidingDefaultFonts:(bool)arg1;
- (id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;
- (id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3;

@end
