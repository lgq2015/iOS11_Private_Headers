/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStoreTransaction : NSObject {
    NSThread * _currentThread;
    NSError * _error;
    bool  _forWrite;
    NSString * _name;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (bool)_forWrite;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)arg1;
- (bool)canRead;
- (bool)canWrite;
- (id)description;
- (bool)do:(id /* block */)arg1;
- (id)error;
- (id)initForWrite:(bool)arg1;
- (id)name;
- (void)setError:(id)arg1;
- (void)setName:(id)arg1;

@end
