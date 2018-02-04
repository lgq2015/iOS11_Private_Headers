/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

@interface MMCSController : NSObject {
    struct __CFURL { } * _chunkStoreURL;
    long long  _connectionBehavior;
    unsigned long long  _currentItemID;
    struct _mmcs_engine { } * _engine;
    id  _powerAssertion;
    NSTimer * _powerAssertionTimer;
    NSMutableDictionary * _requestIDToBlockMap;
    NSMutableDictionary * _requestIDToRemainingTransfersMap;
    NSMutableDictionary * _requestIDToTransfersMap;
    NSMutableDictionary * _transferToRequestIDsMap;
    NSMutableDictionary * _transfers;
}

@property long long connectionBehavior;
@property (readonly) bool isActive;
@property (readonly) NSMutableDictionary *transfers;

- (id)_MMCSICloudRequestHeadersCopy:(struct __CFString { }*)arg1;
- (void)_MMCSRegisterItems:(struct _mmcs_engine { }*)arg1 requestorContext:(void*)arg2 requestOptions:(id)arg3 completionCallback:(int (*)arg4;
- (void)_addPreauthorizationOptions:(id)arg1 forFiles:(id)arg2;
- (struct _mmcs_engine { }*)_engine;
- (void)_getItemCompleted:(id)arg1 path:(id)arg2 error:(id)arg3;
- (void)_getItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (bool)_getTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id*)arg5;
- (void)_handleRegistrationForMMCSPutFile:(id)arg1 preauthenticate:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)_itemCompleted:(id)arg1;
- (id)_optionsForFiles:(id)arg1;
- (void)_processCompletedItem:(id)arg1 error:(id)arg2;
- (void)_putItemCompleted:(id)arg1 error:(id)arg2;
- (void)_putItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (bool)_putTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id*)arg5;
- (void)_registerFiles:(id)arg1 preauthenticate:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)_registerPowerAssertionIfNeeded;
- (void)_registerTransfers:(id)arg1 preauthenticate:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)_registeredTransferForGUID:(id)arg1;
- (id)_registeredTransferForItemID:(unsigned long long)arg1;
- (void)_releasePowerAssertion;
- (void)_releasePowerAssertionAndSimulateCrash;
- (void)_setScheduledTransfers:(id)arg1 block:(id /* block */)arg2;
- (void)_unregisterPowerAssertion;
- (bool)_unregisterTransfers:(id)arg1;
- (long long)connectionBehavior;
- (void)dealloc;
- (id)getContentHeadersAsString;
- (void)getFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (bool)isActive;
- (id)parseContentHeaderAsDictionary:(id)arg1 treatValuesAsArrays:(bool)arg2;
- (void)putFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 preauthenticate:(bool)arg5 completionBlock:(id /* block */)arg6;
- (void)registerFilesForDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)registerFilesForUpload:(id)arg1 withPreauthentication:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setConnectionBehavior:(long long)arg1;
- (id)transfers;
- (bool)unregisterFiles:(id)arg1;

@end
