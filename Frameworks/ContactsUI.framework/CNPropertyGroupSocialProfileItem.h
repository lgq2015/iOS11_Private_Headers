/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNSocialProfile *profile;

+ (id)emptyValueForLabel:(id)arg1;

- (id)defaultActionURL;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (id)editingStringValue;
- (bool)isEquivalentToItem:(id)arg1;
- (id)profile;
- (id)valueForDisplayString:(id)arg1;

@end
