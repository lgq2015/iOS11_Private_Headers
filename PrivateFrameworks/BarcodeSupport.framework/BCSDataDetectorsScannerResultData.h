/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSDataDetectorsScannerResultData : NSObject <BCSParsedDataPrivate> {
    NSString * _extraPreviewText;
    DDScannerResult * _scannerResult;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DDScannerResult *scannerResult;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)extraPreviewText;
- (id)initWithCoder:(id)arg1;
- (id)initWithScannerResult:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3;
- (id)scannerResult;
- (long long)type;

@end
