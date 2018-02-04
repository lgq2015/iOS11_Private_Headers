/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
    struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_5_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_7_1; } x_2_6_1; } x_1_5_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x_3_6_1; } x_1_5_3; } x_1_4_1; } x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; } * mShape;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)hidden;
- (id)initWithShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_5_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_7_1; } x_2_6_1; } x_1_5_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x_3_6_1; } x_1_5_3; } x_1_4_1; } x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; }*)arg1;
- (id)initWithShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_5_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_7_1; } x_2_6_1; } x_1_5_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x_3_6_1; } x_1_5_3; } x_1_4_1; } x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; }*)arg1 masterShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_5_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_7_1; } x_2_6_1; } x_1_5_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x_3_6_1; } x_1_5_3; } x_1_4_1; } x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; }*)arg2;
- (bool)isFillOK;
- (bool)isFilled;
- (bool)isShadowOK;
- (bool)isShadowed;
- (bool)isStrokeOK;
- (bool)isStroked;
- (bool)isTextPath;
- (bool)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (bool)textPathItalic;
- (bool)textPathSmallcaps;
- (bool)textPathStrikethrough;
- (int)textPathTextAlignment;
- (bool)textPathUnderline;
- (id)textPathUnicodeString;

@end
