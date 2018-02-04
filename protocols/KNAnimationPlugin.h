/* made by EzioChiu.
 */

@protocol KNAnimationPlugin <NSObject>

@required

+ (long long)animationCategory;
+ (NSString *)animationFilter;
+ (NSString *)animationName;
+ (NSDictionary *)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)fillLocalizedDirectionMenu:(KNAnimationPluginMenu *)arg1 forType:(long long)arg2;
+ (NSString *)localizedMenuString:(long long)arg1;
+ (NSArray *)supportedTypes;
+ (NSString *)thumbnailImageNameForType:(long long)arg1;

- (id)initWithAnimationContext:(KNAnimationContext *)arg1;

@optional

+ (NSArray *)customAttributes;
+ (NSDictionary *)customEffectTimingCurveDisplayParametersForAttributes:(NSDictionary *)arg1 layoutStyleOnly:(bool)arg2;
+ (long long)rendererTypeForCapabilities:(TSDCapabilities *)arg1;

- (NSDictionary *)animationInfoForAnimatedBuild:(KNAnimatedBuild *)arg1;

@end