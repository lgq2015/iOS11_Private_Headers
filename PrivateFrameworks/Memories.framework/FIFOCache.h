/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FIFOCache : NSObject {
    NSMutableArray * m_FIFO;
    NSMutableDictionary * m_cache;
    int  m_capacity;
}

+ (void)noteApplicationDidReceiveMemoryWarning;

- (void)addObjectsFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (void)dealloc;
- (id)description;
- (id)initWithCapacity:(int)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end