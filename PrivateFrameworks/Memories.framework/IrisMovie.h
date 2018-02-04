/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface IrisMovie : VideoMovie {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedPreciseAssetStart;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cachedPreciseAssetStart;
@property (nonatomic, readonly) bool front;

- (void)cacheVideoTrackInformationOfAsset:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cachedPreciseAssetStart;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)duration;
- (bool)front;
- (id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 front:(bool)arg3;
- (void)setCachedPreciseAssetStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;

@end
