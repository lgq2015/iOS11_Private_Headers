/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface StabilizeParams : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cropRect;
    struct vector<SP_FrameInfo, std::__1::allocator<SP_FrameInfo> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<SP_FrameInfo *, std::__1::allocator<SP_FrameInfo> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  mFrameInfo;
    struct vector<CMTime, std::__1::allocator<CMTime> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  mFrameTimeArray;
    unsigned int  numFrames;
    bool  passThrough;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  roiLength;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  roiStart;
    bool  sparseFrames;
    unsigned int  version;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (readonly) unsigned int numFrames;
@property bool passThrough;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } roiLength;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } roiStart;
@property bool sparseFrames;
@property (readonly) unsigned int version;

+ (id)stabilizeParams;
+ (id)stabilizeParamsFromNSDictionary:(id)arg1;
+ (id)stabilizeParamsFromURL:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)append:(struct { float x1[9]; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (struct vector<CMTime, std::__1::allocator<CMTime> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_1_1; } x3; }*)frameTimes;
- (void)getFrameInfo:(unsigned int)arg1 frameInfo:(struct { float x1[9]; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)infoAsDict;
- (id)init;
- (id)initFromDict:(id)arg1;
- (unsigned int)numFrames;
- (bool)passThrough;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })roiLength;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })roiStart;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPassThrough:(bool)arg1;
- (void)setRoiLength:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRoiStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSparseFrames:(bool)arg1;
- (bool)sparseFrames;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeForFrame:(unsigned int)arg1;
- (unsigned int)version;
- (bool)writeToURL:(id)arg1;

@end
