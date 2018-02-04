/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactFetchRequest : NSObject <NSSecureCoding> {
    bool  _allowsBatching;
    unsigned long long  _batchSize;
    bool  _disallowsEncodedFetch;
    NSArray * _keysToFetch;
    bool  _mutableObjects;
    bool  _onlyMainStore;
    NSPredicate * _predicate;
    bool  _rankSort;
    long long  _sortOrder;
    bool  _unifyResults;
}

@property (nonatomic) bool allowsBatching;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) bool disallowsEncodedFetch;
@property (nonatomic, copy) NSArray *keysToFetch;
@property (nonatomic) bool mutableObjects;
@property (nonatomic) bool onlyMainStore;
@property (nonatomic, copy) NSPredicate *predicate;
@property (nonatomic) bool rankSort;
@property (nonatomic) long long sortOrder;
@property (nonatomic) bool unifyResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsBatching;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disallowsEncodedFetch;
- (id)effectiveKeysToFetch;
- (id)effectivePredicate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeysToFetch:(id)arg1;
- (id)keysToFetch;
- (bool)mutableObjects;
- (bool)onlyMainStore;
- (id)predicate;
- (bool)rankSort;
- (bool)requiresMeContactAuthorization;
- (void)setAllowsBatching:(bool)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setDisallowsEncodedFetch:(bool)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setMutableObjects:(bool)arg1;
- (void)setOnlyMainStore:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRankSort:(bool)arg1;
- (void)setSortOrder:(long long)arg1;
- (void)setUnifyResults:(bool)arg1;
- (long long)sortOrder;
- (bool)unifyResults;

@end
