/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageExportFormatPNG : NUImageExportFormat {
    bool  _preserveAlpha;
}

@property bool preserveAlpha;

- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileType;
- (id)init;
- (bool)preserveAlpha;
- (int)renderFormat;
- (void)setPreserveAlpha:(bool)arg1;

@end
