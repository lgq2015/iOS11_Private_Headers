/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingsSendSerializerPassthrough : NSObject {
    <BLTSettingsSendSerializerDelegate> * _delegate;
}

@property (nonatomic) <BLTSettingsSendSerializerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleFileURL:(id)arg1;
- (void)sendNowWithSent:(id /* block */)arg1 withAcknowledgement:(id /* block */)arg2 withTimeout:(id)arg3;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(id /* block */)arg6 andResponse:(id /* block */)arg7 spoolToFile:(bool)arg8;
- (void)setDelegate:(id)arg1;

@end
