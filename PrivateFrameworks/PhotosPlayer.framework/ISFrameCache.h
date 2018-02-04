/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISFrameCache : NSObject {
    NSObject<OS_dispatch_queue> * _cacheIsolationQueue;
    long long  _cacheStrategy;
    NSMutableIndexSet * _cachedIndexes;
    NSMutableDictionary * _frameCache;
    unsigned long long  _frameCacheSize;
    unsigned long long  _frameCount;
    NSObject<OS_dispatch_queue> * _frameGenerationQueue;
    unsigned long long  _fullCachingCost;
    struct CGImageSource { } * _gifSource;
    struct { 
        bool cacheSize; 
        bool frameCache; 
    }  _isValid;
    unsigned long long  _lastRequestedIdx;
}

@property (nonatomic) long long cacheStrategy;

+ (id)sharedFrameGenerationQueue;

- (void).cxx_destruct;
- (struct CGImage { }*)_createPredrawnImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)_frameAtIndex:(unsigned long long)arg1 allowLazy:(bool)arg2;
- (void)_frameGenerationQueue_cacheFrameAtIndex:(unsigned long long)arg1;
- (void)_frameGenerationQueue_updateFrameCache;
- (void)_invalidateCache;
- (void)_invalidateCacheSize;
- (void)_updateDesiredCacheSize;
- (void)_updateFrameCache;
- (void)_updateIfNeeded;
- (long long)cacheStrategy;
- (void)dealloc;
- (struct CGImage { }*)frameAtIndex:(unsigned long long)arg1;
- (struct CGImage { }*)frameAtIndexIfReady:(unsigned long long)arg1;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(bool)arg3;
- (void)setCacheStrategy:(long long)arg1;

@end
