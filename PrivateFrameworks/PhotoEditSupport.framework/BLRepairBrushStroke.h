/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRepairBrushStroke : BLBrushStroke {
    struct CGPoint { 
        double x; 
        double y; 
    }  _repairTextureOffset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } repairTextureOffset;

- (id)keysToEncode;
- (struct CGPoint { double x1; double x2; })repairTextureOffset;
- (void)setRepairTextureOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
