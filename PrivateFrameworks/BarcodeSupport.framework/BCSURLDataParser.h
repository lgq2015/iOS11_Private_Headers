/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSURLDataParser : NSObject <BCSDataParser>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_canonicalizeMessageURL:(id)arg1;
+ (long long)_dataTypeForSchemeIfSupportedByDataDetectors:(id)arg1;
+ (id)parseString:(id)arg1;

@end
