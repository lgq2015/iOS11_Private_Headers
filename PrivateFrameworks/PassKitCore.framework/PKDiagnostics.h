/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDiagnostics : NSObject

+ (id)_allPasses;
+ (id)_metadataForCardAtURL:(id)arg1;
+ (id)_secureElementData;
+ (void)generateDiagnosticsPackageWithPassLibrary:(bool)arg1 completion:(id /* block */)arg2;
+ (id)generateUbiquityDiagnosticsFile:(bool)arg1;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(bool)arg1 completion:(id /* block */)arg2;

@end
