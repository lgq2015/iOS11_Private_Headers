/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLScene : NSObject {
    NSMutableArray * _objects;
    /* Warning: unhandled struct encoding: '{vector<MDLLight *, std::__1::allocator<MDLLight *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<MDLLight *__strong *, std::__1::allocator<MDLLight *> >="__first_"^@}}' */ struct vector<MDLLight *, std::__1::allocator<MDLLight *> > { 
        __end_ **__begin_; 
    }  _sceneLights;
    struct mutex { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; } * _sceneMutex;
    struct vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *> > { 
        struct RTRenderable {} **__begin_; 
        struct RTRenderable {} **__end_; 
        struct __compressed_pair<ModelIO::RTRenderable **, std::__1::allocator<ModelIO::RTRenderable *> > { 
            struct RTRenderable {} **__first_; 
        } __end_cap_; 
    }  _sceneObjects;
    int  _signature;
}

@property (nonatomic, readonly, retain) NSArray *objects;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)acquireLockGuard;
- (void)addObject:(id)arg1;
- (bool)castRayFrom:(void *)arg1 withDirection:(void *)arg2 usingCamera:(void *)arg3 result:(void *)arg4; // needs 4 arg types, found 2: struct RTCamera { int (**x1)(); unsigned long long x2; unsigned long long x3; float x4; float x5; int x6; float *x7; id **x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; void*x10; void*x11[4]; }*, /* Warning: unhandled struct encoding: '{RTIntersectionResult=f^{RTGeometry}@}' */ struct RTIntersectionResult { float x1; struct RTGeometry {} *x2; id x3; }*
- (void)clear;
- (void)dealloc;
- (void)hitTestRayFrom:(void *)arg1 withDirection:(void *)arg2 usingCamera:(void *)arg3; // needs 3 arg types, found 1: id
- (id)init;
- (id)objects;
- (id)raytraceSceneWithCamera:(void *)arg1 reflection:(void *)arg2 irradiance:(void *)arg3 size:(void *)arg4; // needs 4 arg types, found 3: const struct RTCamera { int (**x1)(); unsigned long long x2; unsigned long long x3; float x4; float x5; int x6; float *x7; id **x8; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x9; void*x10; void*x11[4]; }*, id, id
- (void)releaseLockGuard:(int)arg1;

@end
