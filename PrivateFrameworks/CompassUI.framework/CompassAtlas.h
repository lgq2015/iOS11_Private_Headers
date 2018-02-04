/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@interface CompassAtlas : NSObject {
    CompassAtlasManifest * _manifest;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned int  _texName;
}

- (void).cxx_destruct;
- (void)bind;
- (void)dealloc;
- (id)initWithImageData:(char *)arg1 manifest:(id)arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; })metadataForImageNamed:(id)arg1;

@end
