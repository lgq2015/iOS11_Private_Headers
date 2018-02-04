/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPMetafileImage : MFPImage {
    NSData * mMetafileData;
}

- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 unit:(int)arg3 effect:(id)arg4;
- (id)initWithMetafileData:(id)arg1;
- (id)phoneImage;

@end
