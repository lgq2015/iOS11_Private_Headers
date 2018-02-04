/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamFramebufferManager : NSObject {
    TDreamFramebuffer * _lookUpBuffer;
    TDreamFramebuffer * _outputBufferAndTexture;
    NSString * actualLookUp;
    NSString * actualPalette;
    NSMutableArray * framebufferArrayLarge;
    NSMutableArray * framebufferArraySmall;
    struct CGSize { 
        double width; 
        double height; 
    }  largeUseSize;
    id  memoryWarningObserver;
    struct CGSize { 
        double width; 
        double height; 
    }  smallUseSize;
}

@property (nonatomic, retain) TDreamFramebuffer *lookUpBuffer;
@property (nonatomic, retain) TDreamFramebuffer *outputBufferAndTexture;

- (void).cxx_destruct;
- (void)addImageBufferToArray:(int)arg1 ipImage:(struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; })arg2;
- (void)clearFrameBuffers;
- (void)dealloc;
- (void)deleteAllFramebuffers;
- (void)deleteLargeFramebuffers;
- (void)deleteSmallFramebuffers;
- (unsigned int)getBufferFromArray:(int)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned int)getOutputBufferNameWithIPImage:(struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; })arg1;
- (unsigned int)getOutputBufferNamer;
- (unsigned int)getTextureNameFromArray:(int)arg1;
- (id)init;
- (id)lookUpBuffer;
- (void)newLookUp:(id)arg1;
- (id)outputBufferAndTexture;
- (void)setLookUpBuffer:(id)arg1;
- (void)setOutputBufferAndTexture:(id)arg1;

@end
