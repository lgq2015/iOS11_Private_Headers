/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDrawableMapper : CMMapper {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBox;
    OADDrawable * mDrawable;
    NSString * mExtension;
    NSData * mImageBinaryData;
    bool  mIsCropped;
    bool  mIsSupported;
    NSString * mName;
    OADOrientedBounds * mOrientedBounds;
    int  mResourceType;
    float  mRotation;
    NSString * mSourcePath;
    CMDrawableStyle * mStyle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mUncroppedBox;
}

- (void).cxx_destruct;
- (id)blipAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })box;
- (void)calculateUncroppedBox:(id)arg1;
- (id)convertMetafileToPdf;
- (id)initWithOadDrawable:(id)arg1 parent:(id)arg2;
- (id)initWithParent:(id)arg1;
- (bool)isCropped;
- (void)mapBounds;
- (void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(bool)arg3 withState:(id)arg4;
- (void)mapImageBinaryData;
- (void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (float)rotation;
- (id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2;
- (void)setBoundingBox;
- (void)setRotation:(float)arg1;
- (void)setWithOadImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shapeTextBoxRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })uncroppedBox;

@end
