/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIPipelineFilters : NSObject

+ (id)applyOrientationFilter;
+ (id)autoCropFilter;
+ (id)noCropFilter;
+ (id)noMuteFilter;
+ (id)noRedEyeFilter;
+ (id)noTrimFilter;
+ (id)originalWithGeometry;
+ (id)postGeometryFilter;
+ (id)preGeometryFilter;
+ (id)sourceFilterIncludingOrientation:(bool)arg1;
+ (id)stopAtTagIncludeGeometryFilter:(id)arg1;
+ (id)sushiLevel1Filter;

@end
