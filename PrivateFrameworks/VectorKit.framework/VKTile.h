/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTile : NSObject {
    double  _birthdate;
    struct VKCameraState { 
        struct RigidTransform<double> { 
            struct Quaternion<double> { 
                struct Matrix<double, 3, 1> { 
                    double _e[3]; 
                } _imaginary; 
                double _scalar; 
            } _rotation; 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _translation; 
        } transform; 
        double aspectRatio; 
        double verticalFieldOfView; 
        double horizontalOffset; 
    }  _cameraState;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _inverseMatrix;
    struct VKTileKey { 
        unsigned int z; 
        int x; 
        int y; 
        unsigned int pointSize; 
    }  _key;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _matrix;
    VKTilePool * _pool;
    struct Matrix<float, 4, 4> { 
        float _e[16]; 
    }  _shaderMatrix;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { 
        struct ConstantDataTyped<ggl::Tile::View> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _viewConstantData;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  bounds;
}

@property (nonatomic, readonly) double birthdate;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *inverseMatrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; } key;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct *matrix; /* unknown property attribute:  4>=[16d]} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{Matrix<float' */ struct *shaderMatrix; /* unknown property attribute:  4>=[16f]} */
@property (nonatomic, readonly) double tileWidth;
@property (nonatomic, readonly) const struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x1; struct __shared_weak_count {} *x2; }*viewConstantData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)birthdate;
- (void)dealloc;
- (id)description;
- (unsigned long long)geometryCount;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)inverseMatrix;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })key;
- (const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)keyPointer;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)matrix;
- (void)setKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)setPool:(id)arg1;
- (const struct Matrix<float, 4, 4> { float x1[16]; }*)shaderMatrix;
- (double)tileWidth;
- (void)updateViewDependentStateIfNecessaryWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (void)updateViewDependentStateWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (const struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x1; struct __shared_weak_count {} *x2; }*)viewConstantData;

@end
