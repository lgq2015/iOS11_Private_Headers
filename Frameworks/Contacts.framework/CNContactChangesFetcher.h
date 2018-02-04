/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactChangesFetcher : NSObject {
    NSSet * _identifiers;
    NSSet * _keysToFetch;
    bool  _unify;
}

@property (nonatomic, retain) NSSet *identifiers;
@property (nonatomic, retain) NSSet *keysToFetch;
@property (nonatomic) bool unify;

- (void).cxx_destruct;
- (id)identifiers;
- (id)keysToFetch;
- (void)setIdentifiers:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setUnify:(bool)arg1;
- (bool)unify;

@end
