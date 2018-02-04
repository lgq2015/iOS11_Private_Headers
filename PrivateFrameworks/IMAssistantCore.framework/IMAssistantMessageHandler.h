/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantMessageHandler : NSObject {
    CNContactStore * _contactStore;
    NSArray * _keysToFetch;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) NSArray *keysToFetch;

- (void).cxx_destruct;
- (id)IMPersonForCNContact:(id)arg1;
- (id)_initWithContactStore:(id)arg1 keysToFetch:(id)arg2;
- (id)contactMatchingIdentifier:(id)arg1 forPerson:(id)arg2;
- (id)contactStore;
- (id)contactsMatchingINPerson:(id)arg1;
- (id)contactsMatchingPredicate:(id)arg1 forPerson:(id)arg2;
- (id)fetchMatchingContactsForINPerson:(id)arg1;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2;
- (id)keysToFetch;

@end
