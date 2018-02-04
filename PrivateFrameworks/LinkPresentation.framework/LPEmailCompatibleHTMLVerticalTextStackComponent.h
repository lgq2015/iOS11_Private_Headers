/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPEmailCompatibleHTMLVerticalTextStackComponent : LPHTMLComponent {
    LPCaptionBarPresentationProperties * _presentationProperties;
    LPVerticalTextStackViewStyle * _style;
}

+ (id)baseRules;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)componentForRow:(id)arg1 style:(id)arg2 name:(id)arg3;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4;

@end
