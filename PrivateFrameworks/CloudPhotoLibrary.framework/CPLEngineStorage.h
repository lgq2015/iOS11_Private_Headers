/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {
    CPLEngineStore * _engineStore;
    NSString * _name;
    CPLPlatformObject * _platformObject;
    bool  _superWasCalled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineStore *engineStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (bool)_checkSuperWasCalled;
- (bool)closeWithError:(id*)arg1;
- (id)description;
- (id)engineStore;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (id)name;
- (bool)openWithError:(id*)arg1;
- (id)platformObject;
- (id)status;
- (id)statusDictionary;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
