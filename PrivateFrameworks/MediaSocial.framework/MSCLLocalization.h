/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLLocalization : NSObject {
    SKUILocalizedStringDictionary * _localizedStrings;
}

+ (id)defaultLocalization;

- (void).cxx_destruct;
- (id)localizedStringForCategoryName:(id)arg1 context:(id)arg2;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 context:(id)arg3;

@end
