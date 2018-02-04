/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVShowDialogRequest : SSRequest <SSXPCCoding> {
    NSObject<OS_xpc_object> * _dialog;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *encodedDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)encodedDialog;
- (id)initWithEncodedDialog:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithDialogResponseBlock:(id /* block */)arg1;

@end