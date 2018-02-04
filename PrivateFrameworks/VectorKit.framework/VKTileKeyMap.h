/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileKeyMap : NSObject {
    void * _map;
    long long  _type;
}

- (id)contentsDescription;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)initWithMapType:(long long)arg1;
- (id)objectForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)setObject:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;

@end
