/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyParserObject : NSObject {
    bool  _copyBlocks;
    bool  _didTimeout;
    bool  _shouldAbort;
    double  _timeoutInterval;
    double  _timeoutTime;
}

@property (nonatomic) double timeoutInterval;

- (void)abortParsing;
- (bool)areBlocksCopied;
- (void)copyBlocks;
- (void)messageBodyParserWillBeginParsing:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (bool)shouldProceedParsing;
- (double)timeoutInterval;

@end