/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface VideoAccessIndexNorm : VideoAccessIndex {
    struct FrameTimeNormalizer { int (**x1)(); struct vector<CMTime, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_2_1_1; struct { /* ? */ } *x_2_1_2; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_2_1; } x_2_1_3; } x2; struct vector<CMTime, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_1_1; struct { /* ? */ } *x_3_1_2; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_2_1; } x_3_1_3; } x3; unsigned int x4; struct { long long x_5_1_1; int x_5_1_2; unsigned int x_5_1_3; long long x_5_1_4; } x5; struct { long long x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; long long x_6_1_4; } x6; } * mNormalizer;
}

- (int)getFrameAtIndex:(unsigned int)arg1 pixBuf:(struct __CVBuffer {}**)arg2;
- (id)initFromFile:(id)arg1 pixelFormat:(unsigned int)arg2 normalizer:(struct FrameTimeNormalizer { int (**x1)(); struct vector<CMTime, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_2_1_1; struct { /* ? */ } *x_2_1_2; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_2_1; } x_2_1_3; } x2; struct vector<CMTime, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_1_1; struct { /* ? */ } *x_3_1_2; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_2_1; } x_3_1_3; } x3; unsigned int x4; struct { long long x_5_1_1; int x_5_1_2; unsigned int x_5_1_3; long long x_5_1_4; } x5; struct { long long x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; long long x_6_1_4; } x6; }*)arg3;

@end
