/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnarchiver : NSObject {
    struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; } * _currentFieldPath;
    <TSPUnarchiverDelegate> * _delegate;
    struct vector<void (^)(), std::__1::allocator<void (^)()> >="__begin_"^@?"__end_"^@?"__end_cap_"{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >="__first_"^@? {}  _finalizeHandlers;
    <TSPLazyReferenceDelegate> * _lazyReferenceDelegate;
    struct auto_ptr<google::protobuf::Message> { 
        struct Message {} *__ptr_; 
    }  _message;
    unsigned int  _messageType;
    unsigned long long  _messageVersion;
    <TSPObjectDelegate> * _objectDelegate;
    long long  _objectIdentifier;
    struct vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> > { 
        struct UnarchiverReference {} *__begin_; 
        struct UnarchiverReference {} *__end_; 
        struct __compressed_pair<TSP::UnarchiverReference *, std::__1::allocator<TSP::UnarchiverReference> > { 
            struct UnarchiverReference {} *__first_; 
        } __end_cap_; 
    }  _references;
    struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
        struct UnarchiverRepeatedReference {} *__begin_; 
        struct UnarchiverRepeatedReference {} *__end_; 
        struct __compressed_pair<TSP::UnarchiverRepeatedReference *, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
            struct UnarchiverRepeatedReference {} *__first_; 
        } __end_cap_; 
    }  _repeatedReferences;
    struct auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { 
        struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *__ptr_; 
    }  _strongReferences;
    TSPUnknownContent * _unknownContent;
}

@property (nonatomic, readonly) bool canValidateReferences;
@property (nonatomic, readonly) TSPObjectContext *context;
@property (nonatomic, readonly) <TSPUnarchiverDelegate> *delegate;
@property (nonatomic, readonly) bool documentHasCurrentFileFormatVersion;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) bool hasDocumentVersionUUID;
@property (nonatomic, readonly) bool hasPreUFFVersion;
@property (nonatomic, readonly) bool isCrossAppPaste;
@property (nonatomic, readonly) bool isCrossDocumentPaste;
@property (nonatomic, readonly) bool isFromCopy;
@property (nonatomic, readonly) unsigned int messageType;
@property (nonatomic, readonly) unsigned long long messageVersion;
@property (nonatomic, readonly) <TSPObjectDelegate> *objectDelegate;
@property (nonatomic, readonly) long long objectIdentifier;
@property (nonatomic, readonly) NSUUID *objectUUID;
@property (nonatomic, readonly) unsigned long long preUFFVersion;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) TSPUnknownContent *unknownContent;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFinalizeHandler:(id /* block */)arg1;
- (bool)canValidateReferences;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (bool)documentHasCurrentFileFormatVersion;
- (unsigned long long)fileFormatVersion;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)arg1;
- (struct vector<void (^)(), std::__1::allocator<void (^)()> >=^@?^@?{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >=^@? {}*)finalizeHandlers;
- (bool)hasDocumentVersionUUID;
- (bool)hasPreUFFVersion;
- (id)initWithMessageType:(unsigned int)arg1 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; })arg2 identifier:(long long)arg3 strongReferences:(struct auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (bool)isFromCopy;
- (const struct Message { int (**x1)(); }*)message;
- (unsigned int)messageType;
- (unsigned long long)messageVersion;
- (id)objectDelegate;
- (long long)objectIdentifier;
- (id)objectUUID;
- (unsigned long long)preUFFVersion;
- (void)pushScopeForField:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)readDataReferenceMessage:(const struct DataReference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; }*)arg1;
- (void)readLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (void)readLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(bool)arg3 allowUnknownObject:(bool)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(id /* block */)arg7;
- (void)readReferenceMessage1:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 message2:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2 completion:(id /* block */)arg3;
- (void)readReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (void)readReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 isWeak:(bool)arg2 validateStrongReferences:(bool)arg3 allowUnknownObject:(bool)arg4 selector:(SEL)arg5 weakSelector:(SEL)arg6 completion:(id /* block */)arg7;
- (void)readReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 repeatedMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2 completion:(id /* block */)arg3;
- (void)readRepeatedLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(bool)arg3 allowUnknownObject:(bool)arg4 selector:(SEL)arg5 completion:(id /* block */)arg6;
- (void)readRepeatedLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 ownershipMode:(long long)arg2 validateStrongReferences:(bool)arg3 allowUnknownObject:(bool)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(id /* block */)arg7;
- (void)readRepeatedReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 isWeak:(bool)arg2 validateStrongReferences:(bool)arg3 allowUnknownObject:(bool)arg4 selector:(SEL)arg5 completion:(id /* block */)arg6;
- (void)readRepeatedUnownedReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedWeakLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedWeakLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 retainObjectUntilArchived:(bool)arg2 completion:(id /* block */)arg3;
- (id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const struct RepeatedPtrField<TSP::UUIDPath> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (id)readRepeatedWeakObjectUUIDReferenceMessage:(const struct RepeatedPtrField<TSP::UUID> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedWeakReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readSparseReferenceArrayMessage:(const struct SparseReferenceArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1 completion:(id /* block */)arg2;
- (void)readSparseReferenceArrayMessage:(const struct SparseReferenceArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1 isWeak:(bool)arg2 completion:(id /* block */)arg3;
- (id)readSparseWeakObjectUUIDPathReferenceArrayMessage:(const struct SparseUUIDPathArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseUUIDPathArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (id)readSparseWeakObjectUUIDReferenceArrayMessage:(const struct SparseUUIDArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseUUIDArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (void)readSparseWeakReferenceArrayMessage:(const struct SparseReferenceArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1 completion:(id /* block */)arg2;
- (void)readUnownedReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (void)readWeakLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (void)readWeakLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 retainObjectUntilArchived:(bool)arg2 completion:(id /* block */)arg3;
- (id)readWeakObjectUUIDPathReferenceMessage:(const struct UUIDPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 completion:(id /* block */)arg2;
- (id)readWeakObjectUUIDReferenceMessage:(const struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; unsigned long long x6; }*)arg1 completion:(id /* block */)arg2;
- (void)readWeakReferenceMessage1:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 message2:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2 completion:(id /* block */)arg3;
- (void)readWeakReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (void)readWeakReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 repeatedMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2 completion:(id /* block */)arg3;
- (void)readWeakReferenceToObjectUUID:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (struct vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> > { struct UnarchiverReference {} *x1; struct UnarchiverReference {} *x2; struct __compressed_pair<TSP::UnarchiverReference *, std::__1::allocator<TSP::UnarchiverReference> > { struct UnarchiverReference {} *x_3_1_1; } x3; }*)references;
- (struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { struct UnarchiverRepeatedReference {} *x1; struct UnarchiverRepeatedReference {} *x2; struct __compressed_pair<TSP::UnarchiverRepeatedReference *, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { struct UnarchiverRepeatedReference {} *x_3_1_1; } x3; }*)repeatedReferences;
- (long long)sourceType;
- (struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::__hash_value_type<const long long, bool>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, bool> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)strongReferences;
- (id)unknownContent;
- (void)validateReferenceToObjectIdentifier:(long long)arg1 isWeak:(bool*)arg2 validateStrongReferences:(bool)arg3 selector:(SEL)arg4 weakSelector:(SEL)arg5;

@end
