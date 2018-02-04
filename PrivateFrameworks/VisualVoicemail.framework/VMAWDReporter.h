/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMAWDReporter : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    AWDServerConnection * _serverConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) AWDServerConnection *serverConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_reportMetricWithID:(unsigned int)arg1 metric:(id)arg2;
- (id)init;
- (id)queue;
- (void)reportVoicemailDownloadedWithDuration:(int)arg1;
- (void)reportVoicemailTranscriptionRatedAccurate:(bool)arg1;
- (id)serverConnection;
- (void)setQueue:(id)arg1;
- (void)setServerConnection:(id)arg1;

@end
