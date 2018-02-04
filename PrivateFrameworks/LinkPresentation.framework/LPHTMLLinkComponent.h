/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPHTMLLinkComponent : LPHTMLComponent <DOMEventListener>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)additionalRulesForStyle:(id)arg1;
+ (id)baseRules;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;

- (void)handleEvent:(id)arg1;
- (id)initWithURL:(id)arg1 generator:(id)arg2;

@end