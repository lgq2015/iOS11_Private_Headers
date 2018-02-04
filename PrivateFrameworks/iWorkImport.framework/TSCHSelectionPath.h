/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSelectionPath : NSObject <NSCopying> {
    NSArray * mArguments;
    TSCHSelectionPathType * mPathType;
    TSCHSelectionPath * mSubSelection;
}

@property (nonatomic, readonly) TSCHSelectionPathType *pathType;
@property (nonatomic, readonly) TSCHSelectionPath *subSelection;

+ (id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2;
+ (id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3;
+ (id)selectionPathWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3;
+ (id)seriesSelectionPathWithSeriesIndex:(unsigned long long)arg1;
+ (id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)arg1;
+ (id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)arg1;

- (id)argumentAtIndex:(unsigned long long)arg1;
- (unsigned long long)argumentsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debuggingName;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct ChartSelectionPathArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ChartSelectionPathTypeArchive {} *x5; struct ChartSelectionPathArchive {} *x6; struct RepeatedPtrField<TSCH::ChartSelectionPathArgumentArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1;
- (id)initWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3;
- (id)initWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)pathType;
- (id)rangeOfPathsToPath:(id)arg1;
- (id)rangeOfReferenceLinePathsToPath:(id)arg1 forModel:(id)arg2;
- (void)saveToArchive:(struct ChartSelectionPathArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ChartSelectionPathTypeArchive {} *x5; struct ChartSelectionPathArchive {} *x6; struct RepeatedPtrField<TSCH::ChartSelectionPathArgumentArchive> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1;
- (id)subSelection;
- (id)type;

@end
