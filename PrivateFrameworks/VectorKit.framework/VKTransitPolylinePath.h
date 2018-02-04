/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTransitPolylinePath : VKPolylinePath {
    unsigned long long  _lineID;
    VKGGLTransitTile * _tile;
}

@property (nonatomic, readonly) unsigned long long lineID;
@property (nonatomic, readonly) VKGGLTransitTile *tile;

- (void)dealloc;
- (id)description;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(struct Matrix<float, 2, 1> { float x1[2]; }*)arg3 pointCount:(unsigned long long)arg4 reversePoints:(bool)arg5 transform:(struct { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; }*)arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(unsigned long long)arg9 tile:(id)arg10;
- (unsigned long long)lineID;
- (id)tile;

@end
