/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyValueStorageContainer : NSObject {
    NSMutableArray * mCategoryAxisNonStyles;
    NSMutableArray * mCategoryAxisStyles;
    <TSCHStyleActAlike> * mChartNonStyle;
    <TSCHStyleActAlike> * mChartStyle;
    <TSCHStyleActAlike> * mLegendNonStyle;
    <TSCHStyleActAlike> * mLegendStyle;
    NSMutableArray * mParagraphStyles;
    NSMutableDictionary * mReferenceLineNonStyles;
    NSMutableDictionary * mReferenceLineStyles;
    <TSCHStyleActAlike> * mReferenceLineThemeStyle;
    NSMutableArray * mSeriesNonStyles;
    NSMutableArray * mSeriesPrivateStyles;
    NSMutableArray * mSeriesThemeStyles;
    NSMutableArray * mValueAxisNonStyles;
    NSMutableArray * mValueAxisStyles;
}

@property (setter=p_setCategoryAxisNonStyles:, nonatomic, copy) NSArray *p_categoryAxisNonStyles;
@property (setter=p_setCategoryAxisStyles:, nonatomic, copy) NSArray *p_categoryAxisStyles;
@property (setter=p_setChartNonStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_chartNonStyle;
@property (setter=p_setChartStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_chartStyle;
@property (setter=p_setLegendNonStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_legendNonStyle;
@property (setter=p_setLegendStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_legendStyle;
@property (setter=p_setMutableCategoryAxisNonStyles:, nonatomic, retain) NSMutableArray *p_mutableCategoryAxisNonStyles;
@property (setter=p_setMutableCategoryAxisStyles:, nonatomic, retain) NSMutableArray *p_mutableCategoryAxisStyles;
@property (setter=p_setMutableParagraphStyles:, nonatomic, retain) NSMutableArray *p_mutableParagraphStyles;
@property (setter=p_setMutableRefLineNonStyles:, nonatomic, retain) NSMutableDictionary *p_mutableRefLineNonStyles;
@property (setter=p_setMutableRefLineStyles:, nonatomic, retain) NSMutableDictionary *p_mutableRefLineStyles;
@property (setter=p_setMutableSeriesNonStyles:, nonatomic, retain) NSMutableArray *p_mutableSeriesNonStyles;
@property (setter=p_setMutableSeriesPrivateStyles:, nonatomic, retain) NSMutableArray *p_mutableSeriesPrivateStyles;
@property (setter=p_setMutableSeriesThemeStyles:, nonatomic, retain) NSMutableArray *p_mutableSeriesThemeStyles;
@property (setter=p_setMutableValueAxisNonStyles:, nonatomic, retain) NSMutableArray *p_mutableValueAxisNonStyles;
@property (setter=p_setMutableValueAxisStyles:, nonatomic, retain) NSMutableArray *p_mutableValueAxisStyles;
@property (setter=p_setParagraphStyles:, nonatomic, copy) NSArray *p_paragraphStyles;
@property (setter=p_setReferenceLineNonStyles:, nonatomic, copy) NSDictionary *p_referenceLineNonStyles;
@property (setter=p_setReferenceLineStyles:, nonatomic, copy) NSDictionary *p_referenceLineStyles;
@property (setter=p_setReferenceLineThemeStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_referenceLineThemeStyle;
@property (setter=p_setSeriesNonStyles:, nonatomic, copy) NSArray *p_seriesNonStyles;
@property (setter=p_setSeriesPrivateStyles:, nonatomic, copy) NSArray *p_seriesPrivateStyles;
@property (setter=p_setSeriesThemeStyles:, nonatomic, copy) NSArray *p_seriesThemeStyles;
@property (setter=p_setValueAxisNonStyles:, nonatomic, copy) NSArray *p_valueAxisNonStyles;
@property (setter=p_setValueAxisStyles:, nonatomic, copy) NSArray *p_valueAxisStyles;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void).cxx_destruct;
- (void)loadFromArchive:(const struct PropertyValueStorageContainerArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 unarchiver:(id)arg2;
- (id)p_categoryAxisNonStyles;
- (id)p_categoryAxisStyles;
- (id)p_chartNonStyle;
- (id)p_chartStyle;
- (id)p_legendNonStyle;
- (id)p_legendStyle;
- (id)p_mutableCategoryAxisNonStyles;
- (id)p_mutableCategoryAxisStyles;
- (id)p_mutableParagraphStyles;
- (id)p_mutableRefLineNonStyles;
- (id)p_mutableRefLineStyles;
- (id)p_mutableSeriesNonStyles;
- (id)p_mutableSeriesPrivateStyles;
- (id)p_mutableSeriesThemeStyles;
- (id)p_mutableValueAxisNonStyles;
- (id)p_mutableValueAxisStyles;
- (id)p_paragraphStyles;
- (id)p_referenceLineNonStyles;
- (id)p_referenceLineStyles;
- (id)p_referenceLineThemeStyle;
- (id)p_seriesNonStyles;
- (id)p_seriesPrivateStyles;
- (id)p_seriesThemeStyles;
- (void)p_setCategoryAxisNonStyles:(id)arg1;
- (void)p_setCategoryAxisStyles:(id)arg1;
- (void)p_setChartNonStyle:(id)arg1;
- (void)p_setChartStyle:(id)arg1;
- (void)p_setLegendNonStyle:(id)arg1;
- (void)p_setLegendStyle:(id)arg1;
- (void)p_setMutableCategoryAxisNonStyles:(id)arg1;
- (void)p_setMutableCategoryAxisStyles:(id)arg1;
- (void)p_setMutableParagraphStyles:(id)arg1;
- (void)p_setMutableRefLineNonStyles:(id)arg1;
- (void)p_setMutableRefLineStyles:(id)arg1;
- (void)p_setMutableSeriesNonStyles:(id)arg1;
- (void)p_setMutableSeriesPrivateStyles:(id)arg1;
- (void)p_setMutableSeriesThemeStyles:(id)arg1;
- (void)p_setMutableValueAxisNonStyles:(id)arg1;
- (void)p_setMutableValueAxisStyles:(id)arg1;
- (void)p_setParagraphStyles:(id)arg1;
- (void)p_setReferenceLineNonStyles:(id)arg1;
- (void)p_setReferenceLineStyles:(id)arg1;
- (void)p_setReferenceLineThemeStyle:(id)arg1;
- (void)p_setSeriesNonStyles:(id)arg1;
- (void)p_setSeriesPrivateStyles:(id)arg1;
- (void)p_setSeriesThemeStyles:(id)arg1;
- (void)p_setValueAxisNonStyles:(id)arg1;
- (void)p_setValueAxisStyles:(id)arg1;
- (id)p_valueAxisNonStyles;
- (id)p_valueAxisStyles;
- (void)saveToArchive:(struct PropertyValueStorageContainerArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 archiver:(id)arg2;

@end
