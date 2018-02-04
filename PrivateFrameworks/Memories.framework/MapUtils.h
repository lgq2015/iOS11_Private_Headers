/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MapUtils : NSObject

+ (float)bestEndingLongitude:(float)arg1 forShortestTripFromLongitude:(float)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })geographicRectFromPixelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onEquirectangularMapWithSize:(struct CGSize { double x1; double x2; })arg2 geographicBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)locationWithImageURL:(id)arg1;
+ (struct CGPoint { double x1; double x2; })pixelFromLatitude:(float)arg1 longitude:(float)arg2 onEquirectangularMapWithSize:(struct CGSize { double x1; double x2; })arg3 geographicBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
