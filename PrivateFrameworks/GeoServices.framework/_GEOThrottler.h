/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOThrottler : NSObject {
    unsigned int  _currentIndex;
    struct vector<(anonymous namespace)::Timestamp, std::__1::allocator<(anonymous namespace)::Timestamp> >="__begin_"^{Timestamp {}  _lastRequestTimes;
    double  _timeWindow;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addRequestTimestamp;
- (id)description;
- (id)initForKey:(struct GEOThrottleKey { unsigned int x1; })arg1;
- (id)initWithRequestCount:(unsigned long long)arg1 interval:(double)arg2;
- (unsigned long long)remainingEntries;

@end
