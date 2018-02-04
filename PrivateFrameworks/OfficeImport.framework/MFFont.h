/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFFont : NSObject <MFObject> {
    unsigned int  m_elfCulture;
    NSString * m_elfFullName;
    unsigned int  m_elfMatch;
    NSString * m_elfStyle;
    unsigned int  m_elfStyleSize;
    unsigned int  m_elfVendorId;
    unsigned int  m_elfVersion;
    int  m_family;
    int  m_lfCharSet;
    unsigned char  m_lfClipPrecision;
    int  m_lfEscapement;
    NSString * m_lfFaceName;
    int  m_lfHeight;
    bool  m_lfItalic;
    int  m_lfOrientation;
    int  m_lfOutPrecision;
    int  m_lfQuality;
    bool  m_lfStrikeOut;
    bool  m_lfUnderline;
    int  m_lfWeight;
    int  m_lfWidth;
    int  m_pitch;
}

+ (id)fontWithExtendedFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(bool)arg6 lfUnderline:(bool)arg7 lfStrikeOut:(bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22;
+ (id)fontWithFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(bool)arg6 lfUnderline:(bool)arg7 lfStrikeOut:(bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;
+ (id)fontWithStockFont:(int)arg1;

- (void)dealloc;
- (double)escapement;
- (id)faceName;
- (double)fontHeight;
- (int)getCharset;
- (id)initWithAllFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(bool)arg6 lfUnderline:(bool)arg7 lfStrikeOut:(bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22;
- (id)initWithFeatures:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(bool)arg6 lfUnderline:(bool)arg7 lfStrikeOut:(bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;
- (id)initWithStockFont:(int)arg1;
- (int)selectInto:(id)arg1;
- (bool)strikeout;
- (id)stringWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textExtent:(id)arg1 options:(int)arg2 in_spacingValues:(int*)arg3 in_count:(int)arg4;
- (bool)underline;

@end
