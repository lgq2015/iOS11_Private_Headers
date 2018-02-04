/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
 */

@interface PHMediaFormatConversionImplementation_iOS : NSObject <PHMediaFormatConversionImplementation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) long long transferBehaviorUserPreference;

- (void)addCommonMetadataFromRequest:(id)arg1 toOptions:(id)arg2;
- (void)performConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performImageConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)performSinglePassVideoConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performVideoConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)transferBehaviorUserPreference;

@end
