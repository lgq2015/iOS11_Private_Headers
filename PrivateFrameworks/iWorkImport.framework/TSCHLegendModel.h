/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendModel : NSObject <NSCopying, TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHUnretainedParent, TSDMixing> {
    TSCHChartInfo * mChartInfo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLegendFrame;
}

@property (nonatomic) TSCHChartInfo *chartInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } legendOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } legendSize;
@property (readonly) Class superclass;

+ (unsigned char)styleOwnerPathType;

- (id)chartInfo;
- (void)clearParent;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (bool)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
- (bool)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
- (bool)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
- (id)init;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (struct CGPoint { double x1; double x2; })legendOffset;
- (struct CGSize { double x1; double x2; })legendSize;
- (void)loadFromPreUFFArchive:(const struct LegendModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct RectArchive {} *x6; struct Reference {} *x7; struct Reference {} *x8; }*)arg1;
- (void)loadFromUnityArchive:(const struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)model;
- (id)nonstyle;
- (id)objectValueForProperty:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)p_genericToDefaultPropertyMap;
- (void)saveToUnityArchive:(struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (void)setChartInfo:(id)arg1;
- (void)setLegendOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLegendSize:(struct CGSize { double x1; double x2; })arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)style;
- (id)swapTuplesForMutations:(id)arg1 forImport:(bool)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)valueForProperty:(int)arg1;
- (void)willModify;

@end
