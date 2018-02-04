/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceId : NSObject {
    struct shared_ptr<vision::mod::VIPIdentification> { 
        struct VIPIdentification {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mVIPAlgorithmImpl;
    CVMLFaceModelObservation * _modelData;
}

@property (nonatomic, readonly) bool buildModels;
@property (retain) CVMLFaceModelObservation *modelData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)buildModels;
- (bool)enrollFace:(id)arg1 andParameters:(id)arg2 error:(id*)arg3;
- (id)initWithFaceModelData:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)modelData;
- (id)probeForIdentity:(id)arg1 andParameters:(id)arg2 error:(id*)arg3;
- (bool)removeFace:(id)arg1 andParameters:(id)arg2 error:(id*)arg3;
- (bool)removeIdentity:(id)arg1 andParameters:(id)arg2 error:(id*)arg3;
- (void)setModelData:(id)arg1;

@end
