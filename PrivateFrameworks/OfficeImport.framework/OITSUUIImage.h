/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUUIImage : OITSUImage {
    OITSUUIImageAutoreleasePoolGuard * mGuard;
    UIImage * mUIImage;
}

+ (void)i_performBlockWithUIImageLock:(id /* block */)arg1;
+ (id)imageNamed:(id)arg1;

- (struct CGImage { }*)CGImage;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)UIImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)imageOrientation;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithUIImage:(id)arg1;
- (id)p_initWithUIImage:(id)arg1 needsGuard:(bool)arg2;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
