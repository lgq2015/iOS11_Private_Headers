/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _VKLandmarkIconArtwork : VKIconArtwork {
    struct _retain_ptr<CGImage *, geo::_retain_cf<CGImage *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { 
        int (**_vptr$_retain_ptr)(); 
        struct CGImage {} *_obj; 
        struct _retain_cf<CGImage *> { } _retain; 
        struct _release_cf { } _release; 
    }  _maskImage;
    struct _retain_ptr<CGImage *, geo::_retain_cf<CGImage *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { 
        int (**_vptr$_retain_ptr)(); 
        struct CGImage {} *_obj; 
        struct _retain_cf<CGImage *> { } _retain; 
        struct _release_cf { } _release; 
    }  _outlineMaskImage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (void)dealloc;
- (id)initWithMask:(struct CGImage { }*)arg1 outlineMask:(struct CGImage { }*)arg2 style:(const struct Style { struct optional<gss::IconStyle> { bool x_1_1_1; union ValueUnion { unsigned char x_2_2_1[1]; unsigned char x_2_2_2; } x_1_1_2; } x1; struct vector<md::IconImage::IconLayer, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_2_1_1; unsigned char *x_2_1_2; struct __compressed_pair<md::IconImage::IconLayer *, std::__1::allocator<md::IconImage::IconLayer> > { unsigned char *x_3_2_1; } x_2_1_3; } x2; float x3; float x4; float x5; float x6; float x7; float x8; struct Matrix<float, 2, 1> { float x_9_1_1[2]; } x9; struct Matrix<float, 2, 1> { float x_10_1_1[2]; } x10; struct FixedPointVector<unsigned char, 4> { unsigned char x_11_1_1[4]; } x11; struct FixedPointVector<unsigned char, 4> { unsigned char x_12_1_1[4]; } x12; struct FixedPointVector<unsigned char, 4> { unsigned char x_13_1_1[4]; } x13; struct FixedPointVector<unsigned char, 4> { unsigned char x_14_1_1[4]; } x14; struct FixedPointVector<unsigned char, 4> { unsigned char x_15_1_1[4]; } x15; struct FixedPointVector<unsigned char, 4> { unsigned char x_16_1_1[4]; } x16; }*)arg3 extraStyle:(const struct ExtraStyle { float x1; float x2; float x3; struct Matrix<unsigned int, 2, 1> { unsigned int x_4_1_1[2]; } x4; struct Matrix<unsigned int, 2, 1> { unsigned int x_5_1_1[2]; } x5; struct Matrix<unsigned int, 2, 1> { unsigned int x_6_1_1[2]; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; }*)arg4 contentScale:(double)arg5;

@end
