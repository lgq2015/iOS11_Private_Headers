/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataMetadataMap : TSPObject {
    NSMutableDictionary * _identifierToDataMetadata;
}

- (void).cxx_destruct;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromMessage:(const struct DataMetadataMap { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::DataMetadataMap_DataMetadataMapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct DataMetadataMap { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::DataMetadataMap_DataMetadataMapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 archiver:(id)arg2;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;

@end
