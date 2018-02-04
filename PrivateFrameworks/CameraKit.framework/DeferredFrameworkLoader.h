/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface DeferredFrameworkLoader : NSObject {
    void * _frameworkHandle;
    long long  _frameworkLoadedToken;
    NSString * _path;
}

@property (nonatomic) void*frameworkHandle;
@property (nonatomic) long long frameworkLoadedToken;
@property (nonatomic, retain) NSString *path;

+ (id)PhotosUIFrameworkPath;

- (void).cxx_destruct;
- (Class)classFromString:(id)arg1;
- (void)dealloc;
- (void*)frameworkHandle;
- (long long)frameworkLoadedToken;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setFrameworkHandle:(void*)arg1;
- (void)setFrameworkLoadedToken:(long long)arg1;
- (void)setPath:(id)arg1;

@end
