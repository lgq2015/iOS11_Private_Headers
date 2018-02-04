/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLVoronoiTriangleDataCell : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct { 
        float x; 
        float y; 
    }  _centerPoint;
    unsigned long long  _triangleCount;
    unsigned long long  _vertexCount;
    struct { float x1; float x2; } * _vertexData;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) struct { float x1; float x2; } centerPoint;
@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) struct { float x1; float x2; }*vertexData;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)cellsBySplittingCellIntoTriangles;
- (struct { float x1; float x2; })centerPoint;
- (void)dealloc;
- (id)initWithEdges:(struct vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > > { struct segment_data<double> {} *x1; struct segment_data<double> {} *x2; struct __compressed_pair<boost::polygon::segment_data<double> *, std::__1::allocator<boost::polygon::segment_data<double> > > { struct segment_data<double> {} *x_3_1_1; } x3; })arg1;
- (id)initWithTrianglePoints:(struct { float x1; float x2; }*)arg1;
- (void)p_setupTriangleDataWithEdges:(struct vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > > { struct segment_data<double> {} *x1; struct segment_data<double> {} *x2; struct __compressed_pair<boost::polygon::segment_data<double> *, std::__1::allocator<boost::polygon::segment_data<double> > > { struct segment_data<double> {} *x_3_1_1; } x3; })arg1;
- (unsigned long long)triangleCount;
- (unsigned long long)vertexCount;
- (struct { float x1; float x2; }*)vertexData;

@end
