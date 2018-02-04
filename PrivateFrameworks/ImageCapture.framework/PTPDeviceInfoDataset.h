/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPDeviceInfoDataset : NSObject {
    NSMutableArray * _captureFormats;
    NSMutableData * _content;
    NSMutableArray * _devicePropertiesSupported;
    NSString * _deviceVersion;
    bool  _dirty;
    NSMutableArray * _eventsSupported;
    unsigned short  _functionalMode;
    NSMutableArray * _imageFormats;
    NSString * _manufacturer;
    NSString * _model;
    NSMutableArray * _operationsSupported;
    bool  _readOnlyObject;
    NSString * _serialNumber;
    unsigned short  _standardVersion;
    NSString * _vendorExtensionDescription;
    unsigned int  _vendorExtensionID;
    unsigned short  _vendorExtensionVersion;
}

- (id)canonicalManufacturer;
- (id)captureFormats;
- (id)content;
- (void)dealloc;
- (id)description;
- (id)devicePropertiesSupported;
- (id)deviceVersion;
- (id)eventsSupported;
- (unsigned short)functionalMode;
- (id)imageFormats;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithMutableData:(id)arg1;
- (id)manufacturer;
- (id)model;
- (id)operationsSupported;
- (id)serialNumber;
- (void)setCaptureFormats:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDevicePropertiesSupported:(id)arg1;
- (void)setDeviceVersion:(id)arg1;
- (void)setEventsSupported:(id)arg1;
- (void)setFunctionalMode:(unsigned short)arg1;
- (void)setImageFormats:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setOperationsSupported:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setStandardVersion:(unsigned short)arg1;
- (void)setVendorExtensionDescription:(id)arg1;
- (void)setVendorExtensionID:(unsigned int)arg1;
- (void)setVendorExtensionVersion:(unsigned short)arg1;
- (unsigned short)standardVersion;
- (void)updateContent;
- (id)vendorExtensionDescription;
- (unsigned int)vendorExtensionID;
- (unsigned short)vendorExtensionVersion;

@end
