/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPreferenceContact : PKPaymentPreference {
    NSString * _addExistingTitle;
    NSString * _addNewTitle;
    NSOrderedSet * _contactKeys;
    NSString * _editExistingTitle;
    bool  _showPhoneticName;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *addExistingTitle;
@property (nonatomic, copy) NSString *addNewTitle;
@property (nonatomic, copy) NSString *contactKey;
@property (nonatomic, copy) NSOrderedSet *contactKeys;
@property (nonatomic, copy) NSString *editExistingTitle;
@property (nonatomic, retain) PKPaymentOptionsRecents *paymentOptionsRecents;
@property (nonatomic) bool showPhoneticName;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (void)_removeDuplicates;
- (id)addExistingTitle;
- (id)addNewTitle;
- (id)contactKey;
- (id)contactKeys;
- (id)editExistingTitle;
- (id)errorsForPreference:(id)arg1;
- (long long)indexOfContact:(id)arg1;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(bool)arg4;
- (void)mergeRecentsAndMeCard;
- (id)paymentOptionsRecents;
- (bool)preferenceObject:(id)arg1 representsContact:(id)arg2;
- (void)setAddExistingTitle:(id)arg1;
- (void)setAddNewTitle:(id)arg1;
- (void)setContactKey:(id)arg1;
- (void)setContactKeys:(id)arg1;
- (void)setEditExistingTitle:(id)arg1;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (void)setPaymentOptionsRecents:(id)arg1;
- (void)setShowPhoneticName:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)showPhoneticName;
- (bool)supportsDeletion;
- (unsigned long long)type;

@end
