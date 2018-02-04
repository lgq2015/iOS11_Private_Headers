/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISash : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) SAUIColor *backgroundColor;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIImageResource *image;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIColor *textColor;
@property (nonatomic, copy) NSString *title;

+ (id)sash;
+ (id)sashWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationBundleIdentifier;
- (id)backgroundColor;
- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)textColor;
- (id)title;

@end
