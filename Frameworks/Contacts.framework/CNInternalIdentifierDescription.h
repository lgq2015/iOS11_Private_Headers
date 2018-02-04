/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNInternalIdentifierDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void*)ABValueFromCNValue:(id)arg1;
- (id)CNValueForContact:(id)arg1;
- (id)CNValueFromABValue:(void*)arg1;
- (bool)abPropertyID:(int*)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (Class)valueClass;

@end
