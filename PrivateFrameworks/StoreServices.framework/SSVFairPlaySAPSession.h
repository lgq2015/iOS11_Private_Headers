/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFairPlaySAPSession : NSObject <SSVSAPContext> {
    NSData * _certificateData;
    NSObject<OS_dispatch_queue> * _completionBlockQueue;
    SSVFairPlaySAPContext * _context;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _primed;
    SSURLBag * _urlBag;
    SSVURLBagInterpreter * _urlBagInterpreter;
    long long  _version;
}

@property (readonly) long long SAPVersion;
@property (copy) NSData *certificateData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool primed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long version;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (void).cxx_destruct;
- (long long)SAPVersion;
- (id)_establishContext;
- (id)_initSSVFairPlaySAPSession;
- (id)_initWithURLBagInterpreter:(id)arg1 SAPVersion:(long long)arg2;
- (id)_loadCertificateData;
- (id)_postExchangeData:(id)arg1;
- (bool)_primeTheConnection;
- (bool)_shouldRetrySAPOperationForError:(id)arg1;
- (id)_signData:(id)arg1 error:(id*)arg2;
- (id)_urlBagInterpreter;
- (bool)_verifyPrimeResponse:(id)arg1;
- (bool)_verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3;
- (id)certificateData;
- (void)establishSessionWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithSAPVersion:(long long)arg1;
- (id)initWithURLBag:(id)arg1;
- (id)initWithURLBag:(id)arg1 SAPVersion:(long long)arg2;
- (id)initWithURLBagDictionary:(id)arg1;
- (id)initWithURLBagDictionary:(id)arg1 SAPVersion:(long long)arg2;
- (void)primeSessionWithCompletionBlock:(id /* block */)arg1;
- (bool)primed;
- (void)setCertificateData:(id)arg1;
- (void)signData:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)signatureWithData:(id)arg1 error:(id*)arg2;
- (bool)verifyData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3;
- (void)verifySignature:(id)arg1 forData:(id)arg2 completionBlock:(id /* block */)arg3;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

+ (id)sharedDefaultSession;
+ (id)sharedPrimeSession;

@end
