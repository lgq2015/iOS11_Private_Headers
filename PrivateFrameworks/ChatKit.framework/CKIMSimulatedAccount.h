/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKIMSimulatedAccount : IMAccount {
    IMHandle * _loginHandle;
}

@property (nonatomic, retain) IMHandle *loginHandle;

- (void).cxx_destruct;
- (id)loginHandle;
- (id)loginIMHandle;
- (void)setLoginHandle:(id)arg1;

@end
