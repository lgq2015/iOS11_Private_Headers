/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCubicBezierToPathElement : OADPathElement {
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } y; 
    }  mControlPoint1;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } y; 
    }  mControlPoint2;
    bool  mRelative;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } y; 
    }  mToPoint;
}

- (struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })controlPoint1;
- (struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })controlPoint2;
- (id)initWithControlPoint1:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg1 controlPoint2:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg2 toPoint:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg3;
- (bool)relative;
- (void)setRelative:(bool)arg1;
- (struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })toPoint;

@end
