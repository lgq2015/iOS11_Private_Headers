/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAlternateArchiver : TSPArchiverBase {
    const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; } * _fieldPath;
    struct RepeatedPtrField<TSP::FieldPath> { 
        void **elements_; 
        int current_size_; 
        int allocated_size_; 
        int total_size_; 
    }  _fieldPathsToRemove;
    bool  _isDiff;
    TSPArchiverBase * _parentArchiver;
}

@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{FieldPath=^^?{UnknownFieldSet=^{vector<google::protobuf::UnknownField' */ struct *fieldPath; /* unknown property attribute:  std::__1::allocator<google::protobuf::UnknownField> >}}[1I]i{RepeatedField<unsigned int>=^Iii}i} */
@property (nonatomic, readonly) const struct RepeatedPtrField<TSP::FieldPath> { void **x1; int x2; int x3; int x4; }*fieldPathsToRemove;
@property (nonatomic, readonly) bool isDiff;
@property (nonatomic, readonly) TSPArchiverBase *parentArchiver;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)alternateDiffForVersion:(unsigned long long)arg1;
- (id)alternateDiffForVersion:(unsigned long long)arg1 field:(int)arg2;
- (id)alternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int*)arg2;
- (void)dealloc;
- (const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)fieldPath;
- (const struct RepeatedPtrField<TSP::FieldPath> { void **x1; int x2; int x3; int x4; }*)fieldPathsToRemove;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 version:(unsigned long long)arg2 isDiff:(bool)arg3 fieldPath:(const struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; }*)arg4 parentArchiver:(id)arg5;
- (bool)isDiff;
- (id)parentAlternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int*)arg2;
- (id)parentArchiver;
- (void)removeField:(int)arg1;
- (void)removeFieldAtEndOfPath:(int*)arg1;

@end
