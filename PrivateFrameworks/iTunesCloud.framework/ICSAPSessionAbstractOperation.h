/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSAPSessionAbstractOperation : ICAsyncOperation {
    ICSAPSession * _sapSession;
}

@property (nonatomic, retain) ICSAPSession *sapSession;

- (void).cxx_destruct;
- (void)execute;
- (void)executeWithSAPContext:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)finishWithSAPContextPreparationError:(id)arg1;
- (id)sapSession;
- (void)setSapSession:(id)arg1;

@end
