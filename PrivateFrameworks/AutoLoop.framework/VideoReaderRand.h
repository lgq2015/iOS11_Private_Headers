/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface VideoReaderRand : VideoReader {
    struct vector<CMTime, std::__1::allocator<CMTime> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _frameTimes;
    int  _lastFrameDex;
    int  _numFrames;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)getFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 frame:(struct opaqueCMSampleBuffer {}**)arg2 rawFrameIndex:(unsigned int*)arg3;
- (int)indexForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initFromFile:(id)arg1 frameTimes:(const struct vector<CMTime, std::__1::allocator<CMTime> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg2;
- (id)initFromFile:(id)arg1 withParams:(id)arg2;
- (int)reset;

@end