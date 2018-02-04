/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMStateCapture : NSObject {
    unsigned long long  _handle;
    id /* block */  _stateCaptureBlock;
}

@property (nonatomic) unsigned long long handle;
@property (nonatomic, copy) id /* block */ stateCaptureBlock;

- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)_stateCapture;
- (void)dealloc;
- (unsigned long long)handle;
- (id)init;
- (void)registerHandlerforStateCapture;
- (void)setHandle:(unsigned long long)arg1;
- (void)setStateCaptureBlock:(id /* block */)arg1;
- (id /* block */)stateCaptureBlock;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)stateDataForDictionary:(id)arg1 title:(id)arg2;
- (void)unregisterHandlerforStateCapture;

@end