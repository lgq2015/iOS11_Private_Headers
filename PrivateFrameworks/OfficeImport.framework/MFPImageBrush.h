/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPImageBrush : MFPBrush {
    OITSUImage * mPhoneImage;
    OITSUColor * mPhonePatternColor;
}

- (id)color;
- (void)dealloc;
- (void)fillPath:(id)arg1;
- (id)initWithPhoneImage:(id)arg1;

@end
