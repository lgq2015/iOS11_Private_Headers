/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCameraReaderOutputExpirationDate : CRCameraReaderOutput

@property (readonly) NSNumber *dayValue;
@property (readonly) NSNumber *monthValue;
@property (readonly) NSNumber *yearValue;

- (id)dayValue;
- (id)monthValue;
- (id)yearValue;

@end