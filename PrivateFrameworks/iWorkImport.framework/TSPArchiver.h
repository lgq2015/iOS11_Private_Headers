/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPArchiver : TSPArchiverBase {
    NSHashTable * _aggregatedCommandToModelReferences;
    NSHashTable * _aggregatedDataReferences;
    NSHashTable * _aggregatedLazyReferences;
    NSHashTable * _aggregatedStrongReferences;
    NSHashTable * _aggregatedWeakReferences;
    NSObject<OS_dispatch_group> * _archiveGroup;
    TSPObject * _explicitComponentRootObject;
    NSMutableSet * _featureInfos;
    BOOL  _flags;
    NSUUID * _objectUUID;
    NSObject<OS_dispatch_group> * _serializeGroup;
    NSObject<OS_dispatch_data> * _serializedData;
    NSArray * _unknownMessages;
}

@property (nonatomic, readonly) NSHashTable *aggregatedCommandToModelReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedDataReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedLazyReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedStrongReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedWeakReferences;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *archiveGroup;
@property (nonatomic, readonly) TSPObject *explicitComponentRootObject;
@property (nonatomic, readonly) NSSet *featureInfos;
@property (nonatomic) unsigned long long messageVersion;
@property (nonatomic, readonly) bool needsArchive;
@property (nonatomic, readonly) NSUUID *objectUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *serializeGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *serializedData;
@property (nonatomic, readonly) bool shouldSaveAlternates;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (void)addDocumentFeatureInfoWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3;
- (void)aggregateReferencesFromArchiver:(id)arg1;
- (id)aggregatedCommandToModelReferences;
- (id)aggregatedDataReferences;
- (id)aggregatedLazyReferences;
- (id)aggregatedStrongReferences;
- (id)aggregatedWeakReferences;
- (id)alternateForVersion:(unsigned long long)arg1;
- (void)archive;
- (id)archiveGroup;
- (bool)beginArchive;
- (bool)beginWrite;
- (id)calculateOrderedArchivableContent;
- (void)cleanup;
- (id)explicitComponentRootObject;
- (void)fail;
- (id)featureInfos;
- (id)initWithObject:(id)arg1;
- (bool)needsArchive;
- (id)objectUUID;
- (void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2;
- (void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)requiresDocumentVersion:(unsigned long long)arg1;
- (void)requiresDocumentVersion:(unsigned long long)arg1 featureIdentifier:(id)arg2;
- (void)serialize;
- (id)serializeGroup;
- (id)serializedData;
- (bool)shouldSaveAlternates;
- (bool)success;
- (bool)updateMessageInfo:(struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct RepeatedField<unsigned int> { unsigned int *x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; int x15; struct FieldPath {} *x16; struct RepeatedPtrField<TSP::FieldPath> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; unsigned int x18; }*)arg1 withArchiver:(id)arg2;
- (void)validateOrderedArchivableContent:(id)arg1;

@end
