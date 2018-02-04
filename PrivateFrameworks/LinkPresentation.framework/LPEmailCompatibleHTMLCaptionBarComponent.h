/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPEmailCompatibleHTMLCaptionBarComponent : LPHTMLComponent {
    LPCaptionBarPresentationProperties * _presentationProperties;
    LPCaptionBarStyle * _style;
}

+ (id)baseRules;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4;

@end
