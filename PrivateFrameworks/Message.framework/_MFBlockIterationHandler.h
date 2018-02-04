/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor> {
    id /* block */  _block;
    bool  _cancelled;
    MFActivityMonitor * _monitor;
}

- (void)beginResult:(unsigned int)arg1;
- (void)dealloc;
- (void)endResult;
- (id)filter;
- (void)handleMessage:(id)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setResultDateRecieved:(double)arg1;
- (void)setResultSender:(char *)arg1;
- (void)setResultSubject:(char *)arg1;
- (void)setResultUnread:(bool)arg1;
- (bool)shouldCancel;

@end
