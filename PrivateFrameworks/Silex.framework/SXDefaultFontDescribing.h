/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDefaultFontDescribing : NSObject <SXTextStyleFontDescribing> {
    <SXTextStyleFontAttributes> * _fontAttributes;
    NSString * _fontName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXTextStyleFontAttributes> *fontAttributes;
@property (nonatomic, readonly) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fontAttributes;
- (id)fontName;
- (id)init;

@end
