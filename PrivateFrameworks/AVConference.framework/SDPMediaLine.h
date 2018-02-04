/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface SDPMediaLine : NSObject {
    bool  _allowRTCPFB;
    NSMutableArray * _attributes;
    VCImageAttributeRules * _imageAttributeRules;
    NSMutableArray * _payloads;
    int  _rtcpPort;
    unsigned int  _rtpId;
    int  _rtpPort;
}

@property (nonatomic, readonly) bool allowRTCPFB;
@property (nonatomic, readonly) NSArray *attributes;
@property (nonatomic, retain) VCImageAttributeRules *imageAttributeRules;
@property (nonatomic, readonly) NSArray *payloads;
@property (nonatomic, readonly) int rtcpPort;
@property (nonatomic) unsigned int rtpId;
@property (nonatomic, readonly) int rtpPort;
@property (nonatomic, readonly) NSString *string;

+ (void)fillImageArray:(id)arg1 imageArray:(struct imageTag { int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; int x9; }*)arg2;
+ (void)fillImageStruct:(id)arg1 imageStruct:(struct imageTag { int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; int x9; }*)arg2;
+ (void)fillImageStructWithDictionary:(id)arg1 forInterface:(int)arg2 imageStruct:(struct imageTag { int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; int x9; }*)arg3;

- (void)addAttribute:(id)arg1;
- (void)addImageAttributeRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 direction:(int)arg4 attributeString:(id)arg5;
- (void)addPayload:(int)arg1 rtpMap:(id)arg2 formatParameters:(id)arg3;
- (void)addVideoImageAttr:(id)arg1 ForPayload:(int)arg2;
- (void)addWifiRules:(id)arg1 cellularRules:(id)arg2 payload:(int)arg3 direction:(int)arg4;
- (bool)allowRTCPFB;
- (void)appendPayload:(int)arg1 dimensions:(struct imageTag { int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; int x9; }*)arg2 direction:(int)arg3 attributeString:(id)arg4;
- (id)attributes;
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag { int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; int x9; }*)arg3 count:(int)arg4;
- (void)dealloc;
- (id)getVideoRecvImages:(id)arg1;
- (id)getVideoSendImages:(id)arg1;
- (id)imageAttributeRules;
- (id)init;
- (id)initWithParser:(id)arg1 rtpPort:(int)arg2 payloads:(id)arg3;
- (void)parseAttribute:(id)arg1;
- (void)parseImageAttributeRules:(id)arg1;
- (void)parseMediaLine:(id)arg1;
- (id)payloads;
- (int)rtcpPort;
- (unsigned int)rtpId;
- (int)rtpPort;
- (void)setImageAttributeRules:(id)arg1;
- (void)setRtpId:(unsigned int)arg1;
- (id)string;
- (bool)supportImage:(id)arg1 width:(int)arg2 height:(int)arg3 rate:(int)arg4;
- (bool)videoDisplayAttribute:(int*)arg1 withHeight:(int*)arg2;
- (id)videoImageAttributes:(int)arg1;

@end
