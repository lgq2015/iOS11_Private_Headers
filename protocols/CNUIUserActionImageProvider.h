/* made by EzioChiu.
 */

@protocol CNUIUserActionImageProvider <NSObject>

@required

+ (UIImage *)imageForActionType:(NSString *)arg1 imageStyle:(long long)arg2;
+ (<CNUIUserActionTemplateImage> *)templateImageForActionType:(NSString *)arg1 imageStyle:(long long)arg2;

@end
