/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

@interface BiometricOperation : NSObject {
    unsigned long long  _absoluteTime;
    BiometricKitXPCExportedClientObject * _client;
    long long  _operationPriority;
    int  _operationStatus;
    int  _operationType;
    NSDictionary * _params;
}

@property (nonatomic) unsigned long long absoluteTime;
@property (nonatomic, retain) BiometricKitXPCExportedClientObject *client;
@property (nonatomic) long long operationPriority;
@property (nonatomic) int operationStatus;
@property (nonatomic) int operationType;
@property (nonatomic, retain) NSDictionary *params;

- (void).cxx_destruct;
- (unsigned long long)absoluteTime;
- (id)client;
- (id)description;
- (id)init;
- (long long)operationPriority;
- (int)operationStatus;
- (int)operationType;
- (id)params;
- (void)setAbsoluteTime:(unsigned long long)arg1;
- (void)setClient:(id)arg1;
- (void)setOperationPriority:(long long)arg1;
- (void)setOperationStatus:(int)arg1;
- (void)setOperationType:(int)arg1;
- (void)setParams:(id)arg1;

@end
