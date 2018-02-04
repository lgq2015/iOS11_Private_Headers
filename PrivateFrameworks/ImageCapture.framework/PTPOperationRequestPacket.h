/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPOperationRequestPacket : NSObject {
    unsigned int  _dataPhaseInfo;
    int  _numParameters;
    unsigned short  _operationCode;
    unsigned int  _parameters;
    unsigned int  _transactionID;
}

- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned int)arg2;
- (unsigned int)dataPhaseInfo;
- (id)description;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 numParameters:(unsigned int)arg4 parameters:(unsigned int*)arg5;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4 parameter2:(unsigned int)arg5;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4 parameter2:(unsigned int)arg5 parameter3:(unsigned int)arg6;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4 parameter2:(unsigned int)arg5 parameter3:(unsigned int)arg6 parameter4:(unsigned int)arg7;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 dataPhaseInfo:(unsigned int)arg3 parameter1:(unsigned int)arg4 parameter2:(unsigned int)arg5 parameter3:(unsigned int)arg6 parameter4:(unsigned int)arg7 parameter5:(unsigned int)arg8;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithUSBBuffer:(void*)arg1;
- (int)numParameters;
- (unsigned short)operationCode;
- (unsigned int)parameter1;
- (unsigned int)parameter2;
- (unsigned int)parameter3;
- (unsigned int)parameter4;
- (unsigned int)parameter5;
- (unsigned int)parameterAtIndex:(unsigned int)arg1;
- (void)setDataPhaseInfo:(unsigned int)arg1;
- (void)setOperationCode:(unsigned short)arg1;
- (void)setParameter1:(unsigned int)arg1;
- (void)setParameter2:(unsigned int)arg1;
- (void)setParameter3:(unsigned int)arg1;
- (void)setParameter4:(unsigned int)arg1;
- (void)setParameter5:(unsigned int)arg1;
- (void)setPparameter:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setTransactionID:(unsigned int)arg1;
- (unsigned int)transactionID;

@end
