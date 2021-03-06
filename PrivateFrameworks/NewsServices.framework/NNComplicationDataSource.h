/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
 */

@interface NNComplicationDataSource : NSObject

+ (id)_complicationTitle;
+ (id)_loadingStoriesLargeString;
+ (id)_loadingStoriesShortString;
+ (id)_noNewStoriesLargeString;
+ (id)_noNewStoriesShortString;
+ (id)_templateForFamily:(long long)arg1 newsStoryResult:(id)arg2 compact:(bool)arg3;
+ (id)imageProviderWithForegroundName:(id)arg1 compact:(bool)arg2;
+ (id)newsTintColor;
+ (id)staticTemplateForFamily:(long long)arg1 compact:(bool)arg2;

@end
