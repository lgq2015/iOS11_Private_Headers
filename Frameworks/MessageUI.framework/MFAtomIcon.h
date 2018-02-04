/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAtomIcon : UIImage {
    struct CGPoint { 
        double x; 
        double y; 
    }  drawingOffset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } drawingOffset;

- (struct CGPoint { double x1; double x2; })drawingOffset;
- (void)setDrawingOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
