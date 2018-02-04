/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDLocalDeviceSecretHandler : NSObject <CDPLocalDeviceSecretHandlerProtocol> {
    CDPContext * _context;
    id /* block */  _validationHandler;
}

@property (nonatomic, readonly) CDPContext *context;

- (void).cxx_destruct;
- (id)context;
- (id)initWithContext:(id)arg1 validSecretHandler:(id /* block */)arg2;
- (void)userDidCancelWithError:(id)arg1;
- (void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2;

@end
