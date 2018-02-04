/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FrameGenerator : NSObject {
    long long  _maximumCacheSize;
    bool  m_cropImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_cropRect;
    bool  m_disablePosterFrame;
    NSLock * m_fetchLock;
    NSMutableDictionary * m_fetchNotificationList;
    AVAssetImageGenerator * m_imageGenerator;
    struct CGSize { 
        double width; 
        double height; 
    }  m_maximumSize;
    VideoMovie * m_movie;
    bool  m_requestedTimeTolerance;
    float  m_rotation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_timeToleranceAfter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_timeToleranceBefore;
}

@property (nonatomic) bool disablePosterFrame;
@property (nonatomic, readonly) bool isQueueEmpty;
@property (nonatomic, readonly) long long maximumCacheSize;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic, retain) VideoMovie *movie;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic) float rotation;

+ (id)cachedFrameForMovie:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 nearby:(bool)arg3 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4 size:(struct CGSize { double x1; double x2; })arg5 withRotation:(double)arg6;
+ (void)changeTimesToHighPriority:(id)arg1 forGenerator:(id)arg2;
+ (void)ensureCacheDirectoryExists;
+ (id)imageKeyForTime:(int)arg1 size:(struct CGSize { double x1; double x2; })arg2 withRotation:(float)arg3;
+ (bool)isAnythingFetching;
+ (void)logAllQueuedTimes;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)nukeCaches;
+ (void)pauseFetching;
+ (id)posterCacheDirectory;
+ (id)posterCacheKeyForMovie:(id)arg1;
+ (id)posterFrameForMovie:(id)arg1;
+ (void)queueGenerator:(id)arg1 forTimes:(id)arg2 highPriority:(bool)arg3 completionBlock:(id /* block */)arg4;
+ (void)queueNextItem;
+ (void)queueOne:(id)arg1 times:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)removeQueueEntriesForGenerator:(id)arg1;
+ (void)resumeFetching;
+ (void)setCachedFrame:(id)arg1 forMovie:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 canPoster:(bool)arg4 size:(struct CGSize { double x1; double x2; })arg5 withRotation:(double)arg6 maximumCacheSize:(long long)arg7;
+ (void)setupCaches;

- (id)applyCrop:(id)arg1;
- (id)applyRotation:(id)arg1;
- (void)cancelAllFetching;
- (void)cancelFetchingOutsideActiveSegment:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 until:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 maxRequestInFlight:(long long)arg3;
- (void)changeTimesToHighPriority:(id)arg1;
- (void)clearImageGenerator;
- (void)cropImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (bool)disablePosterFrame;
- (void)fetchTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 highPriority:(bool)arg2 resultBlock:(id /* block */)arg3;
- (bool)fetchTimeInQueue:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)imageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)imageFrom:(struct CGImage { }*)arg1;
- (id)imageGenerator;
- (id)initWithMovie:(id)arg1 maximumCacheSize:(long long)arg2;
- (bool)isFetching:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)isQueueEmpty;
- (void)logQueuedTimes;
- (long long)maximumCacheSize;
- (struct CGSize { double x1; double x2; })maximumSize;
- (id)movie;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)requestedTimeTolerance:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 after:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (float)rotation;
- (void)setDisablePosterFrame:(bool)arg1;
- (void)setMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMovie:(id)arg1;
- (void)setRotation:(float)arg1;

@end
