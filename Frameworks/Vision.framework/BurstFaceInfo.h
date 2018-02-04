/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface BurstFaceInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  hwCenter;
    int  hwFaceId;
    int  hwLastFrameSeen;
    struct CGSize { 
        double width; 
        double height; 
    }  hwSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  swCenter;
    int  swFaceId;
    int  swLastFrameSeen;
    struct CGSize { 
        double width; 
        double height; 
    }  swSize;
}

@property struct CGPoint { double x1; double x2; } hwCenter;
@property int hwFaceId;
@property int hwLastFrameSeen;
@property struct CGSize { double x1; double x2; } hwSize;
@property struct CGPoint { double x1; double x2; } swCenter;
@property int swFaceId;
@property int swLastFrameSeen;
@property struct CGSize { double x1; double x2; } swSize;

- (struct CGPoint { double x1; double x2; })hwCenter;
- (int)hwFaceId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hwFaceRect;
- (int)hwLastFrameSeen;
- (struct CGSize { double x1; double x2; })hwSize;
- (id)init;
- (float)overlapWithHwRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)overlapWithSwRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHwCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHwFaceId:(int)arg1;
- (void)setHwLastFrameSeen:(int)arg1;
- (void)setHwSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSwCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSwFaceId:(int)arg1;
- (void)setSwLastFrameSeen:(int)arg1;
- (void)setSwSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })swCenter;
- (int)swFaceId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })swFaceRect;
- (int)swLastFrameSeen;
- (struct CGSize { double x1; double x2; })swSize;

@end
