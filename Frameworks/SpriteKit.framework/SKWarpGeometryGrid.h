/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKWarpGeometryGrid : SKWarpGeometry <NSCoding> {
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__first_"^ {}  _destPositions;
    void _dimensions;
    bool  _isIdentityWarp;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__first_"^ {}  _sourcePositions;
    int  _vertexCount;
}

@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**destPositions;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**sourcePositions;
@property (nonatomic, readonly) long long vertexCount;

+ (id)grid;
+ (id)gridWithColumns:(long long)arg1 rows:(long long)arg2;
+ (id)gridWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 destPositions:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)destPositionAtIndex:(long long)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)destPositions;
- (void)encodeWithCoder:(id)arg1;
- (id)gridByReplacingDestPositions:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (id)gridByReplacingSourcePositions:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 destPositions:(const /* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4;
- (bool)isIdentityWarp;
- (long long)numberOfColumns;
- (long long)numberOfRows;
- (void)sourcePositionAtIndex:(long long)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)sourcePositions;
- (long long)vertexCount;

@end
