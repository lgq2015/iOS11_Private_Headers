/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCustomFormatList : TSPObject <NSCopying> {
    NSMutableDictionary * _formatsByKeyDictionary;
    bool  _importing;
    bool  _importingDone;
    TSUNoCopyDictionary * _indexesByKey;
    TSUNoCopyDictionary * _keysByFormatDictionary;
    TSUNoCopyDictionary * _keysByFormatWithNameStemMatching;
    TSUSparseArray * _keysByIndex;
    NSMutableSet * _namesList;
    bool  _upgrading;
    bool  _upgradingDone;
}

@property (nonatomic, retain) NSMutableDictionary *formatsByKeyDictionary;
@property (nonatomic) bool importing;
@property (nonatomic) bool importingDone;
@property (nonatomic, retain) TSUNoCopyDictionary *indexesByKey;
@property (nonatomic, retain) TSUNoCopyDictionary *keysByFormatDictionary;
@property (nonatomic, retain) TSUNoCopyDictionary *keysByFormatWithNameStemMatching;
@property (nonatomic, retain) TSUSparseArray *keysByIndex;
@property (nonatomic, retain) NSMutableSet *namesList;
@property (nonatomic) bool upgrading;
@property (nonatomic) bool upgradingDone;

+ (void)archiveKeys:(id)arg1 message:(struct RepeatedPtrField<TSP::UUID> { void **x1; int x2; int x3; int x4; }*)arg2;
+ (id)unarchiveKeys:(const struct RepeatedPtrField<TSP::UUID> { void **x1; int x2; int x3; int x4; }*)arg1;

- (void).cxx_destruct;
- (id)addCustomFormat:(id)arg1 oldKey:(id)arg2 fuzzyNameMatching:(bool)arg3;
- (void)addCustomFormatForUpgrade:(id)arg1 legacyKey:(unsigned int)arg2;
- (id)addImportedCustomFormat:(id)arg1;
- (id)addedKeysRelativeTo:(id)arg1;
- (id)allKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)customFormatForKey:(id)arg1;
- (id)description;
- (id)formatsByKeyDictionary;
- (bool)hasFormatNamed:(id)arg1;
- (bool)importing;
- (bool)importingDone;
- (id)indexesByKey;
- (id)initWithContext:(id)arg1;
- (unsigned long long)inspectorIndexForKey:(id)arg1;
- (id)keyForCustomFormat:(id)arg1;
- (id)keyForInspectorIndex:(unsigned long long)arg1;
- (id)keysByFormatDictionary;
- (id)keysByFormatWithNameStemMatching;
- (id)keysByIndex;
- (void)loadFromUnarchiver:(id)arg1;
- (id)namesList;
- (void)p_addCustomFormatToNameStemDict:(id)arg1 key:(id)arg2;
- (id)p_keyForFormatUsingNameStem:(id)arg1;
- (void)p_removeCustomFormatFromNameStemDict:(id)arg1 key:(id)arg2;
- (void)p_setCustomFormat:(id)arg1 key:(id)arg2;
- (void)p_setCustomFormat:(id)arg1 key:(id)arg2 legacyKey:(unsigned int)arg3;
- (bool)p_validateNameStemCount;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg1;
- (void)removeCustomFormatForKey:(id)arg1;
- (void)removeCustomFormatsForKeys:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setFormatsByKeyDictionary:(id)arg1;
- (void)setImporting:(bool)arg1;
- (void)setImportingDone:(bool)arg1;
- (void)setIndexesByKey:(id)arg1;
- (void)setKeysByFormatDictionary:(id)arg1;
- (void)setKeysByFormatWithNameStemMatching:(id)arg1;
- (void)setKeysByIndex:(id)arg1;
- (void)setNamesList:(id)arg1;
- (void)setUpgrading:(bool)arg1;
- (void)setUpgradingDone:(bool)arg1;
- (void)updateCustomFormat:(id)arg1 oldKey:(id)arg2;
- (id)upgradedCustomFormatKeyForLegacyID:(unsigned int)arg1;
- (bool)upgrading;
- (bool)upgradingDone;

@end
