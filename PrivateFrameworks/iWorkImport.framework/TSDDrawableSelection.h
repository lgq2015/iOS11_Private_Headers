/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDrawableSelection : TSKSelection {
    TSDInfoCollectionSelectionHelper * _selectionHelper;
}

@property (nonatomic, readonly) unsigned long long infoCount;
@property (nonatomic, readonly) NSSet *infos;
@property (nonatomic, readonly) NSSet *infosWithNonInteractiveInfos;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) NSSet *nonInteractiveInfos;
@property (nonatomic, retain) TSDInfoCollectionSelectionHelper *selectionHelper;
@property (nonatomic, readonly) NSString *subclassDescription;
@property (nonatomic, readonly) unsigned long long unlockedInfoCount;
@property (nonatomic, readonly) NSSet *unlockedInfos;

+ (Class)archivedSelectionClass;

- (void).cxx_destruct;
- (id)UUIDDescription;
- (bool)containsKindOfClass:(Class)arg1;
- (bool)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)infoCount;
- (id)infos;
- (id)infosOfClass:(Class)arg1;
- (id)infosWithNonInteractiveInfos;
- (id)initWithArchive:(const struct DrawableSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)nonInteractiveInfos;
- (void)saveToArchive:(struct DrawableSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 archiver:(id)arg2;
- (id)selectionHelper;
- (void)setSelectionHelper:(id)arg1;
- (id)subclassDescription;
- (unsigned long long)unlockedInfoCount;
- (id)unlockedInfos;

@end
