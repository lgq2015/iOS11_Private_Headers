/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneSolidBrush : MFPhoneBrush {
    OITSUColor * m_colour;
}

+ (id)solidBrushWithColour:(id)arg1;

- (void)dealloc;
- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (id)initWithColour:(id)arg1;

@end
