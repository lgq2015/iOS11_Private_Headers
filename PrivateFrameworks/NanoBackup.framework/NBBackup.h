/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
 */

@interface NBBackup : NSObject <NSSecureCoding> {
    NSURL * _activeWatchFaceFileURL;
    NSNumber * _backingColor;
    NSNumber * _bcmWindowMaterial;
    NSNumber * _bottomEnclosureMaterial;
    NSNumber * _coverGlassColor;
    NSString * _deviceColor;
    NSString * _deviceEnclosureColor;
    bool  _diagnosticsOptInEnabled;
    NSNumber * _fcmMaterial;
    bool  _hasResolvedActiveWatchFaceFilePath;
    NSNumber * _housingColor;
    NSDate * _lastModificationDate;
    bool  _locationOptInEnabled;
    NSString * _marketingVersion;
    NSString * _name;
    NSString * _productName;
    NSString * _productType;
    NSNumber * _sizeInBytes;
    NSString * _systemBuildVersion;
    NSString * _systemVersion;
    NSNumber * _topEnclosureMaterial;
    NSUUID * _uuid;
    NSString * _watchFace;
    NSString * _watchFaceColor;
}

@property (nonatomic, retain) NSURL *activeWatchFaceFileURL;
@property (nonatomic, retain) NSNumber *backingColor;
@property (nonatomic, retain) NSNumber *bcmWindowMaterial;
@property (nonatomic, retain) NSNumber *bottomEnclosureMaterial;
@property (nonatomic, retain) NSNumber *coverGlassColor;
@property (nonatomic, retain) NSString *deviceColor;
@property (nonatomic, retain) NSString *deviceEnclosureColor;
@property (getter=isDiagnosticsOptInEnabled, nonatomic) bool diagnosticsOptInEnabled;
@property (nonatomic, retain) NSNumber *fcmMaterial;
@property (nonatomic) bool hasResolvedActiveWatchFaceFilePath;
@property (nonatomic, retain) NSNumber *housingColor;
@property (nonatomic, retain) NSDate *lastModificationDate;
@property (getter=isLocationOptInEnabled, nonatomic) bool locationOptInEnabled;
@property (nonatomic, retain) NSString *marketingVersion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *productName;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) NSNumber *sizeInBytes;
@property (nonatomic, retain) NSString *systemBuildVersion;
@property (nonatomic, retain) NSString *systemVersion;
@property (nonatomic, retain) NSNumber *topEnclosureMaterial;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSString *watchFace;
@property (nonatomic, retain) NSString *watchFaceColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeWatchFaceFileURL;
- (id)backingColor;
- (id)bcmWindowMaterial;
- (id)bottomEnclosureMaterial;
- (id)coverGlassColor;
- (id)description;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (void)encodeWithCoder:(id)arg1;
- (id)fcmMaterial;
- (bool)hasResolvedActiveWatchFaceFilePath;
- (id)housingColor;
- (id)initWithCoder:(id)arg1;
- (bool)isDiagnosticsOptInEnabled;
- (bool)isLocationOptInEnabled;
- (id)lastModificationDate;
- (id)marketingVersion;
- (id)name;
- (id)productName;
- (id)productType;
- (void)setActiveWatchFaceFileURL:(id)arg1;
- (void)setBackingColor:(id)arg1;
- (void)setBcmWindowMaterial:(id)arg1;
- (void)setBottomEnclosureMaterial:(id)arg1;
- (void)setCoverGlassColor:(id)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setDeviceEnclosureColor:(id)arg1;
- (void)setDiagnosticsOptInEnabled:(bool)arg1;
- (void)setFcmMaterial:(id)arg1;
- (void)setHasResolvedActiveWatchFaceFilePath:(bool)arg1;
- (void)setHousingColor:(id)arg1;
- (void)setLastModificationDate:(id)arg1;
- (void)setLocationOptInEnabled:(bool)arg1;
- (void)setMarketingVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSizeInBytes:(id)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setTopEnclosureMaterial:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWatchFace:(id)arg1;
- (void)setWatchFaceColor:(id)arg1;
- (id)sizeInBytes;
- (id)systemBuildVersion;
- (id)systemVersion;
- (id)topEnclosureMaterial;
- (id)uuid;
- (id)watchFace;
- (id)watchFaceColor;

@end
