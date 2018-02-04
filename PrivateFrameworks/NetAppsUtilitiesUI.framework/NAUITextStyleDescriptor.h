/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

@interface NAUITextStyleDescriptor : NSObject <NSCopying> {
    bool  _allowsAccessibilitySizes;
    bool  _allowsSmallSizes;
    unsigned int  _symbolicTraits;
    NSString * _textStyle;
}

@property (nonatomic, readonly) bool allowsAccessibilitySizes;
@property (nonatomic, readonly) bool allowsSmallSizes;
@property (nonatomic, readonly) unsigned int symbolicTraits;
@property (nonatomic, readonly, copy) NSString *textStyle;

+ (id)defaultFontForTextStyleDescriptor:(id)arg1;
+ (id)descriptorWithTextStyle:(id)arg1;
+ (id)fontWithTextStyleDescriptor:(id)arg1;
+ (id)na_identity;

- (void).cxx_destruct;
- (bool)allowsAccessibilitySizes;
- (bool)allowsSmallSizes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptorByAddingSymbolicTraits:(unsigned int)arg1 removingSymbolicTraits:(unsigned int)arg2;
- (id)descriptorByDisallowingAccessibilitySizes;
- (id)descriptorByDisallowingSmallSizes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 allowsAccessibilitySizes:(bool)arg3 allowsSmallSizes:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned int)symbolicTraits;
- (id)textStyle;

@end
