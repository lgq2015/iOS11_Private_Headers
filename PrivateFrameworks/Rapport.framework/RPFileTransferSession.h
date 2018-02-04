/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPFileTransferSession : RPProfileSession {
    id /* block */  _errorHandler;
    id /* block */  _progressHandler;
    NSUUID * _transferIdentifier;
}

@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) NSUUID *transferIdentifier;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_cleanup;
- (void)_invalidate;
- (void)addFileURL:(id)arg1;
- (id /* block */)errorHandler;
- (id)init;
- (id /* block */)progressHandler;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setTransferIdentifier:(id)arg1;
- (id)transferIdentifier;

@end
