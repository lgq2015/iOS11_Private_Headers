/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherImageLoader : NSObject {
    NSCache * _conditionImagesCache;
    double  _scale;
    CPBitmapStore * _store;
}

@property (nonatomic, retain) NSCache *conditionImagesCache;
@property (nonatomic, retain) CPBitmapStore *store;

+ (void)cacheImageIfNecessary:(id)arg1;
+ (id)cachedImageNamed:(id)arg1 completion:(id /* block */)arg2;
+ (id)conditionImageBundle;
+ (id)conditionImageNameWithConditionIndex:(long long)arg1;
+ (id)conditionImageNamed:(id)arg1;
+ (id)conditionImageWithConditionIndex:(long long)arg1;
+ (id)sharedImageLoader;

- (void).cxx_destruct;
- (id)cachedImageForKey:(id)arg1;
- (id)conditionImagesCache;
- (id)init;
- (void)setConditionImagesCache:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setStore:(id)arg1;
- (id)store;

@end
