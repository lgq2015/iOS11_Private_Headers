/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitCommandRequestPacket : NSObject {
    NSString * _initiatorFriendlyName;
    unsigned char  _initiatorGUID;
}

- (id)contentForTCP;
- (void)dealloc;
- (id)description;
- (id)initWithInitiatorGUID:(char *)arg1 initiatorFriendlyName:(id)arg2;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initiatorFriendlyName;
- (const char *)initiatorGUID;
- (void)setInitiatorFriendlyName:(id)arg1;
- (void)setInitiatorGUID:(char *)arg1;

@end
