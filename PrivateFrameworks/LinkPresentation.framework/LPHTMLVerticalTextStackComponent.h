/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPHTMLVerticalTextStackComponent : LPHTMLComponent {
    LPCaptionBarPresentationProperties * _presentationProperties;
    LPVerticalTextStackViewStyle * _style;
}

+ (id)additionalRulesForStyle:(id)arg1;
+ (id)baseRules;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)componentForRow:(id)arg1 style:(id)arg2 name:(id)arg3 firstLineLeading:(double)arg4;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4;

@end
