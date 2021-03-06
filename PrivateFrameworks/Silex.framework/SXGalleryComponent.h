/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXGalleryComponent : SXComponent

@property (nonatomic, readonly) NSString *galleryType;
@property (nonatomic, readonly) SXJSONArray *items;

+ (id)typeString;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (Class)componentViewClass;

@end
