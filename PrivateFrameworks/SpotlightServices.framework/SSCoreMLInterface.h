/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SSCoreMLInterface : NSObject {
    MLModelAsset * asset;
    MLModel * model;
}

- (void).cxx_destruct;
- (id)getDescription;
- (id)getVersionString;
- (id)initSpecificModel:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (double)predict:(id)arg1 error:(id*)arg2 isL2:(bool)arg3;

@end
