/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentReader : TSPReader <TSPComponentParserDelegate> {
    struct { 
        unsigned int isReadingFromDocument : 1; 
        unsigned int ignoreUnknownContent : 1; 
        unsigned int ignoreVersionChecking : 1; 
        unsigned int acceptUnknownDocumentObject : 1; 
    }  _flags;
    <TSUStreamReadChannel> * _readChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)componentParser:(id)arg1 didReadArchiveInfo:(const struct ArchiveInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct RepeatedPtrField<TSP::MessageInfo> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; bool x7; }*)arg2 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg3 error:(id*)arg4;
- (void)dealloc;
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 readChannel:(id)arg4;
- (id)newUnarchiverWithArchiveInfo:(const struct ArchiveInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct RepeatedPtrField<TSP::MessageInfo> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; bool x7; }*)arg1 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg2 isUnknownObject:(bool*)arg3;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct RepeatedField<unsigned int> { unsigned int *x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; int x15; struct FieldPath {} *x16; struct RepeatedPtrField<TSP::FieldPath> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; unsigned int x18; }*)arg2 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; }*)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(struct auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg5 unknownContent:(id)arg6;
- (bool)shouldProceedParsingOnFailure;
- (id)unknownMessageFromMessageInfo:(const struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct RepeatedField<unsigned int> { unsigned int *x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; int x15; struct FieldPath {} *x16; struct RepeatedPtrField<TSP::FieldPath> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; unsigned int x18; }*)arg1 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg2;
- (const struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct RepeatedField<unsigned int> { unsigned int *x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; int x15; struct FieldPath {} *x16; struct RepeatedPtrField<TSP::FieldPath> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; unsigned int x18; }*)unknownObjectMessageInfo;
- (id)unknownObjectUnarchiverArchiveInfo:(const struct ArchiveInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct RepeatedPtrField<TSP::MessageInfo> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; bool x7; }*)arg1 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg2;

@end
