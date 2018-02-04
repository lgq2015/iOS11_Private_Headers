/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PMObjectCacheEntry : NSObject {
    NSString * _cacheKey;
    double  _cost;
    float  _freq;
    unsigned int  _hashValue;
    id  _item;
    unsigned long long  _lastAccess;
    unsigned long long  _size;
    float  _value;
}

- (id)cacheKey;
- (bool)canBePurgedFromCache;
- (double)cost;
- (void)dealloc;
- (id)getItem;
- (unsigned long long)getSize;
- (float)getValue:(unsigned long long)arg1 decayRate:(float)arg2;
- (unsigned int)hashValue;
- (id)initWithKey:(id)arg1 cacheItem:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 forCache:(id)arg5;
- (unsigned long long)lastAccess;
- (void)resetValue:(unsigned long long)arg1 responseRate:(float)arg2 penalty:(float)arg3;
- (void)setCacheKey:(id)arg1;
- (void)setLastAccess:(unsigned long long)arg1;
- (void)setValue:(unsigned long long)arg1 cost:(double)arg2 maxCacheSize:(unsigned long long)arg3;

@end
