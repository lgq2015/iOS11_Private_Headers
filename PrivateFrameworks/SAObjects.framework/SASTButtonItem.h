/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic, retain) <SASTTemplateAction> *action;
@property (nonatomic) bool centered;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SAUIDecoratedText *decoratedLabel;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUILocalImageResource *localImageResource;
@property (nonatomic, copy) NSString *position;
@property (readonly) Class superclass;

+ (id)buttonItem;
+ (id)buttonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (bool)centered;
- (id)decoratedLabel;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)localImageResource;
- (id)position;
- (void)setAction:(id)arg1;
- (void)setCentered:(bool)arg1;
- (void)setDecoratedLabel:(id)arg1;
- (void)setLocalImageResource:(id)arg1;
- (void)setPosition:(id)arg1;

@end
