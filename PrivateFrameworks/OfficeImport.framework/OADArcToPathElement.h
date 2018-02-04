/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADArcToPathElement : OADPathElement {
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mAngleLength;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } y; 
    }  mSemiaxes;
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mStartAngle;
}

- (struct OADAdjustCoord { bool x1; int x2; })angleLength;
- (id)initWithSemiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg1 startAngle:(struct OADAdjustCoord { bool x1; int x2; })arg2 angleLength:(struct OADAdjustCoord { bool x1; int x2; })arg3;
- (struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })semiaxes;
- (struct OADAdjustCoord { bool x1; int x2; })startAngle;

@end
