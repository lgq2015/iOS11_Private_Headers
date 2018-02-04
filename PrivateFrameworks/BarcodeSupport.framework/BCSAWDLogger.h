/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSAWDLogger : NSObject

+ (id)sharedLogger;

- (int)_awdBarcodeClientType;
- (int)_awdBarcodeDataTypeFromAction:(id)arg1;
- (int)_awdInvalidBarcodeDataTypeFromInvalidData:(id)arg1;
- (id)barcodeDetectedEventForAction:(id)arg1;
- (void)logBarcodeActivatedEventForAction:(id)arg1;
- (void)logBarcodeDetectedEvent:(id)arg1 startTime:(unsigned long long)arg2;
- (void)logBarcodeDetectedEventForAction:(id)arg1 startTime:(unsigned long long)arg2;
- (void)logBarcodePreviewedEventForContentType:(long long)arg1;

@end
