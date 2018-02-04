/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPContainerHint : NSObject {
    long long  mAnchorLocation;
    double  mAttachmentPosition;
    long long  mCIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mFrame;
    long long  mLIndex;
    long long  mPageIndex;
    long long  mSIndex;
}

- (long long)anchorLocation;
- (double)attachmentPosition;
- (long long)cIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithPageIndex:(long long)arg1 cIndex:(long long)arg2 sIndex:(long long)arg3 lIndex:(long long)arg4 anchorLocation:(long long)arg5 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (long long)lIndex;
- (long long)pageIndex;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (long long)sIndex;

@end
