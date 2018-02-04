/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageSigner : NSObject {
    NSString * _sender;
    int  _status;
    struct __SecTrust { } * _trust;
    NSString * _uncommentedSender;
}

@property (nonatomic, readonly) int action;
@property (nonatomic, readonly) NSArray *certificates;
@property (nonatomic, readonly) NSString *commonName;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) MFError *error;
@property (nonatomic, readonly) NSString *sender;

- (int)action;
- (void)addTrustException;
- (id)certificates;
- (id)commonName;
- (struct __SecTrust { }*)copyTrust;
- (void)dealloc;
- (id)emailAddress;
- (id)error;
- (bool)hasTrustException;
- (id)initWithSender:(id)arg1 trust:(struct __SecTrust { }*)arg2 verification:(int)arg3;
- (void)removeTrustException;
- (id)sender;

@end
