/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOOperationTransformer : NSObject <NSCopying> {
    TSPObject * mDelegate;
    NSObject<TSKCOIntermediateOperationEnumerator> * mEnumerator;
    bool  mIsHigherPriority;
}

@property (nonatomic) TSPObject *delegate;
@property (nonatomic, readonly) NSObject<TSKCOIntermediateOperationEnumerator> *enumerator;
@property (nonatomic, readonly) bool hasOperations;

- (void)appendOperation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)enumerator;
- (bool)hasOperations;
- (id)initWithOperationEnumerator:(id)arg1;
- (id)initWithOperationEnumerator:(id)arg1 isHigherPriority:(bool)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct OperationTransformer { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSK::Operation> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; bool x6; }*)arg2;
- (void)saveToArchiver:(id)arg1 message:(struct OperationTransformer { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSK::Operation> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; bool x6; }*)arg2;
- (void)setDelegate:(id)arg1;
- (id)transformIdPlacementBaseOperation:(id)arg1;
- (id)transformOperations:(id)arg1;
- (id)transformReplaceRangeOperation:(id)arg1;
- (id)transformUpdateIdOperation:(id)arg1;
- (id)transformUpdateRangeOperation:(id)arg1;

@end
