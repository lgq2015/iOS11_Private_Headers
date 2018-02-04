/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnnotationMarker : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _presentationCoordinate;
}

@property (nonatomic) struct { double x1; double x2; } presentationCoordinate;

- (struct { double x1; double x2; })presentationCoordinate;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;

@end
