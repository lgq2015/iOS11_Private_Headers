/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSharingRemakerOptions : NSObject <NSCopying> {
    NSString * _customAccessibilityLabel;
    NSString * _exportPreset;
    NSURL * _outputDirectoryURL;
    NSString * _outputFilename;
    bool  _shouldConvertToSRGB;
    bool  _shouldStripAllMetadata;
    bool  _shouldStripLocation;
}

@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (nonatomic, copy) NSString *exportPreset;
@property (nonatomic, copy) NSURL *outputDirectoryURL;
@property (nonatomic, copy) NSString *outputFilename;
@property (nonatomic) bool shouldConvertToSRGB;
@property (nonatomic) bool shouldStripAllMetadata;
@property (nonatomic) bool shouldStripLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customAccessibilityLabel;
- (id)exportPreset;
- (id)outputDirectoryURL;
- (id)outputFilename;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setExportPreset:(id)arg1;
- (void)setOutputDirectoryURL:(id)arg1;
- (void)setOutputFilename:(id)arg1;
- (void)setShouldConvertToSRGB:(bool)arg1;
- (void)setShouldStripAllMetadata:(bool)arg1;
- (void)setShouldStripLocation:(bool)arg1;
- (bool)shouldConvertToSRGB;
- (bool)shouldStripAllMetadata;
- (bool)shouldStripLocation;

@end
