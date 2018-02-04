/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderCache : NSObject {
    TSCH3DDictionaryOfDictionary * mCache;
    NSMutableSet * mEnabledKeys;
}

+ (id)cache;
+ (id)cacheFromScene:(id)arg1;

- (bool)cacheEnabledForKey:(id)arg1;
- (id)cacheObjectForKey:(id)arg1 cacheID:(id)arg2 created:(bool*)arg3 ifAbsent:(id /* block */)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enableCache:(bool)arg1 forKey:(id)arg2;
- (id)init;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2 cacheID:(id)arg3;

@end
