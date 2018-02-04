/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {
    NSNumber * _accountID;
    NSData * _actionData;
    NSString * _actionName;
    bool  _allowsBootstrapCellularData;
    long long  _protocolVersion;
    NSString * _userAgent;
    bool  _waitsForPurchaseOperations;
}

@property (copy) NSNumber *accountIdentifier;
@property (copy) NSData *actionData;
@property (copy) NSString *actionName;
@property bool allowsBootstrapCellularData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long protocolVersion;
@property (readonly) Class superclass;
@property (copy) NSString *userAgent;
@property bool waitsForPurchaseOperations;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)actionData;
- (id)actionName;
- (bool)allowsBootstrapCellularData;
- (id)copyXPCEncoding;
- (id)initWithURLResponse:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)protocolVersion;
- (void)setAccountIdentifier:(id)arg1;
- (void)setActionData:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setProtocolVersion:(long long)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setWaitsForPurchaseOperations:(bool)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithDetailedCompletionBlock:(id /* block */)arg1;
- (id)userAgent;
- (bool)waitsForPurchaseOperations;

@end
