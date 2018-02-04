/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDRadarFinisher : NSObject <DEDFinisher, NSSecureCoding, NSURLSessionDataDelegate> {
    NSArray * _attachments;
    NSMutableArray * _finishedAttachments;
    NSObject<OS_os_log> * _log;
    float  _percentComplete;
    DEDBugSession * _session;
}

@property (retain) NSArray *attachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableArray *finishedAttachments;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property float percentComplete;
@property DEDBugSession *session;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)attachments;
- (void)encodeWithCoder:(id)arg1;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)finishedAttachments;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)log;
- (float)percentComplete;
- (id)session;
- (void)setAttachments:(id)arg1;
- (void)setFinishedAttachments:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setPercentComplete:(float)arg1;
- (void)setSession:(id)arg1;

@end
