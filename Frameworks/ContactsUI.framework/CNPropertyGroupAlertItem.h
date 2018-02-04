/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyGroupAlertItem : CNPropertyGroupItem

+ (id)emptyValueForLabel:(id)arg1;

- (id)_toneManager;
- (id)_vibrationManager;
- (bool)canRemove;
- (id)description;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (bool)isEquivalentToItem:(id)arg1 whenEditing:(bool)arg2;
- (bool)isValidValue:(id)arg1;
- (id)labeledValue;
- (id)replacementForInvalidValue:(id)arg1;
- (void)setLabeledValue:(id)arg1;

@end
