/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTriangulator : NSObject {
    unsigned long long * _mesh;
    unsigned long long  _mesh_capacity;
    void * _opaque_segments;
    void * _opaque_triangulator;
    NSMutableData * _scratch;
    unsigned long long  _segments_capacity;
}

- (bool)_triangulateIndicesInto:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)triangulateIndicesForPoints:(struct Matrix<int, 2, 1> { int x1[2]; }*)arg1 pointCount:(unsigned long long)arg2;

@end
